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

using namespace std;

int main()
{
	plane::point::Point f;
	plane::point::Point m;
	plane::point::Point k;

	cin >> f >> m >> k;
	cout << f << m << k;

	cout << olympic::year2019::class9::frekenBok(f, k , m);

	return 0;
}