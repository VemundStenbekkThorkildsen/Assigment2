#include <iostream>
#include "time.h"
#include "jacobi.h"

using namespace std;
using namespace arma;

int main()
{
    int n=360;
    mat A = zeros(n,n);
    mat R = zeros(n,n);
    double ro0 = 0;
    int romax = 10;
    double h = (romax-ro0)/(n);
    int k,l;
    vec V(n);
    for (int i = 0; i < n; i++){
        V(i) = ro0 + i*h*i*h;
        A(i,i) = (2./(h*h)) + V(i);
        for (int j = i+1; j < n; j++){
            if (i+1 == j){
                A(i,j) = -(1./(h*h));
            }
        }
        for (int f = 0; f < n-1; f++){
            if (i == f+1){
                A(i,f) = -(1./(h*h));
            }
        }
    }
    maxoffdiag( A,  k,  l,  n);
    rotate( A,  R,  k, l, n);
    jac( A,  R,  n, k, l);
   // lowesteigen(A, R, n, romax);
    return 0;
}

