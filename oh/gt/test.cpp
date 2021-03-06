#include "pch.h"
#include "../project1/integerNumbers.h"
#include "../Project1/olympic.h"
#include "../Project1/olympicHelp.h"
#include "../Project1/plane.h"

#pragma region intNumGCD

TEST(intNumGCD, GCD)
{
	EXPECT_EQ(intNum::gcd::gcd(10, 5), 5);
	EXPECT_EQ(intNum::gcd::gcd(15, 15), 15);
}

TEST(intNumGCD, euclidRec)
{
	EXPECT_EQ(intNum::gcd::euclidRec(10, 5), 5);
	EXPECT_EQ(intNum::gcd::euclidRec(15, 15), 15);
}

TEST(intNumGCD, euclidNotRec)
{
	EXPECT_EQ(intNum::gcd::euclidNotRec(10, 5), 5);
	EXPECT_EQ(intNum::gcd::euclidNotRec(15, 15), 15);
}

#pragma endregion

#pragma region intNum

TEST(intNum, sumOfDigit)
{
	EXPECT_EQ(intNum::sumOfDigit(105), 6);
	EXPECT_EQ(intNum::sumOfDigit(1001), 2);
}

TEST(intNum, lenNumber)
{
	EXPECT_EQ(intNum::lenNumber(105), 3);
	EXPECT_EQ(intNum::lenNumber(1001), 4);
}

#pragma region gcd
TEST(intNum, gcd)
{
	EXPECT_EQ(intNum::gcd::gcd(10, 15), 5);
	EXPECT_EQ(intNum::gcd::gcd(10, 20), 10);
}

TEST(intNum, euclidNotRec)
{
	EXPECT_EQ(intNum::gcd::euclidNotRec(10, 15), 5);
	EXPECT_EQ(intNum::gcd::euclidNotRec(10, 20), 10);
}

TEST(intNum, euclidRec)
{
	EXPECT_EQ(intNum::gcd::euclidRec(10, 15), 5);
	EXPECT_EQ(intNum::gcd::euclidRec(10, 20), 10);
}

#pragma region primaryNumbers

TEST(intnum, isPrime)
{
	EXPECT_EQ(intNum::primaryNumbers::isPrime(87), false);
	EXPECT_EQ(intNum::primaryNumbers::isPrime(2), true);
}
#pragma endregion

#pragma endregion

#pragma region plane
TEST(plane, shift)
{
	plane::point::Point O(2, 3);
	plane::point::Point p1(4, 5);
	plane::point::Point p2(2, 2);
	plane::point::Point p = plane::point::shift(O, p1);
	EXPECT_EQ(p, p2);
}
#pragma endregion


#pragma region olympic

TEST(olympic, beauty)
{
	EXPECT_EQ(olympic::year2018::class9::beauty("anabella"), "ana");
	EXPECT_EQ(olympic::year2018::class9::beauty("adelaida"), "none");
	EXPECT_EQ(olympic::year2018::class9::beauty("aaaa"), "none");
	EXPECT_EQ(olympic::year2018::class9::beauty("ab"), "none");
}

TEST(olympic, amountOfPrime)
{
	EXPECT_EQ(olympic::year2019::class9::amountPrime(10), 4);
	EXPECT_EQ(olympic::year2019::class9::amountPrime(11), 5);
	EXPECT_EQ(olympic::year2019::class9::amountPrime(1), 0);
}

TEST(olympic, arrayOfPrime)
{
	int t1[4] = { 2, 3, 5, 7 };
	int* t1Test = new int[4];
	olympic::year2019::class9::arrayOfPrime(10, 4, t1Test);
	for (int i = 0; i < 4; i++)
	{
		EXPECT_EQ(t1[i], t1Test[i]);
	}
	delete[] t1Test;

	int t2[5] = { 2, 3, 5, 7, 11 };
	int* t2Test = new int[5];
	olympic::year2019::class9::arrayOfPrime(12, 5, t2Test);
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(t2[i], t2Test[i]);
	}
	delete[] t2Test;
}

TEST(olympic, primeSum)
{
	EXPECT_EQ("661 + 673 + 677 = 2011", olympic::year2019::class9::primeSum(2011));
}

#pragma region freken
TEST(olympic, freken1)
{
	plane::point::Point f(1, 2);
	plane::point::Point m(3, 6);
	plane::point::Point k(2, 4);
	string expectedValue = "Both";
	string realValue = olympic::year2019::class9::frekenBok(f, m, k);
	EXPECT_EQ(expectedValue, realValue);
}

TEST(olympic, freken2)
{
	plane::point::Point f(1, 2);
	plane::point::Point m(3, 6);
	plane::point::Point k(2, 5);
	string expectedValue = "Left";
	string realValue = olympic::year2019::class9::frekenBok(f, m, k);
	EXPECT_EQ(expectedValue, realValue);
}

TEST(olympic, freken3)
{
	plane::point::Point f(1, 2);
	plane::point::Point m(3, 6);
	plane::point::Point k(2, 3);
	string expectedValue = "Right";
	string realValue = olympic::year2019::class9::frekenBok(f, m, k);
	EXPECT_EQ(expectedValue, realValue);
}

TEST(olympic, freken4)
{
	plane::point::Point f(1, 2);
	plane::point::Point m(3, 6);
	plane::point::Point k(1, 4);
	string expectedValue = "Left";
	string realValue = olympic::year2019::class9::frekenBok(f, m, k);
	EXPECT_EQ(expectedValue, realValue);
}


#pragma endregion


#pragma endregion
