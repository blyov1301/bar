#include <gtest/gtest.h>
#include <bar.h>

TEST(Bar, Mul) {
    EXPECT_EQ(bar(2, 3), 6);
    EXPECT_EQ(bar(-2, 3), -6);
    EXPECT_EQ(bar(0, 5), 0);
}
