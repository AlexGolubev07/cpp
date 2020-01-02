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
#include "olympic.h"
#include "ege.h"
#include "plane.h"
#include "games.h"
#include "numeralSystem.h"
#include <string>;
#include "work291219.h"

using namespace std;

int foo(int n) {
	if (n <= 0)
		return 1;
	foo((n * 2) / 3) + foo(n - 2);
}

int main()
{
	int a[100];
	int i = 0;
	for (i = 0; i < 100; ++i)
	{
		a[i] = 0;
	}
	int number = 1;
	int k = 1;
	while (number != 0)
	{
		cin >> number;
		a[100 - k] = number;
		++k;
	}
	for (i = 0; i < 100; ++i)
	{
		if (a[i] != 0)
		{
			cout << a[i] << " ";
		}
	}
	return 0;
	return 0;
}