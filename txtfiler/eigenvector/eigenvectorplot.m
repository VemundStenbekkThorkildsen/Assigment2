

lambda=load('eigenvector_360_10.000000.txt');
rho=linspace(0,10,360);
lowestlambda=lambda(1:400).';

plot(rho, lowestlambda)