

lambda=load('eigenvector_360_10.000000.txt');
rho=linspace(0,10,360);
lowestlambda=lambda(1:360).';
lam1=lowestlambda.^2;
middlelambda=lambda(361:720).';
lam2=middlelambda.^2;
highestlambda=lambda(721:1080).';
lam3=highestlambda.^2;

hold on
plot(rho, lam1)
plot(rho, lam2)
plot(rho, lam3)

