function [sys,x0,str,ts]=eso_y(t,x,u,flag)
switch flag,
case 0,
    [sys,x0,str,ts]=mdlInitializeSizes;
case 1,
    sys=mdlDerivatives(t,x,u);
case 3,
    sys=mdlOutputs(t,x,u);
case {2, 4, 9 }
    sys = [];
otherwise
    error(['Unhandled flag = ',num2str(flag)]);
end
function [sys,x0,str,ts]=mdlInitializeSizes
sizes = simsizes;
sizes.NumContStates  = 3;
sizes.NumDiscStates  = 0;
sizes.NumOutputs     = 3;
sizes.NumInputs      = 2;
sizes.DirFeedthrough = 1;
sizes.NumSampleTimes = 0;
sys=simsizes(sizes);
x0=[0 0 0];
str=[];
ts=[];
function sys=mdlDerivatives(t,x,u)
ut=u(1);
x1=u(2);

w=20;
t=-1/6;
m2=1+t;
m3=1+2*t;
m4=1+3*t;

%m=1.5;
%b=1/m;
e=x1-x(1);
e_=abs(e);


sys(1)=x(2)+3*w*e_^m2*sign(e);
sys(2)=ut+x(3)+3*w^2*e_^m3*sign(e);
sys(3)=w^3*e_^m4*sign(e);
if sys(3) > -0.08 && sys(3) < 0.08
    sys(3) = sys(3);
else
    sys(3) = 0;
end

function sys=mdlOutputs(t,x,u)
sys(1)=x(1);
sys(2)=x(2);
sys(3)=x(3);