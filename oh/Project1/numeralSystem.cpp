#include "numeralSystem.h"
#include "myMath.h"
#include <string>

using namespace std;

#pragma once

namespace numeralSystem
{
	namespace positional
	{
		namespace standard
		{
			int toTen(int const number, int const from)
			{

			}
			string toTen(string const number, int const from)
			{

			}
			int sum(int const number1, int const number2, int const base)
			{
				int num1 = myMath::extremum::max(number1, number2);
				int num2 = myMath::extremum::min(number1, number2);
				int res = 0;
				int ten = 1;
				int ed = 0;
				while (num1 != 0)
				{
					int d1 = num1 % 10;
					int d2 = num2 % 10;
					int sum = d1 + d2 + ed;
					if (sum >= base)
					{
						res += (sum - base) * ten;
						ed = 1;
					}
					else
					{
						res += sum;
						ed = 0;
					}
					ten *= 10;
					num1 /= 10;
					num2 /= 10;
				}
				if (ed == 1)
				{
					res += ten;
				}
				return res;
			}

			string sum(string const number1, string const number2)
			{
				return "";
			}

			int min(int const number1, int const number2, int const base)
			{
				int num1 = number1;
				int num2 = number2;
				int res = 0;
				int sum = num1 - num2;
				while (sum > base)
				{
					res = res * 10 + sum % base;
					sum = (sum - sum % base) / base + sum % base;
				}
				return res;
			}

			int mult(int const number1, int const number2, int const base)
			{
				int num1 = number1;
				int num2 = number2;
				int res = 0;
				int sum = num1 * num2;
				while (sum > base)
				{
					res = res * 10 + sum % base;
					sum = (sum - sum % base) / base + sum % base;
				}
				return res;
			}


		}
		// end of namespace standard

		namespace nonStandard
		{

		}
		// end of namespace nonStandard
	}
	// end of namespace positional

	namespace nonPositional
	{

	}
	// end of namespace nonPositional

	namespace mixed
	{

	}
	// end of namespace mixed
}
// end of namespace numeralSystem