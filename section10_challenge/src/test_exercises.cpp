//
// Created by Martin Oywa on 17/02/2025.
//

#include <gtest/gtest.h>
#include <string>
#include <vector>

#include "exercise_19/exercise_19.h"
#include "exercise_20/exercise_20.h"
#include "exercise_21/exercise_21.h"

using namespace std;


TEST(exercise_19, CStyleFunctions) {
    char first_name[10] {"Bjarne"};
    char last_name[20] {"Stroustrup"};
    vector<size_t> expected {6, 10, 16};
    ASSERT_EQ(c_strings_and_functions(first_name, last_name), expected);
}

TEST (exercise_20, FindNamesIndices) {
    ASSERT_EQ(findNamesIndices("MartinOywa"), vector<size_t>({0, 6}));
    ASSERT_EQ(findNamesIndices("StephenHawking"), vector<size_t>({0, 7}));
}

TEST (exercise_20, FormattedFullNames) {
    ASSERT_EQ(get_formatted_full_name("MartinOywa"), "Martin Oywa");
    ASSERT_EQ(get_formatted_full_name("StephenHawking"), "Stephen Hawking");
}

TEST(exercise_21, DigitalLibrary) {
    ASSERT_EQ(generate_digital_library(vector<string> ({"Isaac Newton", "Leibniz"})), vector<string> ({"Leibniz", "Newton"}));
    ASSERT_EQ(generate_digital_library(vector<string> ({"Isaac Bolton", "Leibniz", "Martin Oywa"})), vector<string> ({"Bolton", "Leibniz", "Oywa"}));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
