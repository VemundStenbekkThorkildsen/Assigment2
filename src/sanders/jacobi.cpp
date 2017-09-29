#include <iostream>
#include <armadillo>
#include "time.h"
#include <cmath>
#include "jaco.h"
using namespace std;
using namespace arma;


int jac( mat& A, mat& R, int n, int& k, int& l )
{
// Setting up the eigenvector matrix
    R = zeros(n,n);
    for (int i = 0; i < n; i++ ) {
        R[i,i] = 1;
    }

vec offdiag;
double epsilon = 1.0e-8;
double max_number_iterations = (double) n * (double) n * (double) n;
int iterations = 0;
double max_offdiag = maxoffdiag ( A, k, l, n );
    while ( fabs(max_offdiag) > epsilon && (double) iterations < max_number_iterations ) {
        max:offdiag = maxoffdiag ( A, k, l, n );
        rotate ( A, R, k, l, n );
        iterations++;
    }
cout << "Number of iterations: " << iterations << "\n";
return max_offdiag;
}
