lambda=load('Eigenvector_400_1.000000.txt');
rho=linspace(0,1,400);
lowestlambda=lambda(1:400).';
lam1=lowestlambda.^2;
middlelambda=lambda(401:800).';
lam2=middlelambda.^2;
highestlambda=lambda(801:1200).';
lam3=highestlambda.^2;

figure(1)
hold on
plot(rho, lam1)
plot(rho, lam2)
plot(rho, lam3)
title( 'Probability distribution plotted against \rho for n=400 and \rho max =1')
xlabel ('\rho')
ylabel ( '\psi^2');
legend('\lambda_1','\lambda_2','\lambda_3')

lambda=load('Eigenvector_40_1.000000.txt');
rho=linspace(0,1,40);
lowestlambda=lambda(1:40).';
lam1=lowestlambda.^2;
middlelambda=lambda(41:80).';
lam2=middlelambda.^2;
highestlambda=lambda(81:120).';
lam3=highestlambda.^2;

figure(2)
hold on
plot(rho, lam1)
plot(rho, lam2)
plot(rho, lam3)
title( 'Probability distribution plotted against \rho for n=40 and \rho max=1')
xlabel ('\rho')
ylabel ( '\psi^2');
legend('\lambda_1','\lambda_2','\lambda_3')