//
// Created by Martin Oywa on 30/06/2025.
//

#include <gtest/gtest.h>
#include <vector>
#include "fibonacci/fibonacci.h"


using namespace std;

TEST(FibonacciTests, FibonacciFunction) {
    ASSERT_EQ(fibonacci(0), vector<int>({}));
    ASSERT_EQ(fibonacci(1), vector<int>({0}));
    ASSERT_EQ(fibonacci(2), vector<int>({0, 1}));
    ASSERT_EQ(fibonacci(10), vector<int>({0, 1, 1, 2, 3, 5, 8, 13, 21, 34}));
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}