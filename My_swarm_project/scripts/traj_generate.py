import numpy as np
import rospy
import time
import sys
import traceback
import std_msgs
import matplotlib.pyplot as plt
from scipy.interpolate import interp1d
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point

INTERV_TIME = 0.03

def generate_hoverline(head=[0,-1,0.2], tail=[0,1,0.2], number=3, hover_time=1, interv_time=INTERV_TIME):
    row_ = round(hover_time/interv_time)
    column_ = 3 * number
    waypoints = np.zeros((row_, column_), dtype="float32")
    for row in range(row_):
        for agent_number in range(number):
            waypoints[row][agent_number*3:(agent_number*3 + 3)] = np.array(head) + agent_number*(np.array(tail) - np.array(head))/(number-1)
    return waypoints

def generate_hovercircle(center=[0,0,0.2], radius=0.5, number=3, start_angle=-45, hover_time=1, interv_time=INTERV_TIME):
    row_ = round(hover_time/interv_time)
    column_ = 3 * number
    waypoints = np.zeros((row_, column_), dtype="float32")
    for row in range(row_):
        for agent_number in range(number):
            angle = (360.0 / number)*agent_number + start_angle
            waypoints[row][agent_number*3 + 0] = center[0] + np.cos((angle/57.29577951308232)) * radius
            waypoints[row][agent_number*3 + 1] = center[1] + np.sin((angle/57.29577951308232)) * radius
            waypoints[row][agent_number*3 + 2] = center[2]
    return waypoints

def generate_circle(center=[0,0,0.2], radius=0.5, end_height=-1, speed=0.5, number=3, start_angle=-135, loop=1, interv_time=INTERV_TIME):
    perimeter = 2.0 * np.pi * radius
    w = 57.29577951308232*speed/radius
    row_ = round(perimeter * loop / (interv_time * speed)) + 1
    column_ = 3 * number
    if(end_height > 0):
        raise_deri = (end_height-center[2])/row_
    else:
        raise_deri = 0
    waypoints = np.zeros((row_, column_), dtype="float32")
    for row in range(row_):
        for agent_number in range(number):
            angle = (360.0 / number)*agent_number + start_angle + w * row * interv_time
            waypoints[row][agent_number*3 + 0] = center[0] + np.cos((angle/57.29577951308232)) * radius
            waypoints[row][agent_number*3 + 1] = center[1] + np.sin((angle/57.29577951308232)) * radius
            waypoints[row][agent_number*3 + 2] = center[2] + raise_deri * row
            # print(row, int(angle), waypoints[row][0], waypoints[row][1])
    return waypoints

def generate_snake(waypoint, headtotail=1, headto=[0,0,0], speed=0.5, number=3, interv_time=INTERV_TIME):
    start = waypoint[-1]
    if headtotail==1:
        end = np.hstack((waypoint[-1][-3:],waypoint[-1][0:-3]))
    else:
        end = np.hstack((np.array(headto),waypoint[-1][0:-3]))
    distance = np.zeros((1,number))
    for agent_number in range(number):
        distance[0][agent_number] = np.sqrt(np.sum(np.square(start[agent_number*3:agent_number*3+3] - end[agent_number*3:agent_number*3+3])))
    if min(distance[0])<0.3:
        print("move distance too small", distance[0])
        print(traceback.format_exception_only())

        sys.exit(1)
    row_ = round(max(distance[0])/(interv_time*speed))
    column_ = 3 * number
    waypoints = np.zeros((row_ + 1, column_), dtype="float32")
    for row in range(row_):
        waypoints[row] = start + row * (end - start)/row_
        waypoints[row] = start + row * (end - start)/row_
        waypoints[row] = start + row * (end - start)/row_
    waypoints[-1] = end
    return waypoints

def generate_transition(waypoint1, waypoint2, speed = 0.5, number=3, interv_time = INTERV_TIME):
    start = waypoint1[-1]
    end = waypoint2[0]
    distance = np.zeros((1,number))
    for agent_number in range(number):
        distance[0][agent_number] = np.sqrt(np.sum(np.square(start[agent_number*3:agent_number*3+3] - end[agent_number*3:agent_number*3+3])))
    row_ = round(max(distance[0])/(interv_time*speed))
    column_ = 3 * number
    waypoints = np.zeros((row_ +1 , column_), dtype="float32")
    for row in range(row_):
        waypoints[row] = start + row * (end - start)/row_
        waypoints[row] = start + row * (end - start)/row_
        waypoints[row] = start + row * (end - start)/row_
    waypoints[-1] = end
    return waypoints


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
    else:
        points.color = std_msgs.msg.ColorRGBA(1, 1, 1, 1)
    points.points.append(Point(pos[0], pos[1], pos[2]))
    # print(id, pos)
    pub.publish(points)

if __name__ == "__main__":

    rospy.init_node('traj_generate_node')
#   square
    # waypoint0 = generate_hovercircle(center=[0.3, 0.3, 0.2], radius=0.42, start_angle=-135, hover_time=1)
    # waypoint1 = generate_snake(waypoint0, headtotail=1, speed=0.3, headto=[0,0,0.5])
    # waypoint2 = generate_snake(waypoint1, headtotail=1, speed=0.3, headto=[0,0.5,0.5])
    # waypoint3 = generate_snake(waypoint2, headtotail=1, speed=0.3, headto=[0.5,0.5,0.5])
    # waypoint4 = generate_snake(waypoint3, headtotail=1, speed=0.3, headto=[0.5,0.0,0.5])
    # waypoint5 = generate_hovercircle(center=[0.3, 0.3, 0.2], radius=0.42, start_angle=-135, hover_time=1)

    # waypoints = np.vstack((waypoint0, waypoint1, waypoint2, waypoint3, waypoint4, waypoint5))

#   circle
    # waypoint0 = generate_hovercircle(center=[0.0, 0.0, 0.2], radius=0.5, start_angle=90, hover_time=2)
    # waypoint1 = generate_circle(center=[0.0, 0.0, 0.2], radius=0.5, end_height=1.0, loop=1, speed=0.2, start_angle=90)
    # waypoint2 = generate_circle(center=[0.0, 0.0, 1.0], radius=0.5, end_height=0.2, loop=1, speed=0.2, start_angle=90)
    # waypoint1to2 = generate_transition(waypoint1, waypoint2, speed=0.1)
    # waypoint3 = generate_hovercircle(center=[0.0, 0.0, 0.2], start_angle=90, hover_time=2)
    # waypoint2to3 = generate_transition(waypoint2, waypoint3, speed=0.1)

    # waypoints = np.vstack((waypoint0, waypoint1, waypoint2, waypoint3,waypoint0))

#   line
    # waypoint0 = generate_hoverline([0, -1, 0.2], [0, 1, 0.2], hover_time=1)
    # waypoint1 = generate_hoverline([0, -1, 0.2], [0, 1, 1.8], hover_time=1)
    # waypoint0to1 = generate_transition(waypoint0, waypoint1, speed=0.4)
    # waypoint2 = generate_hoverline([0.4, -1, 0.2], [-0.4, 1, 1.8], hover_time=0.5)
    # waypoint1to2 = generate_transition(waypoint1, waypoint2, speed=0.4)
    # waypoint3 = generate_hoverline([-0.4, -1, 0.2], [0.4, 1, 1.8], hover_time=0.5)
    # waypoint2to3 = generate_transition(waypoint2, waypoint3, speed=0.4)
    # waypoint4 = generate_hovercircle(center=[0, 0, 1], radius=0.42, start_angle=-135, hover_time=1)
    # waypoint3to4 = generate_transition(waypoint3, waypoint4, speed=0.3)
    # waypoint5 = generate_circle(center=[0, 0, 1], radius=0.42, loop=1, speed=0.25)
    # waypoint6 = generate_hovercircle(center=[0, 0, 1], radius=0.42, start_angle=-135, hover_time=1)
    # waypoint6to0 = generate_transition(waypoint4, waypoint0, speed=0.3)
    # waypoints = np.vstack((waypoint0, waypoint0to1,
    #                        waypoint1, waypoint1to2,
    #                        waypoint2, waypoint2to3,
    #                        waypoint3, waypoint3to4,
    #                        waypoint4, 
    #                        waypoint5, 
    #                        waypoint6, waypoint6to0,
    #                        waypoint0))
    
#   自行编队方案1 直线前进
    # waypoint0 = generate_hoverline([0, -1, 0.2], [0, 1, 0.2], hover_time=4)
    # # waypoint1 = generate_hoverline([0, -1, 0.2], [0, 1, 0.2], hover_time=2)
    # # waypoint0to1 = generate_transition(waypoint0, waypoint1, speed=0.2)
    # waypoint2 = generate_hoverline([1, -1, 0.2], [1, 1, 0.2], hover_time=2)
    # waypoint0to2 = generate_transition(waypoint0, waypoint2, speed=0.02)
    # waypoint3 = generate_hoverline([1, -1, 0.2], [1, 1, 0.2], hover_time=2)
    # waypoint2to3 = generate_transition(waypoint2, waypoint3, speed=0.02)
    # waypoints = np.vstack((waypoint0, waypoint0to2,
    #                        waypoint2, waypoint2to3,
    #                        waypoint3))
#   自行编队方案2 绕圆一圈
    waypoint0 = generate_hovercircle(center=[0.0, 0.0, 0.2], radius=0.3, start_angle=90, hover_time=4)
    # waypoint1 = generate_hovercircle(center=[0.0, 0.0, 0.5], radius=0.5, start_angle=90, hover_time=2)
    # waypoint0to1 = generate_transition(waypoint0, waypoint1, speed=0.2)
    waypoint2 = generate_circle(center=[0.0, 0.0, 0.2], radius=0.3, end_height=0.2, loop=1, speed=0.02, start_angle=90)
    # waypoint2 = generate_circle(center=[0.0, 0.0, 0.5], radius=0.5, end_height=0.2, loop=1, speed=0.2, start_angle=90)
    waypoint3 = generate_hovercircle(center=[0.0, 0.0, 0.2], radius=0.3, start_angle=90, hover_time=2)
    # waypoint2to3 = generate_transition(waypoint2, waypoint3, speed=0.2)
    waypoints = np.vstack((waypoint0,
                           waypoint2,
                           waypoint3))

    np.savetxt("circle.txt", waypoints, fmt="%.4f")
    
    #绘制图形
    x_column = waypoints[:, 0]#提取第一列数据

    # 计算时间值
    time_interval = 0.03 # 时间间隔为0.05秒
    time_values = np.arange(0, len(x_column) * time_interval, time_interval) - 1

    # 使用线性插值创建平滑曲线
    # interpolated_function = interp1d(time_values, x_column, kind='cubic')
    # smooth_time_values = np.linspace(time_values[0], time_values[-1], 100)  # 更多数据点以实现平滑曲线
    # smooth_first_column = interpolated_function(smooth_time_values)

    # 创建曲线图
    plt.figure(figsize=(8, 6))
    plt.plot(time_values, x_column, linestyle='-', marker = 'o', color='b', label='Original Data')  # 绘制原始曲线
    # plt.plot(smooth_time_values, smooth_first_column, color='r', label='Smooth Curve')  #绘制平滑曲线
    plt.xlabel('Time (seconds)')
    plt.ylabel('Vertical Distance (units)')
    plt.title('Smooth Vertical Distance vs. Time')
    plt.grid(True)
    plt.legend()
    # plt.show()


    ctrl_waypoint = read_waypoint_data("circle.txt")
    # number = len(ctrl_waypoint)
    # print(number)

    # print(ctrl_waypoint[0].shape)

    pub = rospy.Publisher("traj_show", Marker, queue_size=10)

    for tt in range(ctrl_waypoint[0].shape[0]):
        if rospy.is_shutdown():
            break
        for ii in range(3):
            show_pos_now(pub, [ctrl_waypoint[ii][tt][0], ctrl_waypoint[ii][tt][1], ctrl_waypoint[ii][tt][2]], ii)
        time.sleep(0.03)

    plt.show()