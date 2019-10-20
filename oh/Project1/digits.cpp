#include "myMath.h"

namespace intNum
{
	namespace primaryNumbers
	{
		bool IsPrime(int number)
		{
			for (int i = 2; i < number; i++)
			{
				if (number % i == 0)
				{
					return false;
				}
			}
			return true;
		}
	}

	namespace gcd
	{
		int gcd(int number1, int number2)
		{
			int r = 0;
			for (int i = 1; i <= number1; i++)
			{
				if (number1 % i == 0 && number2 % i == 0)
				{
					r = i;
				}
			}
			return r;
		}

		int euclidRec(int number1, int number2)
		{
			int min = myMath::extremum::min(number1, number2);
			int max = myMath::extremum::max(number1, number2);
			if (min == 0)
			{
				return max;
			}
			else
			{
				return euclidRec(min, max % min);
			}
		}

		int euclidNotRec(int number1, int number2)
		{
			int min = myMath::extremum::min(number1, number2);
			int max = myMath::extremum::max(number1, number2);
			while (min != 0)
			{
				int temp = min;
				min = max % min;
				max = temp;
			}
			return max;
		}
	}

	int sumOfDigit(int number)
	{
		int sumOfDigit = 0;
		while (number != 0)
		{
			sumOfDigit += number % 10;
			number /= 10;
		}
		return sumOfDigit;
	}

	int power(int x, int y)
	{
		int result = 1;
		for (int i = 1; i <= y; i++)
		{
			result *= x;
		}
		return result;
	}

	int lenNumber(int number)
	{
		int len = 0;
		while (number != 0)
		{
			++len;
			number /= 10;
		}
		return len;
	}

	int invertedNumber(int number)
	{
		int invertedNumber = 0;
		int len = lenNumber(number);

		int tenPower = 1;
		while (len != 0)
		{
			int digit = 0;
			digit = number % 10;
			invertedNumber += power(10, len) * digit;
			number /= 10;
			--len;
		}

		invertedNumber /= 10;
		return invertedNumber;
	}

	
	int smartInvertNumber(int number)
	{
		int result = 0;
		while(int(number / 10) != 0)
		{
			result = result * 10 + number % 10;
			number = int(number / 10);
		}
		return result * 10 + number;
	}
}