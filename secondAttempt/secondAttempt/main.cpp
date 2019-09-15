#include <iostream>
#include "integerNumbers.h"
#include "myMath.h"
#include "myArray.h"
#include "taskWithArrays.h"
#include "sort.h"

//using namespace std;

int main()
{
	int a[5];
	myArray::arrayInRand(a, 5);
	sort::bubble(a, 5);
	myArray::arrayOut(a, 5);
}
