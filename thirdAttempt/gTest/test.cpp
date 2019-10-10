#include "pch.h"
#include "../project/integerNumbers.h"

#pragma region intNumGCD

	TEST(intNumGCD, GCD) {
		EXPECT_EQ(intNum::gcd::gcd(10, 5), 5);
		EXPECT_EQ(intNum::gcd::gcd(15, 15), 15);
	}

	TEST(intNumGCD, euclidRec) {
		EXPECT_EQ(intNum::gcd::euclidRec(10, 5), 5);
		EXPECT_EQ(intNum::gcd::euclidRec(15, 15), 15);
	}

	TEST(intNumGCD, euclidNotRec) {
		EXPECT_EQ(intNum::gcd::euclidNotRec(10, 5), 5);
		EXPECT_EQ(intNum::gcd::euclidNotRec(15, 15), 15);
	}

#pragma endregion

#pragma region intNum

	TEST(intNum, sumOfDigit) {
		EXPECT_EQ(intNum::sumOfDigit(105), 6);
		EXPECT_EQ(intNum::sumOfDigit(1001), 2);
	}

	TEST(intNum, lenNumber) {
		EXPECT_EQ(intNum::lenNumber(105), 3);
		EXPECT_EQ(intNum::lenNumber(1001), 4);
	}

#pragma endregion