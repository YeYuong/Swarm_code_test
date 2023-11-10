% data=csvread('ESO抗扰.csv');
tb=readtable('ESO抗扰.csv');
len = height(tb);
y1 = tb.I36(1:15000);
y2 = tb.I36(len-16099:len-1100);
y7 = tb.I37(1:15000);
y8 = tb.I37(len-16099:len-1100);
y9 = tb.I32(1:15000);
y10 = tb.I32(len-16099:len-1100);
y11 = tb.I33(1:15000);
y12 = tb.I33(len-16099:len-1100);
x_t = tb.I12(1:15000);
% hold on;
% plot(x_t,y9, '--', 'DisplayName', 'STLF');
% plot(x_t,y10,'DisplayName', 'FTESO-STLF');
% legend;
% hold off;
% 设置画布，分为2行2列
figure;

% 第一幅图
subplot(2,2,1);
hold on;
plot(x_t, y1, '--', 'DisplayName', 'ISTSM', 'LineWidth', 1);
plot(x_t, y2, 'DisplayName', 'FTESO-ISTSM', 'LineWidth', 1);
title('a(1)');
xlabel('time/s','FontWeight', 'bold', 'FontSize', 26);
ylabel('X/m','FontWeight', 'bold', 'FontSize', 26);
set(gca,'FontWeight','bold', 'FontSize', 18);
ylim([-0.4, 0.4]);
legend('FontName', 'ISTSM', 'FontSize', 12);
legend('FontName', 'FTESO-ISTSM', 'FontSize', 12);
hold off;

% 第二幅图
subplot(2,2,2);
hold on;
plot(x_t, y7, '--', 'DisplayName', 'ISTSM', 'LineWidth', 1);
plot(x_t, y8, 'DisplayName', 'FTESO-ISTSM', 'LineWidth', 1);
title('a(2)');
xlabel('time/s','FontWeight', 'bold', 'FontSize', 26);
ylabel('Y/m','FontWeight', 'bold', 'FontSize', 26);
set(gca,'FontWeight','bold', 'FontSize', 18);
ylim([-0.4, 0.4]);
legend('FontName', 'ISTSM', 'FontSize', 12);
legend('FontName', 'FTESO-ISTSM', 'FontSize', 12);
hold off;

% 第三幅图
subplot(2,2,3);
hold on;
plot(x_t, y9, '--', 'DisplayName', 'ISTSM', 'LineWidth', 1);
plot(x_t, y10, 'DisplayName', 'FTESO-ISTSM', 'LineWidth', 1);
title('a(3)');
xlabel('time/s','FontWeight', 'bold', 'FontSize', 26);
ylabel('Ux','FontWeight', 'bold', 'FontSize', 26);
set(gca,'FontWeight','bold', 'FontSize', 18);
ylim([-10, 10]);
legend('FontName', 'ISTSM', 'FontSize', 12);
legend('FontName', 'FTESO-ISTSM', 'FontSize', 12);
hold off;

% 第四幅图
subplot(2,2,4);
hold on;
plot(x_t, y11, '--', 'DisplayName', 'ISTSM', 'LineWidth', 1);
plot(x_t, y12, 'DisplayName', 'FTESO-ISTSM', 'LineWidth', 1);
title('a(4)');
xlabel('time/s','FontWeight', 'bold', 'FontSize', 26);
ylabel('Uy','FontWeight', 'bold', 'FontSize', 26);
set(gca,'FontWeight','bold', 'FontSize', 18);
ylim([-10, 10]);
legend('FontName', 'ISTSM', 'FontSize', 12);
legend('FontName', 'FTESO-ISTSM', 'FontSize', 12);
hold off;