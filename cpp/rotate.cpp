#include <iostream>
#include <armadillo>
#include "time.h"
#include "jaco.h"
using namespace std;
using namespace arma;

// Finding the cosine/sine values and rotates the matrix
void rotate( mat& A, mat& R, int k, int l, int n )
{
    double sind, cosd;
    double tand, tau;
    if ( A(k,l) != 0.0 ) {
        tau = (A(l,l) - A(k,k))/(2*A(k,l)); //
        if ( tau > 0 ) {
            tand = 1.0/(tau + sqrt(1.0 + tau*tau));
        }
        else {
            tand = -1.0/( -tau + sqrt(1.0 + tau*tau));
        }
        cosd = 1/sqrt(1+tand*tand);
        sind = cosd*tand;
    }
    else {
    cosd = 1.0;
    sind = 0.0;
    }

double a_kk, a_ll, a_ik, a_il, r_ik, r_il;
a_kk = A(k,k);
a_ll = A(l,l);
// changing the matrix elements with indices k and l
A(k,k) = cosd*cosd*a_kk - 2.0*cosd*sind*A(k,l) + sind*sind*a_ll;
A(l,l) = sind*sind*a_kk + 2.0*cosd*sind*A(k,l) + cosd*cosd*a_ll;
A(k,l) = 0.0; // hard-coding of the zeros
A(l,k) = 0.0;
// and then we change the remaining elements
    for ( int i = 0; i < n; i++ ) {
        if ( i != k && i != l ) {
            a_ik = A(i,k);
            a_il = A(i,l);
            A(i,k) = cosd*a_ik - sind*a_il;
            A(k,i) = A(i,k);
            A(i,l) = cosd*a_il + sind*a_ik;
            A(l,i) = A(i,l);
        }
// Finally, we compute the new eigenvectors
        r_ik = R(i,k);
        r_il = R(i,l);
        R(i,k) = cosd*r_ik - sind*r_il;
        R(i,l) = cosd*r_il + sind*r_ik;
    }

}

