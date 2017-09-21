#ifndef JACOBI_H
#define JACOBI_H

double jacobi_method(double ** A, double ** R, int n);
double maxoffdiag ( double ** A, int * k, int * l, int n );
void rotate ( double ** A, double ** R, int k, int l, int n );

#endif // JACOBI_H
