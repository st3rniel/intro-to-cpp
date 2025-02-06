//
// Created by Martin Oywa on 02/02/2025.
//

#include <vector>
#include <gtest/gtest.h>
#include "exercise_12/exercise_12.h"
#include "exercise_13/exercise_13.h"
#include "exercise_14/exercise_14.h"
#include "exercise_15/exercise_15.h"
#include "exercise_16/exercise_16.h"
#include "exercise_17/exercise_17.h"

using namespace std;

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

TEST(CalculateOddSumBetween, HandleExpected) {
    ASSERT_EQ(calculate_odd_sum_between(1, 15), 64);
    ASSERT_EQ(calculate_odd_sum_between(0, 5), 9);
}

TEST(CalculateDivisibityBy3and5, HandleExpected) {
    ASSERT_EQ(count_divisible_by_3_and_5(std::vector<int>{1, 2, 3, 4, 5}), 2);
    ASSERT_EQ(count_divisible_by_3_and_5(std::vector<int> {2, 4, 7, 8, 13}), 0);
    ASSERT_EQ(count_divisible_by_3_and_5(std::vector<int> {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700}), 18);
}

TEST(CountBeforeNeg99, HandleExepected) {
    ASSERT_EQ(count_numbers_before_neg_99(vector<int> {1, 2, 3, 4, 5, -99}), 5);
    ASSERT_EQ(count_numbers_before_neg_99(vector<int> {0, 4, 6, 7, 10}), 5);
}

TEST(FindFirstVowel, HandlePositiveOutcomes) {
    ASSERT_EQ(find_first_vowel(vector<char> {'f','r','a','n','k'}), "Vowel found: a");
    ASSERT_EQ(find_first_vowel(vector<char> {'h','e','l','l','o'}), "Vowel found: e");
    ASSERT_EQ(find_first_vowel(vector<char> {'x','y','z','o'}), "Vowel found: o");
}

TEST(FindFirstVowel, HandleNegativeOutcomes) {
    ASSERT_EQ(find_first_vowel(vector<char> {'F','R','A','N','K'}), "No vowel was found");
    ASSERT_EQ(find_first_vowel(vector<char> {}), "No vowel was found");
    ASSERT_EQ(find_first_vowel(vector<char> {'h', 'l', 'l'}), "No vowel was found");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

