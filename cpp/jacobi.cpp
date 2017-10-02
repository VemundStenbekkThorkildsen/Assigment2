#include <iostream>
#include <armadillo>
#include "time.h"
#include "jaco.h"
using namespace std;
using namespace arma;


int jac( mat& A, mat& R, int n, int k, int l )
{
// Setting up the eigenvector matrix
    for (int i = 0; i < n; i++ ) {
        R(i,i) = 1;
    }
vec offdiag;
double epsilon = 1.0e-8;
double max_number_iterations = n*n*n;
int iterations = 0;
double max_offdiag = maxoffdiag ( A, k, l, n );
    while ( fabs(max_offdiag) > epsilon && (double) iterations < max_number_iterations ) {
        max_offdiag = maxoffdiag ( A, k, l, n );
        rotate ( A, R, k, l, n );
        iterations++;
    }
cout << "Number of iterations: " << iterations << "\n";
/*
string outFileName = "iterations_" + to_string(iterations) + "_" + to_string(n) + ".txt";
ofstream outFile(outFileName);
outFile << iterations << ", " << n << ", ";
outFile.close();
*/
return max_offdiag;

}
