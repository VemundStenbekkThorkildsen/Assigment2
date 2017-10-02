#include <iostream>
#include <armadillo>
#include "time.h"
#include "jaco.h"
#include <sstream>
#include <string>

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

using namespace std;
using namespace arma;

int main()
{
    cout << "Write 'test' (no capital letters) to test the algorithm, 'interactive' to run the case for two interacting "
            "electrons and anything else to test the case for only one electron" << endl;
    string answer = ""; //Converting user input into string
    getline(cin, answer);


 //   for (int o=40;o<=400;o+=40){ //Making a loop so n (the matrix size) will vary

    int n = 400;
    mat A = zeros(n,n);
    mat R = zeros(n,n);
    mat S = {{4,-30,60,-35},{-30,300,-675,420},{60,-675,1620,-1050},{-35,420,-1050,700}}; // Test matrix
    double ro0 = 0;
    double omega = 5;
    double romax = 5; //We use varying romax (you can just change the value)
    double h = (romax-ro0)/(n); //Step length given in exercise

    int k,l;
    vec V(n);
    for (int i = 0; i < n; i++){ //Creating matrix A as specified in the exercise
        V(i) = ro0 + i*h*i*h; //
        if (answer == "interactive"){ //Defining step length for an interactive case
            V(i) = (omega*romax*omega*romax) + 1/romax;
        }
        A(i,i) = (2./(h*h)) + V(i); //The diagonal
        for (int j = i+1; j < n; j++){
            if (i+1 == j){
                A(i,j) = -(1./(h*h)); //Upper diagonal
            }
        }
        for (int f = 0; f < n-1; f++){
            if (i == f+1){
                A(i,f) = -(1./(h*h)); //Lower diagonal
            }
        }
    }
    if (answer == "test"){ //This is a test to check the mathematical algorithm since we know the eigenvalues/vectors of S
        A = S;
        n = 4;
    }
    maxoffdiag( A, k,  l,  n); //This function finds the highest value on the diagonal of A
    rotate( A,  R, k, l, n); //This
    jac( A,  R, n, k, l);
    lowesteigen( A, R, n, romax, answer);
   // }
    return 0;
}
