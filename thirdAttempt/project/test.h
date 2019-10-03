#pragma once
#include "myMath.h"
#include <iostream>

using namespace std;

namespace test
{
	namespace math
	{
		namespace extremum
		{
			void maxFrom3Alt()
			{
				if (myMath::extremum::maxFrom3Alt(1, 2, 3) == 3)
				{
					cout << "test1 passed" << endl;
				}
				else
				{
					cout << "test1 failed" << endl;
				}

				if (myMath::extremum::maxFrom3Alt(1, 1, 1) == 1)
				{
					cout << "test2 passed" << endl;
				}
				else
				{
					cout << "test2 failed" << endl;
				}

				if (myMath::extremum::maxFrom3Alt(2, 2, 3) == 2)
				{
					cout << "test3 passed" << endl;
				}
				else
				{
					cout << "test3 failed" << endl;
				}
			}
		}
		// end of extremum namespace
	}
	// end of math namespace
}
// end of test namespace