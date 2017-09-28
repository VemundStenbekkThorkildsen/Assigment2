#include <iostream>
#include "time.h"
#include <cmath>
#include "jacobi.h"
#include "catch.hpp"
using namespace std;
using namespace arma;


double maxoffdiag ( mat& A, int& k, int& l, int n )
{
    mat U = abs(trimatu(A,1));
    double index = U.index_max();
    k = index/n;
    l = index-n*k;
    double max = (U.max());
return max;
}
