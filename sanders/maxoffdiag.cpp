#include <iostream>
#include <armadillo>
#include "time.h"
#include <cmath>
#include "jaco.h"
using namespace std;
using namespace arma;

// Function to find the maximum matrix element. Can you figure out a more
// elegant algorithm?
double maxoffdiag ( mat& A, int& k, int& l, int n )
{
    double max = 0.0;
    A = ones(n,n);
    A.print();
/*
    for ( int i = 0; i < n; i++ ) {
        for ( int j = i + 1; j < n; j++ ) {
            if ( fabs(A[i][j] > max ) {
                max = fabs(A[i][j]);
                l = i;
                k = j;
            }
        }
    }
return max;
*/
}
