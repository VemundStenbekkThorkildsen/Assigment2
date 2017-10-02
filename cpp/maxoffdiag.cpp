#include <iostream>
#include <armadillo>
#include "time.h"
#include "jaco.h"
using namespace std;
using namespace arma;

// Function to find the maximum matrix element. Can you figure out a more
// elegant algorithm?
double maxoffdiag ( mat& A, int& k, int& l, int n )
{
    mat U = abs(trimatu(A,1));
    double index = U.index_max();
    k = index/n;
    l = index-n*k;

    double max = (U.max());
    //cout << max << endl;
    return max;
}
