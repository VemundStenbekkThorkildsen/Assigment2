#pragma once
#include <string>

void rotate(arma::mat &A, arma::mat &R, int k, int l, int n);
int jac(arma::mat &A, arma::mat &R, int n , int k, int l, std::string answer);
double maxoffdiag(arma::mat &A, int &k,int &l,int n);
void lowesteigen(arma::mat A,arma::mat R, int n, double romax, std::string answer, double omega);
