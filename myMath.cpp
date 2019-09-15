namespace myMath
{

	int factorial(int number)
	{
		int f = 1;
		for (int i = 2; i <= number; i++)
		{
			f *= i;
		}
		return f;
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
		return 0;
	}
}

