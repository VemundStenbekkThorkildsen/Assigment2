a=load('eigenvalue_40_omega(0.01).txt');
b=load('eigenvalue_80_omega(0.01).txt');
c=load('eigenvalue_120_omega(0.01).txt');
d=load('eigenvalue_160_omega(0.01).txt');
e=load('eigenvalue_200_omega(0.01).txt');
f=load('eigenvalue_240_omega(0.01).txt');
g=load('eigenvalue_280_omega(0.01).txt');
h=load('eigenvalue_320_omega(0.01).txt');
i=load('eigenvalue_360_omega(0.01).txt');
j=load('eigenvalue_400_omega(0.01).txt');
a2=load('eigenvalue_40_omega(0.5).txt');
b2=load('eigenvalue_80_omega(0.5).txt');
c2=load('eigenvalue_120_omega(0.5).txt');
d2=load('eigenvalue_160_omega(0.5).txt');
e2=load('eigenvalue_200_omega(0.5).txt');
f2=load('eigenvalue_240_omega(0.5).txt');
g2=load('eigenvalue_280_omega(0.5).txt');
h2=load('eigenvalue_320_omega(0.5).txt');
i2=load('eigenvalue_360_omega(0.5).txt');
j2=load('eigenvalue_400_omega(0.5).txt');
a3=load('eigenvalue_40_omega(1).txt');
b3=load('eigenvalue_80_omega(1).txt');
c3=load('eigenvalue_120_omega(1).txt');
d3=load('eigenvalue_160_omega(1).txt');
e3=load('eigenvalue_200_omega(1).txt');
f3=load('eigenvalue_240_omega(1).txt');
g3=load('eigenvalue_280_omega(1).txt');
h3=load('eigenvalue_320_omega(1).txt');
i3=load('eigenvalue_360_omega(1).txt');
j3=load('eigenvalue_400_omega(1).txt');
a4=load('eigenvalue_40_omega(5).txt');
b4=load('eigenvalue_80_omega(5).txt');
c4=load('eigenvalue_120_omega(5).txt');
d4=load('eigenvalue_160_omega(5).txt');
e4=load('eigenvalue_200_omega(5).txt');
f4=load('eigenvalue_240_omega(5).txt');
g4=load('eigenvalue_280_omega(5).txt');
h4=load('eigenvalue_320_omega(5).txt');
i4=load('eigenvalue_360_omega(5).txt');
j4=load('eigenvalue_400_omega(5).txt');

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
title('Eigenvalues for different values of n while \omega_r = 0.01 and \rho max=5');
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
title('Eigenvalues for different values of n while \omega_r = 0.5 and \rho max=5');
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
title('Eigenvalues for different values of n while \omega_r = 1 and \rho max=5');
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
title('Eigenvalues for different values of n while \omega_r = 5 and \rho max=5');
hold on;
plot([0 15],[3 3], 'k-');
plot([0 15],[7 7], 'k-');
plot([0 15],[11 11], 'k-');




