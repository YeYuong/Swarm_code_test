figure(1);
L_x=Leader{1}.Values.Data;
L_y=Leader{2}.Values.Data;
plot(L_x,L_y,'r-')
hold on
F1_x=Follower1{1}.Values.Data;
F1_y=Follower1{2}.Values.Data;
plot(F1_x,F1_y,'b-')
hold off
legend('领航者运动轨迹','跟随者1运动轨迹');