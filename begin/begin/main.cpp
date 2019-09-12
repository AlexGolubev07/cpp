#include <iostream>
#include "integerNumbers.h"
#include "myMath.h"

using namespace std;

int main()
{
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	
	cout << maxEven(a, 3);
	return 0;
}
