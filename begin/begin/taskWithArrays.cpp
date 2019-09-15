namespace taskWithArrays
{
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
			return -1;
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
			return -1;
		}
		else
		{
			return m;
		}
	}

	int maxOf3(int* a, int size)
	{
		int m = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 3 == 0 && a[i] > m && a[i] % 10 == 7)
			{
				m = a[i];
			}
		}
		return m;
	}

	int productOf1(int* a, int size)
	{
		int m = 1;
		int amount = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 10 == 1)
			{
				m *= a[i];
				++amount;
			}
		}
		if (amount == 0)
		{
			return -1;
		}
		else
		{
			return m;
		}
	}

	int maxEndWith7(int* a, int size)
	{
		int m = 0;
		int amount = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 3 == 0 && a[i] > m && a[i] % 10 == 7)
			{
				m = a[i];
				++amount;
			}
		}
		if (amount == 0)
		{
			return -1;
		}
		else
		{
			return m;
		}
	}

	int productOf7(int* a, int size)
	{
		int m = 1;
		int amount = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 7 == 0)
			{
				m *= a[i];
				++amount;
			}
		}
		if (amount == 1)
		{
			return -1;
		}
		else
		{
			return m;
		}
	}
}