//
// Created by Martin Oywa on 07/07/2025.
//

#include <gtest/gtest.h>
#include "a_simple_function/a_simple_function.h"
#include "sums/sums.h"


int a {123};
TEST(ASimpleFunctionTests, ASimpleFunction) {
    int b {3};
    ASSERT_EQ(func(1), 2);
    ASSERT_EQ(func(a), 246);
    ASSERT_EQ(func(b), 6);
    int a {4};
    ASSERT_EQ(func(a), 8);
    ASSERT_EQ(func(), 10);
}

TEST(SumsTest, SumFunctions) {
    ASSERT_EQ(sum(1, 2), 3);
    ASSERT_EQ(sum(1, 2, 3), 6);
    ASSERT_EQ(sum(1, 2, 3, 4), 10);
    ASSERT_EQ(sum(2.0, 4.0), 6.0);
    // ASSERT_ANY_THROW(sum(1, 10.0));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
