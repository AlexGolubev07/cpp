#include "numeralSystem.h"
#include "myMath.h"

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
				//ð
				return 0;
			}

			string toTen(string const number, int const from)
			{
				//p
				return "";
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
						res += sum * ten;
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

			string sum(string const number1, string const number2, int const base)
			{
				string n1 = "";
				string n2 = "";
				string alph = "0123456789ABCDEF";
				if (number1.length() > number2.length())
				{
					n1 = number1;
					n2 = number2;
				}
				else
				{
					n2 = number1;
					n1 = number2;
				}
				int ed = 0;
				n2 = string(number1.length() - number2.length(), '0') + n2;
				string res = "";
				for (int i = n1.length() - 1; i >= 0; --i)
				{
					int d1 = alph.find(n1[i]);
					int d2 = alph.find(n2[i]);
					int sum = d1 + d2 + ed;
					if (sum >= base)
					{
						res = alph[sum - base] + res;
						ed = 1;
					}
					else
					{
						res = alph[sum] + res;
						ed = 0;
					}
				}
				if (ed == 1)
				{
					res = "1" + res;
				}
				return res;
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
		namespace factorial
		{
			std::string sum(std::string const number1, std::string const number2)
			{
				string n1 = "";
				string n2 = "";
				string alph = "0123456789ABCDEF";
				if (number1.length() > number2.length())
				{
					n1 = number1;
					n2 = number2;
				}
				else
				{
					n2 = number1;
					n1 = number2;
				}
				int ed = 0;
				int maxDigit = 2;
				n2 = string(number1.length() - number2.length(), '0') + n2;
				string res = "";
				for (int i = n1.length() - 1; i >= 0; --i)
				{
					int d1 = alph.find(n1[i]);
					int d2 = alph.find(n2[i]);
					int sum = d1 + d2 + ed;
					if (sum >= maxDigit)
					{
						res = alph[sum - maxDigit] + res;
						ed = 1;
					}
					else
					{
						res = alph[sum] + res;
						ed = 0;
					}
					++maxDigit;
				}
				if (ed == 1)
				{
					res = "1" + res;
				}
				return res;
			}
		}
	}
	// end of namespace nonPositional

	namespace mixed
	{
		
	}
	// end of namespace mixed
}
// end of namespace numeralSystem