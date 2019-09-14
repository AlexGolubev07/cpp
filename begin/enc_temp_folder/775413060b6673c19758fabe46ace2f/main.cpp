#include <iostream>
#include "integerNumbers.h"
#include "myMath.h"

using namespace std;

int main(int* a, int size)
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
	if (m == 0)
	{
		cout << "no meed numbers";
	}
	else
	{
		cout << m;
	}
}
