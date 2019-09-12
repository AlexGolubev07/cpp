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