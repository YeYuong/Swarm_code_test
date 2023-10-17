import rospy
import numpy as np
import time
import std_msgs
import matplotlib.pyplot as plt
from visualization_msgs.msg import Marker
from geometry_msgs.msg import PoseStamped, TwistStamped
from geometry_msgs.msg import Point
from kuadmini import Kuadmini

INTERV_TIME = 0.05

# 领航、跟随机动捕刚体编号
leader_number = 0
leader_mc_x, leader_mc_y, leader_mc_z = 0.0, 0.0, 0.0
follower1_number = 1
follower1_mc_x, follower1_mc_y, follower1_mc_z = 0.0, 0.0, 0.0
old_fol1_err_x, old_fol1_err_y =0.0, 0.0
fol1_err_x, fol1_err_y = 0.0, 0.0
# follower2_number = 3
# follower2_mc_x,follow2_mc_y,follower2_mc_z = 0,0,0



# 领航、跟随机ROS话题回调函数
def leader_posi_cb(msg):
    # 解析动捕数据
    global leader_mc_x,leader_mc_y,leader_mc_z
    leader_mc_x = (msg.pose.position.x/1000)  # 领航机当前x位置,从毫米转化为米
    leader_mc_y = (msg.pose.position.y/1000)  # 领航机当前y位置
    leader_mc_z = (msg.pose.position.z/1000)  # 领航机当前z位置

def follower1_posi_cb(msg):
    # 解析动捕数据
    global follower1_mc_x,follower1_mc_y,follower1_mc_z
    follower1_mc_x = (msg.pose.position.x/1000)
    follower1_mc_y = (msg.pose.position.y/1000)
    follower1_mc_z = (msg.pose.position.z/1000)

def read_waypoint_data(path):
    data = np.loadtxt(path, dtype=np.float32)
    waypoints = [np.zeros((data.shape[0], 3), dtype="float32") for i in range(int(data.shape[1] / 3))]
    for i in range(data.shape[0]):
        for j in range(data.shape[1]):
            waypoints[int(j / 3)][i, j % 3] = data[i, j]
    return waypoints

def show_pos_now(pub, pos, id=0):
    points = Marker()
    points.header.frame_id = 'world'
    points.header.stamp = rospy.Time.now()
    points.ns = 'points_and_lines'
    points.pose.orientation.w = 1.0
    points.pose.orientation.x = 0.0
    points.pose.orientation.y = 0.0
    points.pose.orientation.z = 0.0
    points.action = Marker.ADD
    points.id = id
    points.type = Marker.SPHERE_LIST
    points.scale.x = 0.1
    points.scale.y = 0.1
    points.scale.z = 0.1
    if id==0:
        points.color = std_msgs.msg.ColorRGBA(0, 0, 1, 1)
    elif id==1:
        points.color = std_msgs.msg.ColorRGBA(0, 1, 0, 1)
    elif id==2:
        points.color = std_msgs.msg.ColorRGBA(1, 0, 0, 1)
    elif id==3:
        points.color = std_msgs.msg.ColorRGBA(1, 0.5, 0, 1)
    elif id==4:
        points.color = std_msgs.msg.ColorRGBA(0, 0, 1, 0.3)
    elif id==5:
        points.color = std_msgs.msg.ColorRGBA(0, 1, 0, 0.3)
    elif id==6:
        points.color = std_msgs.msg.ColorRGBA(1, 0, 0, 0.3)
    elif id==7:
        points.color = std_msgs.msg.ColorRGBA(1, 0.5, 0, 0.3)
    points.points.append(Point(pos[0], pos[1], pos[2]))
    # print(id, pos)
    pub.publish(points)

def goHover(kuad):
    time.sleep(0.2)
    print("\ntake off!")
    for __ in range(15):
        kuad.takeoff()
        time.sleep(0.2)
    print("\nhover!")
    for __ in range(30):
        kuad.goto(0.0,0.0,0.3)
        time.sleep(0.2)
    print("\nland!")
    kuad.land()
    time.sleep(0.1)

def goHovers(kuads):
    time.sleep(0.2)
    print("\ntake off!")
    for kuad in kuads:
        kuad.takeoff()
    time.sleep(1.5)

    print("\nland!")
    for kuad in kuads:
        kuad.land()
    time.sleep(0.1)

def goSwings(kuads):
    time.sleep(0.2)
    print("\ntake off!")
    for __ in range(15):
        for kuad in kuads:
            kuad.takeoff()
        time.sleep(0.1)
    print("\nhover!")
    for __ in range(10):
        for kuad in kuads:
            kuad.goto(0.0,0.0,0.2)
        time.sleep(0.1)
    print("\nright!")
    for __ in range(20):
        for kuad in kuads:
            kuad.goto(0.0,0.5,0.2)
        time.sleep(0.1)
    print("\nleft!")
    for __ in range(20):
        for kuad in kuads:
            kuad.goto(0.0,0.0,0.2)
        time.sleep(0.1)

    print("\nland!")
    for kuad in kuads:
        kuad.land()
    time.sleep(0.1)

#PID协同控制器
def swarm_controller(dt = INTERV_TIME):
    
    global old_fol1_err_x,old_fol1_err_y
    global  fol1_err_x, fol1_err_y
    kp,ki,kd = 1.0,0.0,0.0#PID参数确定
    d_x,d_y = -0.3,-0.3#期望编队距离参数确定

    #计算领航与跟随机1实际距离
    r_x =  leader_mc_x - follower1_mc_x
    r_y =  leader_mc_y - follower1_mc_y

    #计算距离误差
    fol1_err_x = d_x - r_x
    fol1_err_y = d_y - r_y
    #计算距离误差微分
    fol1_err_x_d = kd * (fol1_err_x - old_fol1_err_x) / dt
    fol1_err_y_d = kd * (fol1_err_y - old_fol1_err_y) / dt

    #计算距离误差积分
    fol1_err_x_i = ki * fol1_err_x * dt
    fol1_err_y_i = ki * fol1_err_y * dt

    #控制器实际输出
    out_x = kp * (fol1_err_x + fol1_err_x_i + fol1_err_x_d)
    out_y = kp * (fol1_err_y + fol1_err_y_i + fol1_err_y_d)

    old_fol1_err_x = fol1_err_x
    old_fol1_err_y = fol1_err_y

    return out_x,out_y



def goTrajactory(kuads, pub, traj_file):
    ctrl_waypoints = read_waypoint_data(traj_file)
    data = np.loadtxt(traj_file, dtype=np.float32)
    fol1_data_x = np.zeros((ctrl_waypoints[0].shape[0], 1))#跟随机X实际位置
    fol1_data_d_x = np.zeros((ctrl_waypoints[0].shape[0], 1))#跟随机X期望位置
    fol1_data_x_err = np.zeros((ctrl_waypoints[0].shape[0], 1))#编队控制器X误差
    fol1_data_y = np.zeros((ctrl_waypoints[0].shape[0], 1))
    fol1_data_d_y = np.zeros((ctrl_waypoints[0].shape[0], 1))
    fol1_data_y_err = np.zeros((ctrl_waypoints[0].shape[0], 1))
    
    #绘制曲线图形
    x_column = data[:, 3]#提取第一列数据
    # 计算时间值
    time_interval = 0.05  # 时间间隔为0.05秒
    time_values = np.arange(0, len(x_column) * time_interval, time_interval)

    number = len(ctrl_waypoints)
    time.sleep(0.2)
    print("\ntake off!")
    for tt in range(15):
        for agent_number in range(number):
            try:
                kuads[agent_number].takeoff()
            except IndexError as e:
                pass
        kuadmini_1.takeoff()#跟随机同样起飞  
        time.sleep(0.1)

    print("\rtrajactory!")
    for tt in range(ctrl_waypoints[0].shape[0]):#领航机开始跟随期望轨迹飞行，
        # print(ctrl_waypoints[0].shape[0])
        if rospy.is_shutdown():
            break
        fol1_data_x[tt, 0] = follower1_mc_x
        fol1_data_d_x[tt, 0] = follower1_mc_x + a[0]
        fol1_data_x_err[tt, 0] = old_fol1_err_x
        fol1_data_y[tt, 0] = follower1_mc_y
        fol1_data_d_y[tt, 0] = follower1_mc_y + a[1]
        fol1_data_y_err[tt, 0] = old_fol1_err_y
        print(follower1_mc_x,old_fol1_err_x,end="\n")
        a = swarm_controller(dt = 0.05)#编队控制器
        kuadmini_1.goto(follower1_mc_x + a[0], follower1_mc_y + a[1], ctrl_waypoints[1][tt][2])
        for agent_number in range(number):
            try:
                kuads[agent_number].goto(ctrl_waypoints[agent_number][tt][0], ctrl_waypoints[agent_number][tt][1], ctrl_waypoints[agent_number][tt][2])
                show_pos_now(pub, [kuads[agent_number].mc_x, kuads[agent_number].mc_y, kuads[agent_number].mc_z], agent_number)
            except IndexError as e:
                pass
            show_pos_now(pub, [ctrl_waypoints[agent_number][tt][0], ctrl_waypoints[agent_number][tt][1], ctrl_waypoints[agent_number][tt][2]], agent_number + 4)
        time.sleep(0.05)
    
    for agent_number in range(number):
        try:
            kuads[agent_number].land()
        except IndexError as e:
            pass
    kuadmini_1.land()
    time.sleep(1.5)

     # 创建曲线图
    plt.figure(figsize=(8, 6))
    plt.plot(time_values, fol1_data_x, linestyle='-', color='b', label='Data1')  # 绘制原始曲线1
    plt.plot(time_values, fol1_data_d_x, linestyle='-', color='r', label='Data2')  # 绘制原始曲线2
    plt.plot(time_values, fol1_data_x_err, linestyle='-', color='g', label='Data3')  # 绘制原始曲线3
    # plt.plot(smooth_time_values, smooth_first_column, color='r', label='Smooth Curve')  #绘制平滑曲线
    plt.xlabel('Time (seconds)')
    plt.ylabel('Vertical Distance (units)')
    plt.title('Smooth Vertical Distance vs. Time')
    plt.grid(True)
    plt.legend()
    plt.show()


if __name__ == "__main__":

    addr_kuadmini0=('192.168.0.160',1000) # 直连地址
    addr_kuadmini1=('192.168.0.161',1000) # 直连地址
    addr_kuadmini2=('192.168.0.162',1000) # 直连地址
    addr_kuadmini3=('192.168.0.163',1000) # 直连地址
    addr_kuadmini4=('192.168.0.164',1000) # 直连地址
    addr_vofa=('127.0.0.1',1347)
    addr_kground=('127.0.0.1',2001) # 通过上位机转发
    rospy.init_node('kuadmini_swarm', anonymous=False, disable_signals=True)

    # 订阅领航机动捕话题
    # rospy.Subscriber('/vrpn_client_node/MCServer/{}/pose'.format(leader_number),PoseStamped,leader_posi_cb)
    # 订阅跟随机1动捕话题
    # rospy.Subscriber('/vrpn_client_node/MCServer/{}/pose'.format(follower1_number),PoseStamped,follower1_posi_cb)

    kuadmini_0 = Kuadmini(addr_kuadmini0, number=0, use_tcp=1)
    kuadmini_1 = Kuadmini(addr_kuadmini1, number=1, use_tcp=1)
    # kuadmini_2 = Kuadmini(addr_kuadmini2, number=2, use_tcp=1)
    # kuadmini_3 = Kuadmini(addr_kuadmini3, number=3, use_tcp=1)
    # kuadmini_k = Kuadmini(addr_kground, number=0, use_tcp=1)

    pub = rospy.Publisher("traj_show", Marker, queue_size=10)

    # goHover(kuadmini_k)# kuadmini_0, kuadmini_1, kuadmini_2,
    # goSwings((kuadmini_0,))
    goTrajactory((kuadmini_0,), pub, "line1.txt")

    while not rospy.is_shutdown():
        time.sleep(1)
        pass

