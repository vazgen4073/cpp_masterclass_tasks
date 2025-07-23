#include "arr_manip.h"
#include "gtest/gtest.h"
#include <cmath>
#include <vector>

int max(int array[], int size)
{
    if (array == NULL) {
        return INT32_MIN;
    }
    
    int res = array[0];
    if (size > 2) {

        for (int i = 1; i < size; ++i) {
            if (array[i] > res) {
                res = array[i];
            }
        }

    } else if (size == 2) {
        if (res < array[1]) {
            res = array[1];
        }
    }

    return res;
}