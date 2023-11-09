% data=csvread('ESO抗扰.csv');
tb=readtable('ESO抗扰.csv');
plot(tb.I12,tb.I36);
