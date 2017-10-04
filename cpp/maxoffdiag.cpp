#include <iostream>
#include <armadillo>
#include "time.h"
#include "jaco.h"
using namespace std;
using namespace arma;

//This function returns the maximum value of
double maxoffdiag ( mat& A, int& k, int& l, int n )
{
    mat U = abs(trimatu(A,1)); //Creates U, the upper triangular matrix of A
    double index = U.index_max(); //Finds the position of the highest value of U
    k = index/n; //Defining the k and l elements
    l = index-n*k;

    double max = (U.max());
    return max;
}
