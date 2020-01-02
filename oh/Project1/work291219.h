#pragma once
#include <iostream> 

using namespace std;

void ege14242()
{
	int a[19];
	for (int i = 0; i < 19; ++i)
	{
		a[i] = 0;
	}
	int n = 0;
	cin >> n;
	int number = 0;
	int const amountOfDigits = 2;
	for (int i = 0; i < n; ++i)
	{
		cin >> number;
		int sum = 0;
		for (int j = 0; j < amountOfDigits; ++j)
		{
			sum += number % 10;
			number /= 10;
		}
		++a[sum];
	}
	int biggest = 0;
	int indexOfBiggest = -1;
	for (int i = 0; i < 19; ++i)
	{
		if (a[i] >= biggest)
		{
			biggest = a[i];
			indexOfBiggest = i;
		}
	}
}

void ege5535()
{
	int n = 0;
	cin >> n;
	float number = 0;
	int count = 0;
	float min = 100000;
	float max = -1;
	bool moOne = false;
	for (int i = 0; i < n; ++i)
	{
		cin >> number;
		if (number > 1.0)
		{
			++count;
			if (number < min)
			{
				min = number;
			}
			moOne = true;
		}
		else
		{
			if (number > max)
			{
				max = number;
			}
		}
	}
	if (moOne)
	{
		cout << count << " " << min;
	}
	else
	{
		cout << 1 << " " << max;
	}
}

void ege7684()
{
	int n = 0;
	cin >> n;
	int number = 0;
	int maxOdd = 0;
	int maxEven = 0;
	bool even = false;
	bool odd = false;
	for (int i = 0; i < n; ++i)
	{
		cin >> number;
		if (number % 2 == 0 && number > maxEven)
		{
			maxEven = number;
			even = true;
		}
		if (number % 2 != 0 && number > maxOdd)
		{
			maxOdd = number;
			odd = true;
		}
	}
	if (even && odd)
	{
		cout << maxOdd + maxEven;
	}
	else
	{
		cout << -1;
	}
}

void ege7321()
{
	int n = 0;
	cin >> n;
	int t = 0;
	cin >> t;
	int a = 0;
	int b = 0;
	int x = 0;
	int y = 0;
	int y1 = 0;
	int y2 = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		x += a;
		y1 = y + b;
		y2 = x + t;
		if (y1 > y2)
		{
			y = y2;
		}
		else
		{
			y = y1;
		}
	}
	if (x >= y)
	{
		cout << y;
	}
	else
	{
		cout << x;
	}
}