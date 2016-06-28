// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "gtest\gtest.h"
#include "..\BusinessLogic\Mat.h"


TEST(MathTests, Sum)
{
	Mat m = Mat();
	int actual = m.Add(2, 3);
	const int expected = 5 + 0;

	EXPECT_EQ(expected, actual);
}

TEST(MathTests, Test2)
{
	ASSERT_TRUE(true);
}
TEST(MathTests, Test3)
{
	ASSERT_TRUE(true);
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

