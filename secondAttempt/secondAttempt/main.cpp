#include <iostream>
#include "integerNumbers.h"
#include "myMath.h"
#include "myArray.h"
#include "taskWithArrays.h"
#include "sort.h"

using namespace std;

int main()
{
	int a[5];
	myArray::arrayIn(a, 5);
	//myArray::arrayOut(a, 5);
	cout << myArray::secondMax(a, 5);
	return 0;
}
