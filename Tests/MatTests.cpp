// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "gtest\gtest.h"
#include "..\BusinessLogic\Mat.h"


TEST(MathTests, Sum)
{
	Mat m = Mat();
	int actual = m.Add(2, 3);
	const int expected = 5;
	EXPECT_EQ(expected, actual);
}

TEST(MathTests, GenerateNumber)
{
	Mat m = Mat();
	int actual = m.ReturnNumber();
	const int expected = 123;
	EXPECT_EQ(expected, actual);
}
TEST(MathTests, Square)
{
	Mat m = Mat();
	int actual = m.Square(5);
	const int expected = 25;
	EXPECT_EQ(expected, actual);
}
TEST(MathTests, Test4)
{
	ASSERT_TRUE(true);
}
TEST(MathTests, Test5)
{
	ASSERT_TRUE(true);
}

int _tmain(int argc, _TCHAR* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

