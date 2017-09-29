a=load('diagonal_A_40_5.000000.txt');
b=load('diagonal_A_80_5.000000.txt');
c=load('diagonal_A_120_5.000000.txt');
d=load('diagonal_A_160_5.000000.txt');
e=load('diagonal_A_200_5.000000.txt');
f=load('diagonal_A_240_5.000000.txt');
g=load('diagonal_A_280_5.000000.txt');
h=load('diagonal_A_320_5.000000.txt');
i=load('diagonal_A_360_5.000000.txt');
j=load('diagonal_A_400_5.000000.txt');
a2=load('diagonal_A_40_3.000000.txt');
b2=load('diagonal_A_80_3.000000.txt');
c2=load('diagonal_A_120_3.000000.txt');
d2=load('diagonal_A_160_3.000000.txt');
e2=load('diagonal_A_200_3.000000.txt');
f2=load('diagonal_A_240_3.000000.txt');
g2=load('diagonal_A_280_3.000000.txt');
h2=load('diagonal_A_320_3.000000.txt');
i2=load('diagonal_A_360_3.000000.txt');
j2=load('diagonal_A_400_3.000000.txt');
a3=load('diagonal_A_40_1.000000.txt');
b3=load('diagonal_A_80_1.000000.txt');
c3=load('diagonal_A_120_1.000000.txt');
d3=load('diagonal_A_160_1.000000.txt');
e3=load('diagonal_A_200_1.000000.txt');
f3=load('diagonal_A_240_1.000000.txt');
g3=load('diagonal_A_280_1.000000.txt');
h3=load('diagonal_A_320_1.000000.txt');
i3=load('diagonal_A_360_1.000000.txt');
j3=load('diagonal_A_400_1.000000.txt');
a4=load('diagonal_A_40_10.000000.txt');
b4=load('diagonal_A_80_10.000000.txt');
c4=load('diagonal_A_120_10.000000.txt');
d4=load('diagonal_A_160_10.000000.txt');
e4=load('diagonal_A_200_10.000000.txt');
f4=load('diagonal_A_240_10.000000.txt');
g4=load('diagonal_A_280_10.000000.txt');
h4=load('diagonal_A_320_10.000000.txt');
i4=load('diagonal_A_360_10.000000.txt');
j4=load('diagonal_A_400_10.000000.txt');

eigen=[a;b;c;d;e;f;g;h;i;j];
eigen2=[a2;b2;c2;d2;e2;f2;g2;h2;i2;j2];
eigen3=[a3;b3;c3;d3;e3;f3;g3;h3;i3;j3];
eigen4=[a4;b4;c4;d4;e4;f4;g4;h4;i4;j4];
x = linspace(1,10,10);
xx = x.*40;

figure(1)
%bar(x,'stacked'),set(gca,'yscale','log')
plot(eigen,'r-'),set(gca,'yscale','log')
xlabel('Values of n');
ax = gca;
ax.XLim = [0 10];
ax.XTick = [1 2 3 4 5 6 7 8 9 10];
ax.XTickLabel = [xx];
ylabel('Eigenvalue');
title('Romax = 5');
hold on;
plot([0 15],[3 3], 'k-');
plot([0 15],[7 7], 'k-');
plot([0 15],[11 11], 'k-');

figure(2)
%bar(x,'stacked'),set(gca,'yscale','log')
plot(eigen2,'r-'),set(gca,'yscale','log')
xlabel('Values of n');
ax = gca;
ax.XLim = [0 10];
ax.XTick = [1 2 3 4 5 6 7 8 9 10];
ax.XTickLabel = [xx];
ylabel('Eigenvalue');
title('Romax = 3');
hold on;
plot([0 15],[3 3], 'k-');
plot([0 15],[7 7], 'k-');
plot([0 15],[11 11], 'k-');

figure(3)
%bar(x,'stacked'),set(gca,'yscale','log')
plot(eigen3,'r-'),set(gca,'yscale','log')
xlabel('Values of n');
ax = gca;
ax.XLim = [0 10];
ax.XTick = [1 2 3 4 5 6 7 8 9 10];
ax.XTickLabel = [xx];
ylabel('Eigenvalue');
title('Romax = 1');
hold on;
plot([0 15],[3 3], 'k-');
plot([0 15],[7 7], 'k-');
plot([0 15],[11 11], 'k-');

figure(4)
%bar(x,'stacked'),set(gca,'yscale','log')
plot(eigen4,'r-'),set(gca,'yscale','log')
xlabel('Values of n');
ax = gca;
ax.XLim = [0 10];
ax.XTick = [1 2 3 4 5 6 7 8 9 10];
ax.XTickLabel = [xx];
ylabel('Eigenvalue');
title('Romax = 10');
hold on;
plot([0 15],[3 3], 'k-');
plot([0 15],[7 7], 'k-');
plot([0 15],[11 11], 'k-');




