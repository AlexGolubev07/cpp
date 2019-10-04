#include <ctime>
#include <iostream>
#include "myMath.h"

namespace compareTime
{
	void factorialSum()
	{
		int const replays = 1000000;

		unsigned startTime1 = clock();
		for (int i = 0; i < replays; i++)
		{
			myMath::factorialSum(15);
		}
		unsigned endTime1 = clock();
		unsigned time1 = endTime1 - startTime1;

		unsigned startTime2 = clock();
		for (int i = 0; i < replays; i++)
		{
			myMath::factorialSumAlt(15);
		}
		unsigned endTime2 = clock();
		unsigned time2 = endTime2 - startTime2;

		std::cout << "factorialSum time = " << time1 << std::endl << "factorialSumAlt time = " << time2;
	}
}