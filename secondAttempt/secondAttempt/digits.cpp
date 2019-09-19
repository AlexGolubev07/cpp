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
	int r = 0;
	while (number != 0)
	{
		r = 10 * r + number % 10;
		number /= 10;
	}
	return r;
}

/*
6743
3476 = 3 * 10^3 + 4 * 10^2 + 7 * 10 + 6 = 10(3 * 10^2 + 4 * 10 + 7) + 6 = 10(10(3 * 10 + 4) + 7) + 6

r = 0
r = 10 * r + 3
r = 10 * r + 4 = 10 * 3 + 4
r = 10 * r + 7 = 10(10 * 3 + 4) + 7
r = 10 * r + 6 = 10(10(10 * 3 + 4) + 7) + 6
*/
