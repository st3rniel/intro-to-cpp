//
// Created by Martin Oywa on 02/02/2025.
//

#include <gtest/gtest.h>
#include "exercise_12/exercise_12.h"

TEST(CanDriveTests, HandlePositiveOutcomes) {
    ASSERT_EQ(can_drive(16, true), "Yes - you can drive!");
    ASSERT_EQ(can_drive(25, true), "Yes - you can drive!");
}

TEST(CanDriveTests, HandleNegativeOutcomes) {
    ASSERT_EQ(can_drive(15, false), "Sorry, come back in 1 years and be sure you own a car when you come back.");
    ASSERT_EQ(can_drive(25, false), "Sorry, you need to buy a car before you can drive!");
    ASSERT_EQ(can_drive(15, true), "Sorry, come back in 1 years and be sure you own a car when you come back.");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

