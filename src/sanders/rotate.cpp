#include <iostream>
#include <armadillo>
#include "time.h"
#include <cmath>
#include "jaco.h"
using namespace std;
using namespace arma;

// Function to find the values of cos and sin
void rotate ( mat& A, mat& R, int k, int l, int n )
{
    double s, c;
    double t, tau;
    if ( A[k][l] != 0.0 ) {
        tau = (A[l][l] - A[k][k])/(2*A[k][l]);
        if ( tau > 0 ) {
            t = 1.0/(tau + sqrt(1.0 + tau*tau);
        }
        else {
            t = -1.0/( -tau + sqrt(1.0 + tau*tau);
        }
        c = 1/sqrt(1+t*t);
        s = c*t;
    }
    else {
    c = 1.0;
    s = 0.0;
    }
double a_kk, a_ll, a_ik, a_il, r_ik, r_il;
a_kk = A[k][k];
a_ll = A[l][l];
// changing the matrix elements with indices k and l
A[k][k] = c*c*a_kk - 2.0*c*s*A[k][l] + s*s*a_ll;
A[l][l] = s*s*a_kk + 2.0*c*s*A[k][l] + c*c*a_ll;
A[k][l] = 0.0; // hard-coding of the zeros
A[l][k] = 0.0;
// and then we change the remaining elements
    for ( int i = 0; i < n; i++ ) {
        if ( i != k && i != l ) {
            a_ik = A[i][k];
            a_il = A[i][l];
            A[i][k] = c*a_ik - s*a_il;
            A[k][i] = A[i][k];
            A[i][l] = c*a_il + s*a_ik;
            A[l][i] = A[i][l];
        }
// Finally, we compute the new eigenvectors
        r_ik = R[i][k];
        r_il = R[i][l];
        R[i][k] = c*r_ik - s*r_il;
        R[i][l] = c*r_il + s*r_ik;
    }
}

