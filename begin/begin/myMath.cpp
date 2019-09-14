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


int max2(int number1, int number2, int number3)
{
	return max(number1, max(number2, number3));
}

//maximum of 3 numbers
int max1(int number1, int number2, int number3)
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

int maxFromArray(int* a, int size)
{
	int m = a[0];
	for (int i = 1; i < size; i++)
	{
		if (a[i] > m)
		{
			m = a[i];
		}
	}
	if (m == 0)
	{
		//cout << "no meed numbers";
	}
	else
	{
		return m;
	}
}

int maxEven(int* a, int size)
{
	int m = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0 && a[i] > m)
		{
			m = a[i];
		}
	}
	if (m == 0)
	{
		//cout << "no meed numbers";
	}
	else
	{
		return m;
	}
}

int sumOf5(int* a, int size)
{
	int m = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 5 == 0 && a[i] > m)
		{
			m += a[i];
		}
	}
	if (m == 0)
	{
		//cout << "no meed numbers";
	}
	else
	{
		return m;
	}
}

// % 7 /3
int maxOf3(int* a, int size)
{
	int m = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 3 == 0 && a[i] > m && a[i] % 10 ==7)
		{
			m = a[i];
		}
	}
	return m;
}

int productOf7(int* a, int size)
{
	int m = 1;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 7 == 0 && a[i] > m)
		{
			m *= a[i];
		}
	}
	if (m == 1)
	{
		//cout << "no meed numbers";
	}
	else
	{
		return m;
	}
}
