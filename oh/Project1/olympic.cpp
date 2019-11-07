#include <iostream>
#include "integerNumbers.h"
#include <cassert>
#include <string>
#include "plane.h"

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

			void arrayOfPrime(int const number, int const size, int* a)
			{
				int position = 0;
				for (int i = 2; i <= number; i++)
				{
					if (intNum::primaryNumbers::isPrime(i))
					{
						a[position] = i;
						++position;
					}
				}
			}

			string primeSum(int const number, int const amount)
			{
				int const size = amountPrime(number);
				int* a = new int[size];
				arrayOfPrime(number, size, a);

				for (int n = 0; n < size - amount + 1; ++n)
				{
					int sum = 0;

					for (int i = n; i < n + amount; ++i)
					{
						sum += a[i];
					}

					if (sum == number)
					{
						string result = to_string(a[n]);
						for (int i = n + 1; i < n + amount; ++i)
						{
							result += " + " + to_string(a[i]);
						}
						result += " = " + to_string(number);
						delete[] a;
						return result;
					}
				}

				return "no solution!";
				delete[] a;
			}

			string frekenBok(plane::point::Point freken, plane::point::Point karlson, plane::point::Point malysh)
			{
				// shift to frekenBok
				karlson = plane::point::shift(freken, karlson);
				malysh = plane::point::shift(freken, malysh);
				freken = plane::point::shift(freken, freken);
				cout << freken << karlson << malysh << endl;

				// rotation
				plane::point::Point O;
				O.x = 0;
				O.y = 0;
				double const gyp = plane::point::distanceBetweenPoints(O, malysh);
				double cosinus = malysh.x / gyp;
				double sinus = malysh.y / gyp;
				cout << freken << karlson << malysh << endl;

				karlson = plane::point::rotation(cosinus, sinus, karlson);
				malysh = plane::point::rotation(cosinus, sinus, malysh);

				// result
				if (malysh.x < 0)
				{
					if (karlson.y > 0)
					{
						return "Right";
					}
					if (karlson.y == 0)
					{
						return "Both";
					}
					if (karlson.y < 0)
					{
						return "Left";
					}
				}
				if (malysh.x > 0)
				{
					if (karlson.y < 0)
					{
						return "Right";
					}
					if (karlson.x / karlson.y == malysh.x / malysh.y)
					{
						return "Both";
					}
					if (karlson.y > 0)
					{
						return "Left";
					}
				}
				return "chto-to ne tak";
			}

			/*int frecenBoc()
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
				


			}*/
		}
	}
}