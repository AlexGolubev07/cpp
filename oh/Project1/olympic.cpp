#include <iostream>
#include "integerNumbers.h"

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
			int amountPrime2011()
			{
				int count = 0;
				for (int i = 2; i <= 2011; i++)
				{
					if (intNum::primaryNumbers::isPrime(i))
					{
						++count;
					}
				}
				return count;
			}

			void arrayIn(int* a)
			{
				int const size = amountPrime2011();
				int position = 0;
				for (int i = 2; i <= 2011; i++)
				{
					if (intNum::primaryNumbers::isPrime(i))
					{
						a[position] = i;
						++position;
					}
				}
			}

			void primeSum2011(int n)
			{
				int const size = amountPrime2011();
				int* a = new int[size];
				arrayIn(a);
				/*for (int i = 0; i < size; i++)
				{
					cout << a[i] << " ";
				}*/
				cout << endl;

				for (int i = 0; i < size - n + 1; i++)
				{
					int sum = 0;
					int test = a[i];
					for (int j = i; j < i + n; j++)
					{
						sum += a[i];
					}
					if (test == 661)
					{
						cout << a[i] << " " << a[i + 1] << " " << a[i + 2] << " " << sum << endl;
					} 

					if (sum == 2011)
					{
						cout << a[i];
						for (int j = i + 1; j < i + n; j++)
						{
							cout << " + " << a[i];
						}
						cout << " = " << sum;
						delete[] a;
						return;
					}
				}
				cout << "No solution!";
				delete[] a;
			}
		}
	}
}