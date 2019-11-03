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
	string a;
	int colvo;
	string message;
	int result = 0;
	int length;
	string l = "0@";
	cin >> colvo;
	int i;
	for (i = 0; i < colvo; ++i)
	{
		cin >> message;
		length = message.length();
		if (message[length - 1] == l[1])
		{
			result = i + 1 - result;
		}
	}
	cout << result;
	return 0;
}