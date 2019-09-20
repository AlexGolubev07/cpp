#include <iostream>
#include <ctime>
#include "myMath.h"

using namespace std;

namespace myArray
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

	int secondMax(int* a, int size)
	{
		int m = myMath::max(a[0], a[1]);
		int n = myMath::min(a[0], a[1]);
		for (int i = 2; i < size; i++)
		{
			if (a[i] >= m)
			{
				n = m;
				m = a[i];
			}
		}
		return n;
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
		srand(time(0));
		for (int i = 0; i < size; ++i)
		{
			a[i] = rand() % 100 + 1;
		}
	}

	void arrayOut(int* a, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}

	void swap(int* a, int index1, int index2)
	{
		int temp = a[index1];
		a[index1] = a[index2];
		a[index2] = temp;
	}
}