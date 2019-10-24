#include <iostream>
#include "integerNumbers.h"
#include <cassert>

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

			void primeSum(int const number)
			{
				// ehh
			}
		}
	}
}