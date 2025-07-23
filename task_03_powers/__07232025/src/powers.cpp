#include "powers.h"
#include "gtest/gtest.h"
#include <cmath>
#include <vector>

double power(int x, int n)
{
    if (n == 0)
        return 1;
 
    double res = 1;
    while(n) {
        --n;
        res *= x;
    }
    return res;
}