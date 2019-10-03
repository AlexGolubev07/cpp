#include "myArray.h"
#include "sort.h"

void sort::prochod(int* a, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			myArray::swap(a, i, i + 1);
		}
	}
}

void sort::bubble(int* a, int size)
{
	for (int i = 0; i < size; ++i)
	{
		sort::prochod(a, size);
	}
}