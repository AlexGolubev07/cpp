#include <cassert>
#include <iostream> 

namespace myMath
{
	namespace tWF
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

		long long factorialSum(int number)
		{
			long long result = 1;
			for (int i = number; i > 1; --i)
			{
				result = 1 + result * i;
			}
			return result;
		}

		long long factorialSumAlt(int number)
		{
			long long result = 0;
			for (int i = 1; i <= number; ++i)
			{
				result += myMath::tWF::factorial(i);
			}
			return result;
		}

		
		long sumFacRec(int number)
		{
			assert(number >= 1);
			if (number == 1)
			{
				return 1;
			}
			else
			{
				return 1 + (number - 1) * sumFacRec(number - 1);
			}
		}
	}
	//end of tWF

	namespace sum
	{
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
	}
	//end of sum

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

		int max3(int number1, int number2, int number3)
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
		//end of extrimum
	}
}

