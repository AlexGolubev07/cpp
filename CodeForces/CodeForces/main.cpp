#include <iostream>
#include "trainTasks.h"

void swap(int* array, int firstIndex, int secondIndex)
{
	int help = array[firstIndex];
	array[firstIndex] = array[secondIndex];
	array[secondIndex] = help;
}

void quickSort(int* array, int fi, int si)
{
	if (fi - si == 1)
		return;
	if (fi - si == 2)
	{
		if (array[fi] > array[si - 1])
			swap(array, fi, si - 1);
		return;
	}
	if (fi - si == 3)
	{
		if (array[fi] > array[si - 1])
			swap(array, fi, si - 1);
		if (array[fi] > array[fi + 1])
			swap(array, fi, fi + 1);
		if (array[fi + 1] > array[si - 1])
			swap(array, fi + 1, si - 1);
		return;
	}
	int pivot = array[si - 1];
	int i = 0;
	for (i = 0; fi + i < si - i - 2; ++i)
	{
		if (array[fi + i] > pivot && array[si - i - 2] < pivot)
			swap(array, fi + i, si - i);
	}
	for (int i = 0; i < 9; ++i)
	{
		cout << array[i] << " ";
	}
	if (fi + i == si - i)
	{
		quickSort(array, fi, fi + i);
		quickSort(array, fi + i, si);
	}
	else
	{
		quickSort(array, fi, fi + i - 1);
		quickSort(array, fi + i, si);
	}
	return;
}

int main()
{
	//int* check = new int[9];
	//for (int i = 0; i < 9; ++i)
	//{
	//	cin >> check[i];
	//}
	//quickSort(check, 0, 9);
	//for (int i = 0; i < 9; ++i)
	//{
	//	cout << check[i] << " ";
	//}
	//delete[] check;
	////cout << tasks::E::task1400();
	work::List(3);
	return 0;
}