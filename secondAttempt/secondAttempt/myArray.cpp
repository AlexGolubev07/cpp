#include <iostream>
#include <ctime>

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
	}

	void swap(int* a, int index1, int index2)
	{
		int temp = a[index1];
		a[index1] = a[index2];
		a[index2] = temp;
	}
}