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