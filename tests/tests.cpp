#include "gtest/gtest.h"
#include "calculator.cpp"

TEST (AdditionTest, NormalResult) { 
	EXPECT_EQ (9.0, calculate("5+4"));
	EXPECT_EQ (20.0, calculate("5*4"));
	EXPECT_EQ (1.0, calculate("5-4"));
	EXPECT_NEAR (1.25, calculate("5/4"), 0.0001);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
