#include "myMath.h"

namespace integerNumbers
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

	/*
	gcd(a, b) = gcd(b, a % b)
	*/
}