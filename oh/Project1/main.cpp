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

using namespace std;

int main()
{
	long long n = 4096;
	for (int i = 0; i < 51; ++i)
	{
		cout << n * 2 << " " << i + 14 << endl;
		n *= 2;
	}
	return 0;
}