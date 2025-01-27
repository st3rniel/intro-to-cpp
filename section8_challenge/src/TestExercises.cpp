// https://google.github.io/googletest/reference/assertions.html
#include <gtest/gtest.h>
#include "exercise_9/exercise_9.h"

TEST(CanYouWorkTests, HandlesPositiveOutcomes) {
    EXPECT_TRUE(can_you_work(18, 1, 1, 0));
    EXPECT_TRUE(can_you_work(18, 0, 1, 0));
    EXPECT_TRUE(can_you_work(16, 1, 1, 0));
    EXPECT_TRUE(can_you_work(25, 0, 1, 0));
}

TEST(CanYouWorkTests, HandlesNegativeOutcomes) {
    EXPECT_FALSE(can_you_work(18, 0, 0, 0));
    EXPECT_FALSE(can_you_work(18, 0, 1, 1));
    EXPECT_FALSE(can_you_work(16, 1, 1, 1));
    EXPECT_FALSE(can_you_work(15, 1, 1, 0));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}