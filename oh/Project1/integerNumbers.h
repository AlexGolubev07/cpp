#pragma once

namespace intNum
{
	namespace primaryNumbers
	{
		bool isPrime(int number);
	}

	// Calculate sum of digits
	int sumOfDigit(int number);

	// Calculate number length
	int lenNumber(int number);

	// invert number
	int invertedNumber(int number);

	//
	int smartInvertNumber(int number);

	// power number
	int power(int x, int y);

	namespace gcd
	{
		//
		int gcd(int number1, int number2);

		//
		int euclidRec(int number1, int number2);

		//NotRecEuclid
		int euclidNotRec(int number1, int number2);
	}

	namespace sequences
	{
		// return fibonacci
		int fibIter(int n);

		// return fibonacci
		int fibRec(int n);
	}
}