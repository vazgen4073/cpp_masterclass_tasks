#include "subarr_det.h"
#include "gtest/gtest.h"
#include <cmath>
#include <vector>

bool is_sub_array(int array[], int size1, int sub_array[], int size2)
{

    if (array == NULL || sub_array == NULL) {
        return 0;
    }

    int subarr_elem_ctr = 0;

    for (int outer_loop = 0; outer_loop < size1; ++outer_loop) {
        for (int i = 0; i < size2; ++i) {
            if (array[outer_loop] == sub_array[i]) {
                ++subarr_elem_ctr;
            }   
        }
    }

    if (subarr_elem_ctr == size2) {
        return 1;
    }

    return 0;
}