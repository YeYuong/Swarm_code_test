import rospy
import numpy as np
import time
import std_msgs
import matplotlib.pyplot as plt
import threading
from visualization_msgs.msg import Marker
from geometry_msgs.msg import PoseStamped, TwistStamped
from geometry_msgs.msg import Point
from kuadmini import Kuadmini

# INTERV_TIME = 0.05

# 领航、跟随机动捕刚体编号,位置（m）
leader_number = 0
leader_mc_x, leader_mc_y, leader_mc_z = 0.0, 0.0, 0.0
follower1_number = 3
follower1_mc_x, follower1_mc_y, follower1_mc_z = 0.0, 0.0, 0.0
old_fol1_err_x, old_fol1_err_y =0.0, 0.0
fol1_err_x, fol1_err_y = 0.0, 0.0
fol1_err_x_lpf, fol1_err_y_lpf = 0.0, 0.0
r_x, r_y = 0.0, 0.0
dx,dy = 0.0, 0.0
old_dx,old_dy = 0.0, 0.0
d_dx,d_dy = 0.0, 0.0
old_d_dx,old_d_dy = 0.0, 0.0
dd_dx,dd_dy = 0.0, 0.0
#观测器观测位置及观测扰动
ob_x,ob_dis = 0.0,0.0
# follower2_number = 3
# follower2_mc_x,follow2_mc_y,follower2_mc_z = 0,0,0

fol1_x_values = []
fol1_y_values = []
leader_x_values = []
leader_y_values = []
time_values = []
expect_fol1_x, expect_fol1_y = 0.0, 0.0
 
fol1_err_values_x = []
fol1_err_values_y = []


# 领航、跟随机ROS话题回调函数
def leader_posi_cb(msg):
    # 解析动捕数据
    global leader_mc_x,leader_mc_y,leader_mc_z
    leader_mc_x = (msg.pose.position.x/1000)  # 领航机当前x位置,从毫米转化为米
    leader_mc_y = (msg.pose.position.y/1000)  # 领航机当前y位置
    leader_mc_z = (msg.pose.position.z/1000)  # 领航机当前z位置
    # 获取当前时间戳
    current_time = rospy.Time.now()
    # 将时间戳转换为秒
    time_in_seconds = (current_time - initial_time).to_sec()
    # 添加时间戳和数据到列表
    time_values.append(time_in_seconds)
    leader_x_values.append(leader_mc_x)#领航机x,y坐标数据添加
    leader_y_values.append(leader_mc_y)

# 在程序执行完之后，将数据写入文件
def save_data_to_file():
    with open("ESO_ST.txt", "w") as file:
        for i in range(len(time_values)):
            file.write(f"{time_values[i]} {leader_x_values[i]} {leader_y_values[i]} {fol1_x_values[i]} {fol1_y_values[i]} {fol1_err_values_x[i]} {fol1_err_values_y[i]}\n")

def plot_from_file():
    x_values = []
    y_values = []
    time = []
    with open("ESO_ST.txt", "r") as file:
        lines = file.readlines()
        for line in lines:
            parts = line.split()
            time.append(float(parts[0]))
            x_values.append(float(parts[5]))
            y_values.append(float(parts[6]))

    # plt.plot(time, x_values, linestyle='-', color='b', label='Data 1')
    # plt.plot(time, y_values, linestyle='-', color='r', label='Data 2')
    plt.plot(time, x_values, linestyle='-', color='r', label='Data 1')
    plt.plot(time, y_values, linestyle='-', color='r', label='Data 2')
    plt.xlabel('Time (seconds)')
    plt.ylabel('Position')
    plt.title('Leader Position Over Time')
    plt.legend()
    plt.show()


def leader_plot():
    plt.ion()
    plt.figure()
    plt.xlabel('Time (seconds)')
    plt.ylabel('Data')
    plt.title('Time-Based Plot')
    plt.plot(time_values, fol1_x_values, linestyle='-', color='b', label='Data1')
    plt.plot(time_values, fol1_y_values, linestyle='-', color='r', label='Data2')
    # plt.savefig("leader_x_circle_SMC.png")
    plt.show()

def follower1_posi_cb(msg):
    # 解析动捕数据
    global follower1_mc_x,follower1_mc_y,follower1_mc_z
    follower1_mc_x = (msg.pose.position.x/1000)
    follower1_mc_y = (msg.pose.position.y/1000)
    follower1_mc_z = (msg.pose.position.z/1000)
    x_err = expect_fol1_x - follower1_mc_x 
    y_err = expect_fol1_y - follower1_mc_y 

    fol1_x_values.append(follower1_mc_x)
    fol1_y_values.append(follower1_mc_y)
    fol1_err_values_x.append(x_err)
    fol1_err_values_y.append(y_err)

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

def sign(x):#切换函数定义
    if x < 0:
        return -1
    elif x > 0:
        return 1
    else:
        return 0

#PID协同控制器，再加入ESO观测器（一阶，从位置部分进行扩张观测）
def swarm_controller(dt):
    
    global old_fol1_err_x,old_fol1_err_y
    global fol1_err_x, fol1_err_y
    global fol1_err_x_lpf, fol1_err_y_lpf
    global r_x,r_y
    global ob_x,ob_dis
    global dx,dy
    global old_dx,old_dy
    global old_d_dx,old_d_dy 

    kp,ki,kd =1.0,0.0,1.0#PID参数确定
    c = 5#滑模面参数
    f = 0.5#滑模趋近律参数
    d_x,d_y = 0.2,0.2#期望编队距离参数确定
    # b = 4 
    # bate1 = 30
    # bate2 = bate1 * 3#观测器调参系数
    #计算领航与跟随机1实际距离
    r_x =  leader_mc_x - follower1_mc_x
    r_y =  leader_mc_y - follower1_mc_y

    dx = 0.0
    dy = 0.0
    #计算距离误差
    # fol1_err_x = d_x - r_x
    # fol1_err_y = d_y - r_y
    #换用定点（0，0）
    fol1_err_x = dx - follower1_mc_x
    fol1_err_y = dy - follower1_mc_y

    #对误差进行滤波，更加平滑
    # fol1_err_x_lpf += 1*(fol1_err_x - fol1_err_x_lpf) 
    # fol1_err_y_lpf += 1*(fol1_err_y - fol1_err_x_lpf)

    #计算距离误差微分 e导
    fol1_err_x_d =  (fol1_err_x - old_fol1_err_x) / dt
    fol1_err_y_d =  (fol1_err_y - old_fol1_err_y) / dt

    #计算期望距离一阶 二阶导
    d_dx = (dx - old_dx) / dt
    d_dy = (dy - old_dy) / dt
    dd_dx = (d_dx - old_d_dx) / dt
    dd_dy = (d_dy - old_d_dy) / dt

    #滑模面定义
    s_x = c*fol1_err_x + fol1_err_x_d
    s_y = c*fol1_err_y + fol1_err_y_d

    #计算距离误差积分
    fol1_err_x_i = ki * fol1_err_x_lpf * dt
    fol1_err_y_i = ki * fol1_err_y_lpf * dt

    #PID控制器实际输出
    # out_x = kp * (fol1_err_x_lpf + fol1_err_x_i + fol1_err_x_d)
    # out_y = kp * (fol1_err_y_lpf + fol1_err_y_i + fol1_err_y_d)
    #滑模控制器实际输出
    out_x = (dd_dx - c*fol1_err_x_d - f*sign(s_x)) * 0.04
    out_y = (dd_dy - c*fol1_err_y_d - f*sign(s_y)) * 0.04
    #计算观测器误差
    # ob_err = r_x - ob_x
    # ob_x   += dt * (ob_dis + bate1 * ob_err + out_x)
    # ob_dis += dt * bate2 * ob_err 

    #将观测扰动进行前馈补偿
    # out_x = out_x - ob_dis/b

    old_dx = dx
    old_dy = dy
    old_d_dx = d_dx
    old_d_dy = d_dy
    old_fol1_err_x = fol1_err_x
    old_fol1_err_y = fol1_err_y

    return out_x,out_y



def goTrajactory(kuads, pub, traj_file):

    global expect_fol1_x,expect_fol1_y
    ctrl_waypoints = read_waypoint_data(traj_file)
    
    # number = len(ctrl_waypoints)
    number = 1
    time.sleep(0.2)
    print("\ntake off!")
    for tt in range(3):
        for agent_number in range(number):
            try:
                kuads[agent_number].takeoff()
            except IndexError as e:
                pass
        kuadmini_3.takeoff()#跟随机同样起飞  
        time.sleep(0.1)

    print("\rtrajactory!")
    #给与目标点次数
    nb_waypoints = ctrl_waypoints[0].shape[0] 
  
    for tt in range(nb_waypoints):
        yy = tt 
        if rospy.is_shutdown():
            break
        kuadmini_3.goto(ctrl_waypoints[agent_number][yy][0] - 0.4, ctrl_waypoints[agent_number][yy][1] - 0.4, ctrl_waypoints[0][yy][2])  
        expect_fol1_x = ctrl_waypoints[agent_number][yy][0] - 0.4
        expect_fol1_y = ctrl_waypoints[agent_number][yy][1] - 0.4
        for agent_number in range(number):
            try:
                kuads[agent_number].goto(ctrl_waypoints[agent_number][yy][0], ctrl_waypoints[agent_number][yy][1], ctrl_waypoints[agent_number][yy][2])
                show_pos_now(pub, [kuads[agent_number].mc_x, kuads[agent_number].mc_y, kuads[agent_number].mc_z], agent_number)
            except IndexError as e:
                pass
            show_pos_now(pub, [ctrl_waypoints[agent_number][yy][0], ctrl_waypoints[agent_number][yy][1], ctrl_waypoints[agent_number][yy][2]], agent_number + 4)
        time.sleep(0.03)
    
    for agent_number in range(number):
        try:
            kuads[agent_number].land()
        except IndexError as e:
            pass
    kuadmini_3.land()
    time.sleep(1.5)


if __name__ == "__main__":

    addr_kuadmini0=('192.168.0.160',1000) # 直连地址
    addr_kuadmini1=('192.168.0.161',1000) # 直连地址
    addr_kuadmini2=('192.168.0.162',1000) # 直连地址
    addr_kuadmini3=('192.168.0.163',1000) # 直连地址
    addr_kuadmini4=('192.168.0.164',1000) # 直连地址
    addr_vofa=('127.0.0.1',1347)
    addr_kground=('127.0.0.1',2001) # 通过上位机转发
    rospy.init_node('kuadmini_swarm', anonymous=False, disable_signals=True)
    initial_time = rospy.Time.now()

    # 订阅领航机动捕话题
    rospy.Subscriber('/vrpn_client_node/MCServer/{}/pose'.format(leader_number),PoseStamped,leader_posi_cb)
    # 订阅跟随机1动捕话题
    rospy.Subscriber('/vrpn_client_node/MCServer/{}/pose'.format(follower1_number),PoseStamped,follower1_posi_cb)

    kuadmini_0 = Kuadmini(addr_kground, number=0, use_tcp=1)
    # kuadmini_1 = Kuadmini(addr_kground, number=1, use_tcp=1)
    # kuadmini_2 = Kuadmini(addr_kuadmini2, number=2, use_tcp=1)
    # kuadmini_3 = Kuadmini(addr_kground, number=3, use_tcp=1)
    # kuadmini_4 = Kuadmini(addr_kground, number=4, use_tcp=1)
    # kuadmini_k = Kuadmini(addr_kground, number=0, use_tcp=1)

    pub = rospy.Publisher("traj_show", Marker, queue_size=10)

    # goHover(kuadmini_k)# kuadmini_0, kuadmini_1, kuadmini_2,
    # goSwings((kuadmini_0,))
    # goTrajactory((kuadmini_0,), pub, "line1.txt")
    
    # save_data_to_file()#将数据存储
    # leader_plot()
    
    # plot_from_file()
    # 创建线程执行 goTrajactory 函数
    # traj_thread = threading.Thread(target=goTrajactory, args=((kuadmini_0,), pub, "line1.txt"))
    # plot_thread = threading.Thread(target=leader_plot)

    # traj_thread.start()
    # plot_thread.start()
    # traj_thread.join()
    # plot_thread.join()

    rospy.spin()

