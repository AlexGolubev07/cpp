#include <iostream>
#include "integerNumbers.h"
#include "myMath.h"
#include "myArray.h"
#include "taskWithArrays.h"
#include "sort.h"
#include <ctime>
#include "oge.h"
#include "test.h"
#include "algorythmCompare.h"
#include "olympicHelp.h"

using namespace std;
using namespace olympic::year2019::class9;

int main()
{
	int size = amountPrime(10);
	int* a = arrayOfPrime(10, size);

	for (int i = 0; i < amountPrime(10); i++)
	{
		cout << a[i] << " ";
	}

	delete[] a;
	return 0;
}