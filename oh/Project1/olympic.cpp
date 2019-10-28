#include <iostream>
#include "integerNumbers.h"
#include <cassert>
#include <string>

using namespace std;

namespace olympic
{
	namespace year2018
	{
		namespace class9
		{
			string beauty(string name)
			{
				if (name.length() < 3)
				{
					return "none";
				}
				if (name.length() == 3)
				{
					if (name[0] == name[2] && name[0] != name[1])
					{
						return name;
					}
					else
					{
						return "none";
					}
				}
				if (name.length() > 3)
				{
					int const len = name.length();
					string name1 = name.substr(0, len - 1);
					string name2 = name.substr(1, len - 1);
					string res1 = beauty(name1);
					if (res1 == "none")
					{
						return beauty(name2);
					}
					else
					{
						return res1;
					}
				}
			}
		}
	}

	namespace year2019
	{
		namespace class9
		{
			int amountPrime(int const number)
			{
				assert(number > 0);
				int count = 0;
				for (int i = 2; i <= number; i++)
				{
					if (intNum::primaryNumbers::isPrime(i))
					{
						++count;
					}
				}
				return count;
			}

			int* arrayOfPrime(int const number, int const size)
			{
				int* a = new int[size];
				int position = 0;
				for (int i = 2; i <= number; i++)
				{
					if (intNum::primaryNumbers::isPrime(i))
					{
						a[position] = i;
						++position;
					}
				}
				return a;
			}

			string primeSum(int const number, int const amount)
			{
				int const size = amountPrime(number);
				int* a = arrayOfPrime(number, size);

				for (int n = 0; n < size - 2; ++n)
				{
					int sum = a[n] + a[n + 1] + a[n + 2];

					if (sum == number)
					{
						string result = to_string(a[n]) + " + " + to_string(a[n + 1]) + " + " + to_string(a[n + 2]);
						result += " = " + to_string(number);
						delete[] a;
						return result;
					}
				}

				return "no solution!";
				delete[] a;
			}

			int frecenBoc()
			{
				int xa;
				int ya;
				int xb;
				int yb;
				int xc;
				int yc;
				std::cin >> xa >> ya >> xb >> yb >> xc >> yc;
				int secondPart();
				{
					if (xa != 0)
					{
						xb -= xa;
						xc -= xa;
						xa = 0;
						secondPart;
					}
					if (ya != 0)
					{
						yb -= ya;
						yc -= ya;
						ya = 0;
						secondPart;
					}
					if ((xb / yb) = (xc / yc))
					{
						cout <<  "BOTH";
					}
					if ((xb / yb) > (xc / yc))
					{
						cout << "LEFT";
					}
					if ((xb / yb) < (xc / yc) && (xb < xc && yb < yc)  || ())
					{
						cout << "RIGHT";
					}
				}
				


			}
		}
	}
}