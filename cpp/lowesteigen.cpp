#include <iostream>
#include <armadillo>
#include "jaco.h"
#include <string>
using namespace std;
using namespace arma;

//A function to find eigenvectors and eigenvalues
void lowesteigen(mat A, mat R, int n, double romax, string answer, double omega){

    double lowest;
    double secondlowest;
    double thirdlowest;
    vec diagonal(n);
    for (int i = 0; i<n; i++){ //Creating a vector consisting of the diagonal elements of A
        diagonal(i) = A(i,i);
    }
    int minindex;
    int sminindex;
    int tminindex;
    lowest = diagonal.min(); //Finding the lowest values on the diagonal of A
    minindex = diagonal.index_min(); //Finding the position of the lowest value
    diagonal(minindex) = diagonal.max();
    secondlowest = diagonal.min();
    sminindex = diagonal.index_min();
    diagonal(sminindex) = diagonal.max();
    thirdlowest = diagonal.min();
    tminindex = diagonal.index_min();

    vec lowestvec(n);
    vec secondlowestvec(n);
    vec thirdlowestvec(n);
    lowestvec = R.col(minindex); //Finding the eigenvectors on the row of the lowest eigenvalues
    secondlowestvec = R.col(sminindex);
    thirdlowestvec = R.col(tminindex);

    /*
    string outFileName2 = "eigenvec_" + to_string(n) + "_" + to_string(omega) + "(0.5)" + ".txt";
    ofstream outFile2(outFileName2);
    outFile2 << lowestvec << ", " << secondlowestvec << ", "<< thirdlowestvec << ", ";
    outFile2.close();
    */
    /*
    string outFileName = "diagonal_A_" + to_string(n) + "_" + to_string(romax) + ".txt";
    ofstream outFile(outFileName);
    outFile << lowest << ", " << secondlowest << ", "<< thirdlowest << ", ";
    outFile.close();
    */
    if (answer == "testeigen"){ //A test to see if the eigenvalues found numerically is correct
        double eps = 1e-5;
        double check = lowest-0.16664; //This value is the known eigenvalue for the matrix S
        if (check <= eps){
            cout << "The lowest eigenvalue is correct!" << endl;
            check = secondlowest-1.47805;
        }
        else{
            cout << "The lowest eigenvalue is wrong!" << endl;
        }
        if (check <= eps){
            cout << "The second lowest eigenvalue is correct!" << endl;
            check = thirdlowest-37.10149;
        }
        else{
            cout << "The second lowest eigenvalue is wrong!" << endl;
        }
        if (check <= eps){
            cout << "The third lowest eigenvalue is correct!" << endl;
            cout << "The eigenvalues are correct" << endl;
        }
        else{
            cout << "The third lowest eigenvalue is wrong!" << endl;
            cout << thirdlowest << endl;
        }

    }
}
