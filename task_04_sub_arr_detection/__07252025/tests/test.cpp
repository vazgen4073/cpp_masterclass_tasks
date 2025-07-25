#include "subarr_det.h"
#include <gtest/gtest.h>
#include <stdio.h>
#include <vector>

TEST(SubArrDet, EMTY_TEST)
{
    EXPECT_EQ(1, 1);
}

TEST(SubArrDet, GivenNull_0)
{
    int* main_arr = NULL;
    int* sub_arr = NULL;
    EXPECT_EQ(is_sub_array(main_arr, sizeof(main_arr) / sizeof(int), sub_arr, sizeof(sub_arr) / sizeof(int)), false);
}

TEST(SubArrDet, Given0n0_0)
{
    int main_arr[] = {0};
    int sub_arr[] = {0};
    EXPECT_EQ(is_sub_array(main_arr, sizeof(main_arr) / sizeof(int), sub_arr, sizeof(sub_arr) / sizeof(int)), true);
}

TEST(SubArrDet, Given1n0_0)
{
    int main_arr[] = {1};
    int sub_arr[] = {0};
    EXPECT_EQ(is_sub_array(main_arr, sizeof(main_arr) / sizeof(int), sub_arr, sizeof(sub_arr) / sizeof(int)), false);
}

TEST(SubArrDet, Given10n0_0)
{
    int main_arr[] = {1, 0};
    int sub_arr[] = {0};
    EXPECT_EQ(is_sub_array(main_arr, sizeof(main_arr) / sizeof(int), sub_arr, sizeof(sub_arr) / sizeof(int)), true);
} 


TEST(SubArrDet, Given1234n23_0)
{
    int main_arr[] = {1,2,3,4};
    int sub_arr[] = {2, 3};
    EXPECT_EQ(is_sub_array(main_arr, sizeof(main_arr) / sizeof(int), sub_arr, sizeof(sub_arr) / sizeof(int)), true);
} 

 

TEST(SubArrDet, Given1234n56_0)
{
    int main_arr[] = {1,2,3,4};
    int sub_arr[] = {5, 6};
    EXPECT_EQ(is_sub_array(main_arr, sizeof(main_arr) / sizeof(int), sub_arr, sizeof(sub_arr) / sizeof(int)), false);
} 

TEST(SubArrDet, Given1234n46_0)
{
    int main_arr[] = {1,2,3,4};
    int sub_arr[] = {4, 6};
    EXPECT_EQ(is_sub_array(main_arr, sizeof(main_arr) / sizeof(int), sub_arr, sizeof(sub_arr) / sizeof(int)), false);
} 