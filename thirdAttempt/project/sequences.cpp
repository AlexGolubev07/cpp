#include "integerNumbers.h"
#include <cassert>

/*
f1 = 1
f2 = 1
f3 = f2 + f1 = 2
f4 = f3 + f2 = 3
f5 = f4 + f3 = 5
.......
f_n = f_(n-1) + f_(n-2)
1 1 2 3 5 8 13 21 34 55 89 144
*/
int intNum::sequences::fibIter(int n)
{
	assert(n > 0);
	if (n == 1 || n == 2)
	{
		return 1;
	}
	int current = 0;
	int previous = 1;
	int prevPrevious = 1;
	for (int i = 3; i <= n; i++)
	{
		current = previous + prevPrevious;
		prevPrevious = previous;
		previous = current;
	}
	return current;
}

int intNum::sequences::fibRec(int n)
{
	assert(n > 0);
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fibRec(n - 1) + fibRec(n - 2);
	}
}