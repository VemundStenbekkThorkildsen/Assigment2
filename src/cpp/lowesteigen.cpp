#include <iostream>
#include "armadillo"
#include "jacobi.h"
using namespace std;
using namespace arma;

void lowesteigen(mat A, int n, double romax){

    double lowest;
    double secondlowest;
    double thirdlowest;
    vec diagonal(n);
    for (int i = 0; i<n; i++){
        diagonal(i) = A(i,i);
    }
    int minindex;
    int sminindex;
    lowest = diagonal.min();
    minindex = diagonal.index_min();
    diagonal(minindex) = diagonal.max();
    secondlowest = diagonal.min();
    sminindex = diagonal.index_min();
    diagonal(sminindex) = diagonal.max();
    thirdlowest = diagonal.min();

    if (romax == 100){
        string outFileName = "diagonal_A_" + to_string(n) + ".txt";
        ofstream outFile(outFileName);
        outFile << lowest << ", " << secondlowest << ", "<< thirdlowest << ", ";
        outFile.close();
    }
    if (romax == 10){
        string outFileName2 = "diagonal_A_romax10_" + to_string(n) + ".txt";
        ofstream outFile2(outFileName2);
        outFile2 << lowest << ", " << secondlowest << ", "<< thirdlowest << ", ";
        outFile2.close();
    }
    if (romax == 50){
        string outFileName3 = "diagonal_A_romax50_" + to_string(n) + ".txt";
        ofstream outFile3(outFileName3);
        outFile3 << lowest << ", " << secondlowest << ", "<< thirdlowest << ", ";
        outFile3.close();
    }
}


