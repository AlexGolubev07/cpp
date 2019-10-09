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
					cout << "test1.1 passed" << endl;
				}
				else
				{
					cout << "test1.1 failed" << endl;
				}

			}

			 void max()
			{
				if (myMath::extremum::max(1, 2) == 2)
				{
					cout << "test1.2 passed" << endl;
				}
				else
				{
					cout << "test1.2 failed" << endl;
				}
			}

			 void min()
			 {
				 if (myMath::extremum::min(1, 2) == 2)
				 {
					 cout << "test1.3 passed" << endl;
				 }
				 else
				 {
					 cout << "test1.3 failed" << endl;
				 }

			 }
		}
		// end of extremum namespace
		namespace tWF
		{
			void factorial()
			{
				if (myMath::tWF::factorial(4) == 24)
				{
					cout << "test1.4 passed" << endl;
				}
				else
				{
					cout << "test1.4 failed" << endl;
				}
			}

			void facRec()
			{
				if (myMath::tWF::facRec(4) == 24)
				{
					cout << "test1.5 passed" << endl;
				}
				else
				{
					cout << "test1.5 failed" << endl;
				}
			}

			void sumFacRec()
			{
				if (myMath::tWF::sumFacRec(4) == 33)
				{
					cout << "test1.6 passed" << endl;
				}
				else
				{
					cout << "test1.6 failed" << endl;
				}
			}

			void factorialSumAlt()
			{
				if (myMath::tWF::factorialSumAlt(4) == 33)
				{
					cout << "test1.7 passed" << endl;
				}
				else
				{
					cout << "test1.7 failed" << endl;
				}
			}

			void factorialSum()
			{
				if (myMath::tWF::factorialSum(4) == 33)
				{
					cout << "test1.8 passed" << endl;
				}
				else
				{
					cout << "test1.8failed" << endl;
				}
			}
		}
		//end  of tWF namespace

		namespace sum
		{
			void sum()
			{
				if (myMath::sum::sum(4) == 10)
				{
					cout << "test1.9 passed" << endl;
				}
				else
				{
					cout << "test1.9 failed" << endl;
				}
			}

			void recSum()
			{
				if (myMath::sum::recSum(4) == 10)
				{
					cout << "test1.10 passed" << endl;
				}
				else
				{
					cout << "test1.10 failed" << endl;
				}
			}
		}
		// end of sum namespace
	}
	// end of math namespace

	namespace intNumbers
	{
		void sumOfDigits()
		{
			if(intNum::sumOfDigit(123) == 6)
			{
				cout << "test2.1 passed" << endl;
			}
			else
			{
				cout << "test2.1 failed" << endl;
			}
		}

		void lenNumber()
		{
			if (intNum::lenNumber(12345) == 5)
			{
				cout << "test2.2 passed" << endl;
			}
			else
			{
				cout << "test2.2 failed" << endl;
			}
		}

		void invertedNumber()
		{
			if (intNum::invertedNumber(123) == 321)
			{
				cout << "test2.3 passed" << endl;
			}
			else
			{
				cout << "test2.3 failed" << endl;
			}
		}

		void smartInverNumber()
		{
			if (intNum::smartInvertNumber(123) == 321)
			{
				cout << "test2.4 passed" << endl;
			}
			else
			{
				cout << "test2.4 failed" << endl;
			}
		}

		void euclidRec()
		{
			if (intNum::euclidRec(12, 18) == 6)
			{
				cout << "test2.5 passed" << endl;
			}
			else
			{
				cout << "test2.5 failed" << endl;
			}
		}

		void euclidNotRec()
		{
			if (intNum::euclidNotRec(12, 18) == 6)
			{
				cout << "test2.1 passed" << endl;
			}
		}
	}
	//end of intNum namespace
	namespace myArray
	{
		//no tests
	}
	//end of myArray namespace

	namespace compareTime 
	{
		//no tests
	}


}
// end of test namespace