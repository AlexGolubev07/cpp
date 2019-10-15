#include "gtest/gtest.h"
#include "myMath.h"
TEST(TestCaseName, TestName)
{
  EXPECT_EQ(myMath::extremum::max(1, 2), 2);
  EXPECT_TRUE(true);
  EXPECT_EQ(myMath::extremum::min(1, 2), 1);
  EXPECP_TRUE(true);
  EXPECT_EQ(myMath::extremum::maxFrom3Alt(1, 2, 3), 3);
  EXPECT_TRUE(true);
  EXPECT_EQ(myMath::extremum::max3(1, 2, 3), 3);
  EXPECT_TRUE(true)
  EXPECT_EQ(myMath::tWF::factorial(4), 24)  
  EXPECT_EQ(myMath::tWF::facRec(4), 24)
  EXPECT_EQ(myMath::tWF::factorialSum(4), 33)
  EXPECT_EQ(myMath::tWF::factorialSumAlt(4), 33)
	  EXPECT_EQ(myMath::tWF::)
}