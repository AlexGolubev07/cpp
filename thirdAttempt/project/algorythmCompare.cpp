#include <ctime>
#include <iostream>
#include "myMath.h"
#include "integerNumbers.h"

using namespace std;

namespace compareTime
{
	void factorialSum()
	{
		int const replays = 1000000;

		unsigned startTime1 = clock();
		for (int i = 0; i < replays; i++)
		{
			myMath::tWF::factorialSum(15);
		}
		unsigned endTime1 = clock();
		unsigned time1 = endTime1 - startTime1;

		unsigned startTime2 = clock();
		for (int i = 0; i < replays; i++)
		{
			myMath::tWF::factorialSumAlt(15);
		}
		unsigned endTime2 = clock();
		unsigned time2 = endTime2 - startTime2;

		std::cout << "factorialSum time = " << time1 << std::endl << "factorialSumAlt time = " << time2;
	}

	void fib()
	{
		int const replays = 1000000;

		unsigned startTime1 = clock();
		for (int i = 0; i < replays; ++i)
		{
			intNum::sequences::fibIter(10);
		}
		unsigned endTime1 = clock();
		std::cout << "iter time = " << endTime1 - startTime1 << std::endl;
		unsigned startTime2 = clock();
		for (int i = 0; i < replays; ++i)
		{
			intNum::sequences::fibRec(10);
		}
		unsigned endTime2 = clock();
		std::cout << "rec time = " << endTime2 - startTime2;
	}
	
	void inverting()
	{
		int const replays = 1000000;
		unsigned startTime1 = clock();
		for (int i = 0; i < replays; ++i)
		{
			intNum::invertedNumber(1234);
		}
		unsigned endTime1 = clock();
		cout << "simple reverting = " << endTime1 - startTime1 << endl;
		unsigned startTime2 = clock();
		for (int i = 0; i < replays; ++i)
		{
			intNum::smartInvertNumber(1234);
		}
		unsigned endTime2 = clock();
		cout << "smart (logic) inverting = " << endTime2 - startTime2;
	}

	void factorial()
	{
		int const replays = 1000000;
		unsigned startTime1 = clock();
		for (int i = 0; i < replays; ++i)
		{
			myMath::tWF::factorial(5);
		}
		unsigned endTime1 = clock();
		cout << "simple factorial = " << endTime1 - startTime1 << endl;
		unsigned startTime2 = clock();
		for (int i = 0; i < replays; ++i)
		{
			myMath::tWF::facRec(5);
		}
		unsigned endTime2 = clock();
		cout << "rec factorial = " << endTime2 - startTime2;
	}
}
