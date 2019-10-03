#include <cassert>
#include <iostream> 

namespace myMath
{
	int factorial(int number)
	{
		assert(number >= 0);
		int f = 1;
		for (int i = 2; i <= number; i++)
		{
			f *= i;
		}
		return f;
	}

	/*
	n! = n * (n-1)!  for n >= 2
	1! = 1
	4! = 4 * 3! = 4 * 3 * 2! = 4 * 3 * 2 * 1! = 4 * 3 * 2 * 1! = 4 * 3 * 2 * 1 * 0! = 4 * 3 * 2 * 1 * 1
	*/

	int facRec(int number)
	{
		assert(number >= 0);
		if (number == 0)
		{
			return 1;
		}
		else
		{
			return number * facRec(number - 1);
		}
	}

	int recSum(int number)
	{
		if (number == 0)
		{
			return 0;
		}
		else
		{
			return number + recSum(number - 1);
		}
	}

	int sum(int number)
	{
		int f = 0;

		for (int i = 1; i <= number; i++)
		{
			f += i;
		}
		return f;
	}

	namespace extremum
	{
		// return maximum
		int max(int number1, int number2)
		{
			if (number1 > number2)
			{
				return number1;
			}
			else
			{
				return number2;
			}
		}

		int min(int number1, int number2)
		{
			return -max(-number1, -number2);
		}

		int max(int number1, int number2, int number3)
		{
			return max(number1, max(number2, number3));
		}

		//maximum of 3 numbers
		int maxFrom3Alt(int number1, int number2, int number3)
		{
			int m = number1;
			if (number2 > m)
			{
				m = number2;
			}
			if (number3 > m)
			{
				m = number3;
			}
			return m;
		}
	}

	int factorialSum(int number)
	{
		int result = 1;
		for (int i = number; i > 1; --i)
		{
			result = 1 + result * i;
		}
		return result;
	}
}

