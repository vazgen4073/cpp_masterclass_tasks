#include "arr_manip.h"
#include "gtest/gtest.h"
#include <cmath>
#include <vector>

int max(int array[], int size)
{
    int res = 0;
    if (size < 2) {
        res = array[0];
        return res;
    } 

    int stat1_res = 0;
    if (array[0] > array[1]) {
        stat1_res = array[0];
    } else {
        stat1_res = array[1];
    }

    int stat2_res = 0;

    if (array[1] > array[2]) {
        stat2_res = array[1];
    } else {
        stat2_res = array[2];
    }

    if (stat1_res > stat2_res) {
        res = stat1_res;
    } else {
        res = stat2_res;
    }

    return res;
}