#include "myMath.h"

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

int euclid(int number1, int number2)
{
	int min = myMath::min(number1, number2);
	int max = myMath::max(number1, number2);
	if (min == 0)
	{
		return max;
	}
	else
	{
		return euclid(min, max % min);
	}
}

/*
gcd(a, b) = gcd(b, a % b)
*/