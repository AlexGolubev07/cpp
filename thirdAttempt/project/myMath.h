#pragma once

namespace myMath
{
	namespace extremum
	{
		// max
		int max(int number1, int number2);

		// min
		int min(int number1, int number2);

		// max
		int max3(int number1, int number2, int number3);

		int maxFrom3Alt(int number1, int number2, int number3);
	}

	namespace tWF
	{
	
		// calculate factorial
		int factorial(int number);

		//
		int facRec(int number);

		long long factorialSum(int number);

		long long factorialSumAlt(int number);

		long sumFacRec(int number);
	}

	namespace sum
	{
		// description
		int sum(int number);

		//recSum
		int recSum(int number);
	}
}

