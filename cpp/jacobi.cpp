#include <iostream>
#include <armadillo>
#include "time.h"
#include "jaco.h"
using namespace std;
using namespace arma;

//The function where the Jacobi rotation happens
int jac( mat& A, mat& R, int n, int k, int l, string answer)
{
// Setting up the eigenvector matrix
    for (int i = 0; i < n; i++ ) {
        R(i,i) = 1;
    }
vec offdiag;
double epsilon = 1.0e-8; //The tolerance
double max_number_iterations = n*n*n; //Limits the number of rotations
int iterations = 0;
double max_offdiag = maxoffdiag ( A, k, l, n );
    while ( fabs(max_offdiag) > epsilon && (double) iterations < max_number_iterations ) {
        max_offdiag = maxoffdiag ( A, k, l, n );
        rotate ( A, R, k, l, n );
        iterations++;
    }
cout << "Number of iterations: " << iterations << endl;

if (answer == "testortho"){ //To check if the rotation matrix R is still orthogonal after the transformations
    mat identity = zeros(n,n);
    mat transpose = trans(R);
    mat orthogonal = transpose*R;
    int final;
    for (int i=0;i<n;i++){
        identity(i,i) = 1; //Identity matrix
        for (int j = 0; j<n;j++){
            if (approx_equal(orthogonal,identity,"absdiff",0.0001)){
                final = 1;
            }
            else{
                final = 0;
            }
        }
    }
    if(final = 1){
        cout << "The rotation matrix is orthogonal!" << endl;
    }
    else if( final = 0){
        cout << "The rotation matrix is not orthogonal!" << endl;
    }

}

/*
string outFileName = "iterations_" + to_string(iterations) + "_" + to_string(n) + ".txt";
ofstream outFile(outFileName);
outFile << iterations << ", " << n << ", ";
outFile.close();
*/
return max_offdiag;

}
