#include <iostream>
#include <ctime>
#include "myMath.h"
#include "Limits.h"
#include <cassert>

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
		assert(size >= 2);
		int m1 = INT_MIN;
		int m2 = INT_MIN;
		for (int i = 0; i < size; i++)
		{
			#pragma region another method
			/*bool condition1 = a[i] <= m2;
			bool condition2 = a[i] > m2 && a[i] <= m1;
			bool condition3 = a[i] > m1;*/
			#pragma endregion
			
			if (a[i] <= m2)
			{
				continue;
			}
			if (a[i] > m2 && a[i] <= m1)
			{
				m2 = a[i];
				continue;
			}
			if (a[i] > m1)
			{
				m2 = m1;
				m1 = a[i];
				continue;
			}
		}
		return m2;
	}

	int thirdMax(int* a, int size)
	{
		assert(size >= 3);
		int m1 = INT_MIN;
		int m2 = INT_MIN;
		int m3 = INT_MIN;
		for (int i = 0; i < size; i++)
		{

			if (a[i] <= m3)
			{
				continue;
			}
			if (a[i] > m3 && a[i] <= m2)
			{
				m3 = a[i];
				continue;
			}
			if (a[i] > m2 && a[i] <= m1)
			{
				m3 = m2;
				m2 = a[i];
				continue;
			}
			if (a[i] > m1)
			{
				m3 = m2;
				m2 = m1;
				m1 = a[i];
			}
		}
		return m3;
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