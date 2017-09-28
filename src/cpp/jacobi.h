#pragma once
#include "armadillo"

int jac(arma::mat &A, arma::mat &R, int n , int &k, int &l);
double maxoffdiag(arma::mat &A,int& k,int& l,int n);
void rotate(arma::mat &A, arma::mat &R, int k, int l, int n);
void lowesteigen(arma::mat A, int n, double romax);
