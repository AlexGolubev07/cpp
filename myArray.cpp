#include "array.h"
#include <iostream>

using namespace std;

namespace array
{
	int max(int* a, int size)
	{
		int m = a[0];
		for (int i = 1; i < size; i++)
		{
			if (a[i] > m)
			{
				m = a[i];
			}
		}
		return m;
	}

	void arrayIn(int* a, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			cin >> a[i];
		}
	}

	void arrayInRand(int* a, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			a[i] = rand() % 100;
		}
	}

	void arrayOut(int* a, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			cout << a[i] << " ";
		}
	}
}