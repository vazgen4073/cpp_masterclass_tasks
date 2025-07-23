#include "arr_manip.h"
#include <gtest/gtest.h>
#include <stdio.h>
#include <vector>

TEST(MaxofArr, EMTY_TEST)
{
    EXPECT_EQ(1, 1);
}
 
TEST(MaxofArr, Given0_0)
{
    int arr[1];
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), 0);
}

TEST(MaxofArr, Given1_1)
{
    int arr[1] = {1};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), 1);
}
 

TEST(MaxofArr, Given2_2)
{
    int arr[1] = {2};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), 2);
}

TEST(MaxofArr, Given12_2)
{
    int arr[] = {1, 2};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), 2);
}


TEST(MaxofArr, Given21_2)
{
    int arr[] = {2, 1};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), 2);
}

TEST(MaxofArr, Given5N13_13)
{
    int arr[] = {13, 5};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), 13);
}

TEST(MaxofArr, Given1N2N3_3)
{
    int arr[] = {1, 2, 3};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), 3);
}
 
TEST(MaxofArr, Given_neg10N29N92N802_802)
{
    int arr[] = {-10, 29, 92, 802};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), 802);
}

TEST(MaxofArr, Given_neg10Nneg5_neg5)
{
    int arr[] = {-10, -5};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), -5);
}

TEST(MaxofArr, Given_neg10Nneg5neg29_neg5)
{
    int arr[] = {-10, -5, -29};
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), -5);
}
 
 TEST(MaxofArr, Given_null_intmin)
{
    int *arr = NULL;
    EXPECT_EQ(max(arr, sizeof(arr)/sizeof(int)), INT32_MIN);
}
 