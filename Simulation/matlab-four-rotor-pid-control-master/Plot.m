figure(1);
L_x=out.L_x.Data;
L_y=out.L_y.Data;
plot(L_x,L_y,'r-')
hold on
F1_x=out.F1_x.Data;
F1_y=out.F1_y.Data;
plot(F1_x,F1_y,'b-')
hold off
legend('领航者运动轨迹','跟随者1运动轨迹');