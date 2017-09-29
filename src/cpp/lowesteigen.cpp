#include <iostream>
#include "armadillo"
#include "jacobi.h"
using namespace std;
using namespace arma;

void lowesteigen(mat A, mat R, int n, double romax){

    double lowest;
    double secondlowest;
    double thirdlowest;
    vec diagonal(n);
    for (int i = 0; i<n; i++){
        diagonal(i) = A(i,i);
    }
    int minindex;
    int sminindex;
    int tminindex;
    lowest = diagonal.min();
    minindex = diagonal.index_min();
    diagonal(minindex) = diagonal.max();
    secondlowest = diagonal.min();
    sminindex = diagonal.index_min();
    diagonal(sminindex) = diagonal.max();
    thirdlowest = diagonal.min();
    tminindex = diagonal.index_min();

        vec lowestvec(n);
        vec secondlowestvec(n);
        vec thirdlowestvec(n);
        lowestvec = R.col(minindex);
        secondlowestvec = R.col(sminindex);
        thirdlowestvec = R.col(tminindex);

    string outFileName = "diagonal_A_" + to_string(n) + "_" + to_string(romax) + ".txt";
        ofstream outFile(outFileName);
        outFile << lowest << ", " << secondlowest << ", "<< thirdlowest << ", ";
        outFile.close();
}


