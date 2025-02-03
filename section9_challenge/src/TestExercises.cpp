//
// Created by Martin Oywa on 02/02/2025.
//

#include <gtest/gtest.h>
#include "exercise_12/exercise_12.h"
#include "exercise_13/exercise_13.h"
#include "exercise_14/exercise_14.h"

TEST(CanDriveTests, HandlePositiveOutcomes) {
    ASSERT_EQ(can_drive(16, true), "Yes - you can drive!");
    ASSERT_EQ(can_drive(25, true), "Yes - you can drive!");
}

TEST(CanDriveTests, HandleNegativeOutcomes) {
    ASSERT_EQ(can_drive(15, false), "Sorry, come back in 1 years and be sure you own a car when you come back.");
    ASSERT_EQ(can_drive(25, false), "Sorry, you need to buy a car before you can drive!");
    ASSERT_EQ(can_drive(15, true), "Sorry, come back in 1 years and be sure you own a car when you come back.");
}

TEST(DayOfTheWeek, HandleAllOutcomes) {
    ASSERT_EQ(day_of_the_week(0), "Sunday");
    ASSERT_EQ(day_of_the_week(1), "Monday");
    ASSERT_EQ(day_of_the_week(2), "Tuesday");
    ASSERT_EQ(day_of_the_week(3), "Wednesday");
    ASSERT_EQ(day_of_the_week(4), "Thursday");
    ASSERT_EQ(day_of_the_week(5), "Friday");
    ASSERT_EQ(day_of_the_week(6), "Saturday");
    ASSERT_EQ(day_of_the_week(7), "Error - illegal day code");
}

TEST(CalculateOddSumBetween, HandleExpectee) {
    ASSERT_EQ(calculate_odd_sum_between(1, 15), 64);
    ASSERT_EQ(calculate_odd_sum_between(0, 5), 9);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

