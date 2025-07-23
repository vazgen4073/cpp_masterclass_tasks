#include "powers.h"
#include <gtest/gtest.h>
#include <stdio.h>
#include <vector>

TEST(Powers, EMTY_TEST)
{
    EXPECT_EQ(1, 1);
}

TEST(Powers, Given_1pwr0_ret1)
{
    EXPECT_EQ(power(1,0), 1);
}

TEST(Powers, Given_1pwr1_ret1)
{
    EXPECT_EQ(power(1,1), 1);
}


TEST(Powers, Given_2pwr1_ret2)
{
    EXPECT_EQ(power(2,1), 2);
}

TEST(Powers, Given_2pwr2_ret4)
{
    EXPECT_EQ(power(2,2), 4);
}

TEST(Powers, Given_2pwr3_ret8)
{
    EXPECT_EQ(power(2,3), 8);
}


TEST(Powers, Given_5pwr7_ret78125)
{
    EXPECT_EQ(power(5,7), 78125);
}
 


 