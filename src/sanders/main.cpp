#include <iostream>
#include <armadillo>
#include "time.h"
#include "jaco.h"

using namespace std;
using namespace arma;

int main()
{
    int n = 5;
    mat A;
    mat R;
    int k, l;
    rotate( A,  R,  k, l, n);
    jac( A,  R,  n, k, l);
    maxoffdiag( A,  k,  l,  n);
    //hei
    return 0;
}
