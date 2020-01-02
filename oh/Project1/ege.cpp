#include <iostream>
#include "ege.h"
#include "myArray.h"

using namespace std;

namespace ege
{
	namespace ege25
	{
		namespace ege251
		{
			void ege7682()
			{
				#define N 5
				int a[N];
				int i, j, k;
				for (i = 0; i < N; i++)
					cin >> a[i];

				k = 0;
				for (i = 0; i < N - 1; i++)
				{
					j = a[i] + a[i + 1];
					if (j % 2 == 0 && j % 4 != 0)
					{
						++k;
					}
				}

				cout << k;
			}
			
			void ege7770()
			{
				#define N 40
				long a[N];
				int i;
				int j;
				int k;
				k = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i] + a[i + 1];
					if ((a[i] * a[i + 1]) % 2 == 0 && j % 7 == 0)
					{
						++k;
					}
				}
				cout << k;
			}

			void ege8113()
			{
				#define N 20
				
				int a[N];
				int i, j, k;
				k = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i];
					if (j % 3 == 0 && a[i + 1] % 3 == 0)
					{
						++k;
					}
				}
				cout << k;
			}

			void ege8673()
			{
				#define N 40
				
				long a[N];
				long i, j, k;
				k = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i] + a[i + 1];
					if (j % 2 == 0 && (a[i] * a[i + 1]) > 100)
					{
						++k;
					}
				}
				cout << k;
			}

			void ege9376()
			{
				#define N 20
				
				int a[N];
				int i, j, k;
				k = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i];
					if (j % 3 == 0 || a[i + 1] % 3 == 0)
					{
						++k;
					}
				}
				cout << k;
			}

			void ege6936()
			{
				#define N 2014

				float a[N];
				float d, r;
				int i, j, k;

				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				r = abs(a[1] - a[0]);
				for (i = 1; i < N - 1; ++i)
				{
					d = abs(a[i + 1] - a[i]);
					if (d < r)
					{
						r = d;
						j = i;
					}
				}
				cout << a[j] << " " << a[j + 1];
			}

			void ege11126()
			{
				#define N 50
				
				int a[N];
				int i, j, k;
				k = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i];
					if (j > 9 && a[i + 1] > 9 && j < 100 && a[i + 1] < 100)
					{
						++k;
					}
				}
				cout << k;
			}

			void ege11321()
			{
				#define N 2000
				
				int a[N];
				int i, j, k;
				k = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i];
					if (j % 10 == 9 && a[i + 1] % 10 == 9)
					{
						++k;
					}
				}
				cout << k;
			}

			
		}
		// end of ege251 namespace

		namespace ege252
		{
			void ege9209()
			{
				#define N 2000

				int a[N];
				int i, k;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				k = 0;
				for (i = 0; i < N; ++i)
				{
					k += a[i];
				}
				if (k % 2 == 0)
				{
					k = 0;
					for (i = 0; i < N; ++i)
					{
						if (a[i] % 2 == 0)
						{
							++k;
						}
					}
					cout << k;
				}
				else
				{
					k = 0;
					for (i = 0; i < N; ++i)
					{
						if (a[i] % 2 != 0)
						{
							++k;
						}
					}
					cout << k;
				}
			}

			void ege9811byAlex()
			{
				#define N 2015
					
				int a[N];
				int i, j, k;
				for (i = 0; i < N; i++)
				{
						cin >> a[i];
				}
				j = 0;
				for (i = 1; i < N - 1; ++i)
				{
					if (a[i] < a[i - 1] && a[i] < a[i + 1])
					{
						if (((a[i + 1] - a[i]) + (a[i - 1] - a[i])) > j)
						{
							j = i;
						}
					}
				}
				cout << a[j];
			}

			void ege9811()
			{
				#define N 2015

				int a[N];
				int i, j, k;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				j = 0;
				for (i = 1; i < N - 1; ++i)
				{
					if (a[i] < a[i - 1] && a[i] < a[i + 1])
					{
						if (a[i] < j)
						{
							j = i;
						}
					}
				}
				cout << a[j];
			}

			void ege2914()
			{
				#define N 30
				
				int a[N];
				int min, max, i, sum;
				float sred1, sred2;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				min = a[0];
				max = a[0];
				sum = a[0];
				for (i = 1; i < N; ++i)
				{
					sum += a[i];
					if (a[i] > max)
					{
						max = a[i];
					}
					if (a[i] < min)
					{
						min = a[i];
					}
				}
				sred1 = (min + max) / 2.0;
				sred2 = sum / N;
				min = sred1 - sred2;
				cout << min;
			}

			void ege2925()
			{
				#define N 30
				int a[N];
				int i, x, y;
				float s;
				x = 0;
				y = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					if (a[i] < a[N])
					{
						x += a[i];
						++y;
					}
				}
				cout << x / double(y);
			}

			void ege3622()
			{
				#define N 8
				
				int a[N]; 
				int i, l, lmax, s, smax;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				lmax = 0;
				smax = 1;
				s = 0;
				for (i = 0; i < N - 1; ++i)
				{
					if (a[i] < a[i + 1])
					{
						++smax;
						if (i == N - 2)
						{
							if (smax > lmax)
							{
								lmax = smax;
								l = i + 1;
							}
						}
					}
					else
					{
						if (smax > lmax)
						{
							lmax = smax;
							l = i;
						}
						smax = 1;
					}
				}
				for (i = l - lmax + 1; i <= l; ++i)
				{
					s += a[i];
				}
				cout << s;
			}

			void ege5289()
			{
				#define N 30 
				
				int a[N];
				int i, j, s;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				s = 0;
				for (i = 0; i < N; ++i)
				{
					if (a[i] > 9 && a[i] < 100 && ((a[i] - (a[i] % 10)) / 10) > (a[i] % 10))
					{
						s += a[i];
					}
				}
				cout << s;
			}

			void ege7383()
			{
				#define N 30
				
				int a[N];
				int i, x, y;
				float s;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				x = 0;
				y = 0;
				for (i = 0; i < N; ++i)
				{
					if (a[i] == 4 || a[i] == 5)
					{
						x += a[i];
						++y;
					}
				}
				cout << x / double(y);
			}

			void ege6200()
			{
				#define N 2014 
				
				int a[N];
				int i, j, s;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				s = 0;
				j = 0;
				for (i = 0; i < N; ++i)
				{
					if (a[i] > 99 && a[i] < 1000 && a[i] % 10 == 9 && a[i] % 100 != 99)
					{
						s += a[i];
						j = 1;
					}
				}
				if (j != 0)
				{
					cout << s;
				}
				else
				{
					cout << -1;
				}
			}

			void ege10301()
			{
				#define N 2016
				
				int a[N];
				int i, k;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				k = 0;
				for (i = 0; i < N - 2; ++i)
				{
					if ((a[i + 1] + a[i + 2]) / 2 == a[i])
					{
						++k;
					}
				}
				cout << k;
			}

			void ege10399()
			{
				#define N 2016
				
				int a[N];
				int i, m, s, p;
				for (i = 0; i < N; ++i)
				{
					cin >> a[i];
				}
				s = a[N];
				if (a[N] % 2 == 0)
				{
					for (i = 0; i < N - 1; ++i)
					{
						if (a[i] % 2 == 0)
						{
							s += a[i];
						}
					}
				}
				else
				{
					for (i = 0; i < N - 1; ++i)
					{
						if (a[i] % 2 == 1)
						{
							s += a[i];
						}
					}
				}
				cout << s;
			}

			void ege13636()
			{
				// I need to know shestnadzatirichnost' well
			}
		}
		// end of ege252 namespace

		namespace ege253
		{
			void ege7936()
			{
				#define N 2000
				int a[N];
				int i, j, k, m;
				j = 0;
				k = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N; ++i)
				{
					if (a[i] % 2 == 0)
					{
						++j;
					}
					else
					{
						++k;
					}
				}
				if (j >= k)
				{
					j = 0;
					for (i = 0; i < N; ++i)
					{
						if (a[i] > j)
						{
							j = a[i];
						}
					}
				}
				else 
				{
					j = 0;
					for (i = 0; i < N; ++i)
					{
						if (a[i] > j)
						{
							j = a[i];
						}
					}
				}
				cout << j;
			}

			void ege9660()
			{
				#define N 40 
				
				int a[N];
				int i, j, max;
				max = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N; i++)
				{
					if (a[i] > max&& a[i] > 9 && a[i] < 100 && a[i] % 3 != 0)
					{
						max = a[i];
					}
				}
				cout << max;
			}

			void ege2910()
			{
				// array 10 * 10
			}

			void ege2905()
			{
				#define N 30 
				
				int a[N];
				int i, j, max;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				max = -20;
				for (i = 0; i < N; ++i)
				{
					if (a[i] < 0 && a[i] > max)
					{
						max = a[i];
					}
				}
				cout << max;
			}

			void ege3614()
			{
				#define N 40
				
				int a[N];
				int i, k, max, max2;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				max = INT_MIN;
				max2 = INT_MIN;
				for (i = 0; i < N; ++i)
				{
					if (a[i] > max)
					{
						max2 = max;
						max = a[i];
					}
				}
				cout << max2;
			}

			void ege5501()
			{
				#define N 20
				int a[N];
				int i, j, max;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				max = 0;
				for (i = 0; i < N; ++i)
				{
					if (a[i] > 99 && a[i] < 1000 && a[i] % 5 == 0 && a[i] > max)
					{
						max = a[i];
					}
				}
				cout << max;
			}

			void ege11254()
			{
				#define N 2016
				int a[N];
				int i, m, k;
				m = 1;
				for (i = 0; i > N; ++i)
				{
					cin >> a[i];
				}
				for (i = 0; i < N; ++i)
				{
					m *= a[i];
				}
				if (m % 2 == 0)
				{
					m = 0;
					for (i = 0; i < N; ++i)
					{
						if(a[i] % 2 == 0 && a[i] > m)
						{
							m = a[i];
						}
					}
				}
				else
				{
					m = 0;
					for (i = 0; i < N; ++i)
					{
						if (a[i] % 2 != 0 && a[i] > m)
						{
							m = a[i];
						}
					}
				}
				cout << m;
			}
			
			void ege13421() //the easiest ege number ever!
			{
				#define N 2017
					int a[N];
					int i, m, k;
					for (i = 0; i < N; i++)
						cin >> a[i];
					cout << 0;
			}

			void ege13501()
			{
				// shestnadzatirichnaya system again
			}

			void ege14240()
			{
				// - || -
			}
		}
		// end of ege253 namespace

		namespace ege254
		{
			void ege2918()
			{
				int a[10][10];
				for (int i = 0; i < 10; ++i)
				{
					for (int j = 0; i < 10; ++j)
					{
						cin >> a[i][j];
					}
				}

				int rows[10];
				for (int row = 0; row < 10; ++row)
				{
					int s = 0;
					for (int col = 0; col < 10; ++col)
					{
						s += a[row][col];
					}
					rows[row] = s;
				}

				int cols[10];
				for (int col = 0; col < 10; ++col)
				{
					int s = 0;
					for (int row = 0; row < 10; ++row)
					{
						s += a[row][col];
					}
					cols[col] = s;
				}

				int diagMain = 0;
				int diagSecondary = 0;
				for (int i = 0; i < 10; ++i)
				{
					diagMain += a[i][i];
					diagSecondary += a[i][10 - i - 1];
				}
				if (diagMain != diagSecondary)
				{
					cout << "NO";
					return;
				}
				for (int i = 0; i < 9; ++i)
				{
					if (rows[i] != rows[i + 1])
					{
						cout << "NO";
						return;
					}
				}
				for (int i = 0; i < 9; ++i)
				{
					if (cols[i] != cols[i + 1])
					{
						cout << "NO";
						return;
					}
				}
				if (rows[0] == cols[0] && rows[0] == diagMain)
				{
					cout << "YES";
				}
				else
				{
					cout << "NO";
				}
			}

			/*void ege2932()
			{
				int x = 0;
				int y = 0;
				cin >> x >> y;
				for (int i = 1; i < 9; ++i)
				{
					for (int j = 1; j < 9; ++j)
					{
						if (i == x + 2 && j == y + 1)
						{
							cout << i << " " << j;
						}
						if (i == x + 2 && j == y - 1)
						{
							cout << i << " " << j;
						}
						if (i == x - 2 && j == y + 1)
						{
							cout << i << " " << j;
						}
						if (i == x - 2 && j == y - 1)
						{
							cout << i << " " << j;
						}
						if (j == y + 2 && i == x + 1)
						{
							cout << i << " " << j;
						}
						if (j == y + 2 && i == x - 1)
						{
							cout << i << " " << j;
						}
						if (j == y - 2 && i == x + 1)
						{
							cout << i << " " << j;
						}
						if (j == y - 2 && i == x - 1)
						{
							cout << i << " " << j;
						}
					}
				}
			}*/

			void ege6349()
			{
				#define N 30 
				long a[N];
				long i, j, p;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				j = 1;
				for (i = 0; i < N; ++i)
				{
					if (a[i] > 9 && a[i] < 100 && ((a[i] - (a[i] % 10)) / 10 + (a[i] % 10)) % 2 == 0)
					{
						j *= a[i];
					}
				}
				cout << j;
			}

			void ege4957()
			{
				#define N 70
				long a[N];
				long i, j, x, y;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				x = a[0] - a[1];
				for (i = 0; i < N; ++i)
				{
					for (j = 0; j < N; ++j)
					{
						y = a[i] - a[j];
						if (x > y)
						{
							y = x;
						}
					}
				}
				cout << y;
			}

			void ege5068()
			{
				#define N 70 
				int a[N];
				int i, j, x, y;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				j = INT_MAX;
				for (i = 0; i < N - 1; ++i)
				{
					if ((a[i] + a[i + 1]) % 2 == 0 && (a[i] + a[i + 1]) < j)
					{
						j = a[i] + a[i + 1];
					}
				}
				cout << j;
			}

			void ege6790()
			{
				#define N 2014
				int a[N];
				int i, j, k;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				j = 0;
				for (i = 1; i < N; ++i)
				{
					if (a[i] > (a[i - 1] * 2))
					{
						++j;
					}
				}
				cout << j;
			}

			void ege7426()
			{
				#define N 20
				int a[N];
				int i, j, max;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				max = 0;
				for (i = 0; i < N; ++i)
				{
					if (a[i] > max&& a[i] > 9 && a[i] < 100 && a[i] % (a[i] - a[i] % 10) / 10 != 0)
					{
						max = a[i];
					}
				}
				cout << max;
			}

			void ege6969()
			{
				#define N 2014
				int a[N];
				int i, j, k;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				k = 0;
				for (i = 0; i < N; ++i)
				{
					if ((a[i] + a[N - i - 1]) > 20)
					{
						++k;
					}
				}
				cout << k / 2;
			}

			void ege13752()
			{
                int const n = 30; //not define)(po ysloviu
				long a[n];
				long i, j, k;
				for (i = 0; i < n; i++)
				{
					cin >> a[i];
				}
				k = 0;
				for (i = 0; i < n; ++i)
				{
					if (a[i] > 100 && a[i] % 5 != 0)
					{
						++k;
					}
				}
				for (i = 0; i < n; ++i)
				{
					if (a[i] > 100 && a[i] % 5 != 0)
					{
						a[i] = k;
					}
				}
				for (i = 0; i < n; i++)
				{
					cout << a[i];
				}
			}

			void ege15810()
			{
				const int n = 2018;
				int a[n];
				int i, k, m;
				for (i = 0; i < n; ++i)
				{
					cin >> a[i];
				}
				m = 0;
				for (i = 0; i < n; ++i)
				{
					if (a[i] > 100 && (100 - a[i]) < m)
					{
						m = 100 - a[i];
					}
				}
				for (i = 0; i < n; ++i)
				{
					if (a[i] < 100)
					{
						a[i] += m;
					}
				}
				for (i = 0; i < n; ++i)
				{
					cout << a[i];
				}
			}

			void ege16400()
			{
				const int n = 2018;
				int a[n];
				int i, k, m;
				for (i = 0; i < n; ++i)
				{
					cin >> a[i];
				}
				m = 15001;
				for (i = 0; i < n; ++i)
				{
					if (a[i] < m)
					{
						m = a[i];
					}
				}
				for (i = 0; i < n; ++i)
				{
					if (a[i] > (m * 2))
					{
						a[i] -= m * 2;
					}
				}
				for (i = 0; i < n; ++i)
				{
					cout << a[i] << endl;
				}
			}

			void ege17343()
			{
				const int n = 2019;
				int a[n];
				int i, k, m;
				for (i = 0; i < n; ++i)
				{
					cin >> a[i];
				}
				k = 15001;
				m = 15001;
				for (i = 0; i < n; ++i)
				{
					if (a[i] % 2 == 0 && a[i] < k)
					{
						k = a[i];
					}
					if (a[i] % 2 != 0 && a[i] < m)
					{
						m = a[i];
					}
				}
				m += k;
				for (i = 0; i < n; ++i)
				{
					if (a[i] > m)
					{
						a[i] -= m;
					}
				}
				for (i = 0; i < n; ++i)
				{
					cout << a[i];
				}
			}

			/*void ege18573()
			{
				int const n = 2019;
				int a[n];
				int i, m, k;
				m = -1;
				k = 15001;
				for (i = 0; i < n; ++i)
				{
					cin >> a[i];
					if (a[i] > m)
					{
						m = a[i];
					}
					if (a[i] < k)
					{
						k = a[i];
					}
				}
				if (k == 15001)
				{
					k = 0;
				}
				if (m == -1)
				{
					m = 0;
				}
				m = (m + k) / 2;
				for (i = 0; i < n; ++i)
				{
					if (a[i] > m)
					{
						a[i] -= m;
					}
				}
				for (i = 0; i < n; ++i)
				{
					cout << a[i];
				}
			}*/
		}
		// end of ege254 namespace

		namespace ege255 //1000 strings)
		{
			void ege9706()
			{
				#define N 30
				int a[N];
				int i, j, min;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				min = 10001;
				for (i = 0; i < N; ++i)
				{
					if (a[i] > 99 && a[i] < 1000 && a[i] % 7 == 0)
					{
						min = a[i];
					}
				}
				if (min != 10001)
				{
					cout << min;
				}
				else
				{
					cout << "не найдено";
				}
			}

			void ege3602()
			{
				#define N 50 
				float a[N];
				int i, j;
				for (int i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N; ++i)
				{
					if (a[i] < 0)
					{
						cout << i;
						break;
					}
				}
			}

			void ege4703()
			{
				#define N 70
				int a[N];
				int i, j, m;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				m = INT_MAX;
				for (i = 0; i < N; ++i)
				{
					if (a[i] > 0 && a[i] % 2 != 0 && a[i] < m)
					{
						m = a[i];
					}
				}
				cout << m;
			}

			void ege5373()
			{
				#define N 20
				int a[N];
				int i, j, min;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				min = 1001;
				for (i = 0; i < N; ++i)
				{
					if (a[i] % 3 == 0 && a[i] < min)
					{
						min = a[i];
					}
				}
				if (min != 1001)
				{
					cout << min;
				}
				else
				{
					cout << "не найдено";
				}
			}

			void ege11281()
			{
				#define N 70
				int a[N];
				int i, j, m;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				j = 1;
				m = INT_MAX;
				for (i = 0; i < N; ++i)
				{
					j *= a[i];
				}
				for (i = 0; i < N; ++i)
				{
					if ((a[i] % 2) == (j % 2) && a[i] < m)
					{ 
						m = a[i];
					}
				}
				cout << m;
			}

			void ege18805()
			{
				const int n = 2019;
				int a[n];
				int i, j, k;
				for (i = 0; i < n; ++i)
				{
					cin >> a[i];
				}
				k = 0;
				for (i = 0; i < n; ++i)
				{
					if (a[i] % 4 == 0 && a[i] < k)
					{
						k = a[i];
					}
				}
				for (i = 0; i < n; ++i)
				{
					if (a[i] % 4 == 0)
					{
						a[i] = k;
					}
				}
				for (i = 0; i < n; ++i)
				{
					cout << a[i];
				}
			}
		}
		// end of ege255 namespace
	}
	//end of ege25 namespace

	namespace ege27
	{
		namespace ege271
		{
			void ege7694()
			{
				int n = 0;
				cin >> n;
				int maxOdd = 0;
				int maxEven = 0;
				int R = 0;
				int number = 0;
				bool right1 = false;
				bool right2 = false;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					if (number % 2 == 0 && number > maxEven)
					{
						maxEven = number;
						right1 = true;
					}
					if (number % 2 == 1 && number > maxOdd)
					{
						maxOdd = number;
						right2 = true;
					}
				}
				R = maxOdd + maxEven;
				int control = 0;
				cin >> control;
				if (right1 && right2 && R == control)
				{
					cout << R;
				}
				else
				{
					cout << -1;
				}
			}

			void ege7772()
			{
				int const s = 8;
				int a[s];
				int n = 0;
				cin >> n;
				int max = -1;
				int m = -1;
				int number = 0;
				bool right = false;
				for (int i = 0; i < s; ++i)
				{
					cin >> a[i];
				}
				for (int i = s; i < n; ++i)
				{
					cin >> number;
					if (a[0] > max)
					{
						max = a[0];
					}
					for (int j = 0; j < s - 1; ++j)
					{
						a[j] = a[j + 1];
					}
					a[7] = number;
					if (max * number > m)
					{
						m = max * number;
						right = true;
					}
				}
				if (right)
				{
					cout << m;
				}
			}

			void ege3628()
			{
				int number = 1;
				int t = 0;
				int result = 0;
				int lastNumber = INT_MAX;
				int first = 0;
				int last = 0;
				bool isUp = false;
				while (number != 0)
				{
					cin >> number;
					if (number > lastNumber)
					{
						if (!isUp)
						{
							first = lastNumber;
						}
						isUp = true;
					}
					else
					{
						last = lastNumber;
						if (last - first > result)
						{
							result = last - first;
						}
						isUp = false;
					}
				}
				cout << result;
			}
		}
		//end of ege271 namespace

		namespace ege272
		{
			void ege9777()
			{
				int n = 0;
				cin >> n;
				int maxx = 0;
				int maxy = 0;
				int x = 0;
				int y = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> x >> y;
					if (x == 0 && y != 0 && abs(y) > maxy)
					{
						maxy = abs(y);
						continue;
					}
					if (x != 0 && y == 0 && abs(x) > maxx)
					{
						maxx = abs(x);
						continue;
					}
				}
				if (maxx != 0 && maxy != 0)
				{
					cout << maxx * maxy * 0.5;
				}
				else
				{
					cout << "NO";
				}

			}

			void ege5258()
			{
				int n = 0;
				cin >> n;
				int a[5];
				int x = 0;
				int y = 0;
				int ax = 10000, ay = 10000;
				int r = INT_MAX;
				for (int i = 0; i < 5; ++i)
				{
					a[i] = 0;
				}
				for (int i = 0; i < n; ++i)
				{
					cin >> x >> y;
					if (x > 0 && y < 0)
					{
						++a[4];
						if ((x + abs(y)) < (ax + ay))
						{
							ax = x;
							ay = y;
							if (abs(ax) < r)
							{
								r = ax;
							}
							if (abs(ay) < r)
							{
								r = ay;
							}
						}
					}
					if (x < 0 && y < 0)
					{
						++a[3];
						if ((abs(x) + abs(y)) < (ax + ay))
						{
							ax = x;
							ay = y;
							if (abs(ax) < r)
							{
								r = ax;
							}
							if (abs(ay) < r)
							{
								r = ay;
							}
						}
					}
					if (x < 0 && y > 0)
					{
						++a[2];
						if ((abs(x) + y) < (ax + ay))
						{
							ax = x;
							ay = y;
							if (abs(ax) < r)
							{
								r = ax;
							}
							if (abs(ay) < r)
							{
								r = ay;
							}
						}
					}
					if (x > 0 && y > 0)
					{
						++a[1];
						if ((x + y) < (ax + ay))
						{
							ax = x;
							ay = y;
							if (abs(ax) < r)
							{
								r = ax;
							}
							if (abs(ay) < r)
							{
								r = ay;
							}
						}
					}
				}
				if (a[1] >= a[3] && a[1] >= a[2] && a[1] >= a[4])
				{
					cout << "K = 1" << endl << "M = " << a[4] << endl << "A = (" << ax << ", " << ay << ")" << endl << "R = " << r;
					return;
				}
				if (a[2] >= a[3] && a[2] >= a[4] && a[2] >= a[1])
				{
					cout << "K = 2" << endl << "M = " << a[4] << endl << "A = (" << ax << ", " << ay << ")" << endl << "R = " << r;
					return;
				}
				if (a[3] >= a[4] && a[3] >= a[2] && a[3] >= a[1])
				{
					cout << "K = 3" << endl << "M = " << a[4] << endl << "A = (" << ax << ", " << ay << ")" << endl << "R = " << r;
					return;
				}
				if (a[4] >= a[3] && a[4] >= a[2] && a[4] >= a[1])
				{
					cout << "K = 4" << endl << "M = " << a[4] << endl << "A = (" << ax << ", " << ay << ")" << endl << "R = " << r;
					return;
				}
			}

			#pragma region ege5258
			struct Point
			{
				Point(int x = 0, int y = 0)
				{
					this->x = x;
					this->y = y;
				}
				void print()
				{
					cout << "(" << x << "; " << y << ")";
				}
				int x;
				int y;
			};

			int minABS(Point p)
			{
				if (abs(p.x) < abs(p.y))
				{
					return abs(p.x);
				}
				else
				{
					return abs(p.y);
				}
			}

			int quaterNumber(Point p)
			{
				if (p.x > 0 && p.y > 0)
				{
					return 1;
				}
				if (p.x < 0 && p.y > 0)
				{
					return 2;
				}
				if (p.x < 0 && p.y < 0)
				{
					return 3;
				}
				if (p.x > 0 && p.y < 0)
				{
					return 4;
				}
				return -1;
			}

			void ege5258byVit()
			{
				Point pMinInQuaters[5];
				int maxQuaterAmount = 0;
				int maxQuaterNumber = 5;
				int minDistanceInQuaters[5];
				minDistanceInQuaters[0] = -1;
				for (int i = 1; i < 5; ++i)
				{
					minDistanceInQuaters[i] = INT_MAX;
				}

				int quaterAmounts[5];
				quaterAmounts[0] = -1;
				for (int i = 1; i < 5; ++i)
				{
					quaterAmounts[i] = 0;
				}

				int n = 0;
				cin >> n;
				for (int i = 0; i < n; ++i)
				{
					int x = 0;
					int y = 0;
					cin >> x >> y;
					Point currentPoint(x, y);
					
					int currentQuaterNumber = quaterNumber(currentPoint);
					++quaterAmounts[currentQuaterNumber];

					int currentQuaterAmount = quaterAmounts[currentQuaterNumber];
					int currentDistance = minABS(currentPoint);
					if (currentDistance < minDistanceInQuaters[currentQuaterNumber])
					{
						minDistanceInQuaters[currentQuaterNumber] = currentDistance;
						pMinInQuaters[currentQuaterNumber] = currentPoint;
					}
					if (currentQuaterAmount > maxQuaterAmount)
					{	
						maxQuaterNumber = currentQuaterNumber;
						maxQuaterAmount = currentQuaterAmount;
						continue;
					}
					if (currentQuaterAmount == maxQuaterAmount)
					{
						if (minDistanceInQuaters[currentQuaterNumber] < minDistanceInQuaters[maxQuaterNumber])
						{
							maxQuaterNumber = currentQuaterNumber;
							maxQuaterAmount = currentQuaterAmount;
						}
						if (minDistanceInQuaters[currentQuaterNumber] == minDistanceInQuaters[maxQuaterNumber] && currentQuaterNumber < maxQuaterNumber)
						{
							maxQuaterNumber = currentQuaterNumber;
							maxQuaterAmount = currentQuaterAmount;
						}
					}
				}

				pMinInQuaters[maxQuaterNumber].print();
				cout << endl << maxQuaterNumber;
				cout << endl << maxQuaterAmount;
				cout << endl << minDistanceInQuaters[maxQuaterNumber];
			}
			#pragma endregion

			void ege5375()
			{
				int n = 0;
				cin >> n;
				if (n < 3)
				{
					return;
				}
				int minus = 0;
				int zero = 0;
				bool minus1 = false;
				bool even = true;
				int min = INT_MIN;
				int k = 0;
				int l = 0;
				for (int i = 1; i <= n; ++i)
				{
					int number = 0;
					cin >> number;
					if (number == 0)
					{
						k = i;
					}
					if (number < 0)
					{
						if (number > min)
						{
							min = number;
							l = i;
						}
						if (even == true)
						{
							even = false;
						}
						else
						{
							even = true;
						}
					}
					
				}
				if (even == true)
				{
					for (int i = 0;i <= n; ++i)
					{
						if (i != k)
						{
							cout << i << " ";
						}
					}
				}
				else
				{
					for (int i = 1; i <= n; ++i)
					{
						if (i != k && i != l)
						{
							cout << i << " ";
						}
					}
				}
			}

			void ege5471()
			{
				int n;
				cin >> n;
				if (n < 3)
				{
					return;
				}
				int zeroIndex = 0;
				int oddAmount = 0;
				int minOdd = INT_MAX;
				int minOddIndex = -1;
				for (int i = 1; i <= n; ++i)
				{
					int number = 0;
					cin >> number;
					if (number == 0)
					{
						zeroIndex = i;
					}
					if (number % 2 == 1)
					{
						++oddAmount;
						if (number < minOdd)
						{
							minOdd = number;
							minOddIndex = i;
						}
					}
				}
				if (oddAmount % 2 == 1)
				{
					for (int i = 1; i <= n; ++i)
					{
						if (i != zeroIndex)
						{
							cout << i << " ";
						}
					}
				}
				else
				{
					for (int i = 1; i <= n; ++i)
					{
						if (i != zeroIndex && i != minOddIndex)
						{
							cout << i << " ";
						}
					}
				}
			}

			void ege5631()
			{
				int n = 0;
				cin >> n;
				float number;
				bool notOnlyOne = false;
				float max = 0;
				int maxIndex;
				for (int i = 1; i <= n; ++i)
				{
					cin >> number;
					if (number > 1.0 && notOnlyOne != true)
					{
						notOnlyOne = true;
						continue;
					}
					if (number > 1.0 && notOnlyOne == true)
					{
						cout << i << " ";
					}
					if (number <= 1.0)
					{
						if (number > max)
						{
							max = number;
							maxIndex = i;
						}
					}
				}
				if (notOnlyOne != true)
				{
					cout << maxIndex;
				}
			}

			void ege6279()
			{
				int n = 0;
				cin >> n;
				int x = 0;
				int y = 0;
				int minx = INT_MAX;
				int miny = INT_MAX;
				int maxx = INT_MIN;
				int maxy = INT_MIN;
				int k1 = 0;
				int k2 = 0;
				int k3 = 0;
				int k4 = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> x >> y;
					if (x == 0 && y > maxy && y >= 0)
					{
						maxy = y;
						++k1;
					}
					if (x == 0 && y < miny && y <= 0)
					{
						miny = y;
						++k2;
					}
					if (x > maxx && x >= 0)
					{
						maxx = x;
						++k3;
					}
					if (x < minx && x <= 0)
					{
						minx = x;
						++k4;
					}
				}
				if (k1 * k2 * k3 * k4 == 0)
				{
					cout << 0;
					return;
				} 
				cout << 0.5 * ((maxy + abs(miny)) * (maxx + abs(minx)));
			}

			void ege10303()
			{
				int n = 0;
				cin >> n;
				int x = 0;
				int y = 0;
				int max1 = INT_MIN;
				int max2 = INT_MIN;
				bool a[2];
				for (int i = 0; i < 2; ++i)
				{
					a[i] = false;
				}
				for (int i = 0; i < n; ++i)
				{
					cin >> x >> y;
					if (x == y)
					{
						if (abs(x) > max1)
						{
							max1 = abs(x);
							a[0] = true;
						}
					}
					if (y == -x)
					{
						if (abs(x) > max2)
						{
							max2 = abs(x);
							a[1] = true;
						}
					}
				}
				for (int i = 0; i <= 1; ++i)
				{
					if (a[i] == false)
					{
						cout << 0;
						return;
					}
				}
				cout << max1 * max2;
				return;
			}

			void ege10428()
			{
				int n = 0;
				cin >> n;
				int x = 0;
				int y = 0;
				int quater[5];
				for (int i = 1; i <= 4; ++i)
				{
					quater[i] = 0;
				}
				for (int i = 0; i < n; ++i)
				{
					cin >> x >> y;
					if (x > 0 && y > 0)
					{
						++quater[1];
					}
					if (x < 0 && y > 0)
					{
						++quater[2];
					}
					if (x < 0 && y < 0)
					{
						++quater[3];
					}
					if (x > 0 && y < 0)
					{
						++quater[4];
					}
				}
				cout << quater[1] * quater[3] + quater[2] * quater[4];
			}

			void ege10490()
			{
				int const s = 15;
				int n = 0;
				cin >> n;
				int minOdd = 1001;
				int minEven = 1001;
				int number = 0;
				int a[s];
				int min = INT_MAX;
				bool flag = false;
				for (int i = 0; i < s; ++i)
				{
					cin >> number;
					a[i] = number;
				}
				myArray::arrayOut(a, s);
				for (int i = s; i < n; ++i)
				{
					cin >> number;
					if (a[0] < minOdd && a[0] % 2 == 1)
					{
						minOdd = a[0];
					}
					if (a[0] < minEven && a[0] % 2 == 0)
					{
						minEven = a[0];
					}
					for (int j = 0; j < 14; ++j)
					{
						a[j] = a[j + 1];
					}
					a[14] = number;
					if (number % 2 == 0)
					{
						if (number * minOdd < min)
						{
							min = number * minOdd;
							flag = true;
						}
						if (number * minEven < min)
						{
							min = number * minEven;
							flag = true;
						}
					}
					else
					{
						if (number * minEven < min)
						{
							min = number * minEven;
							flag = true;
						}
					}
					cout << "iteration: " << i << endl;
					myArray::arrayOut(a, s);
					cout << "minEven = " << minEven << endl << "minOdd = " << minOdd;
					cout << endl << "min = " << min << endl;
				}
				if (flag)
				{ 
					cout << min;
				}
				else
				{
					cout << -1;
				}
			}

			void ege11256()
			{
				int n = 0;
				cin >> n;
				int quater[4] = {0, 0, 0, 0};
				bool flag[4] = { false, false, false, false };
				int x = 0;
				int y = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> x >> y;
					if (x > 0 && y > 0)
					{
						++quater[0];
					}
					if (x < 0 && y > 0)
					{
						++quater[1];
					}
					if (x < 0 && y < 0)
					{
						++quater[2];
					}
					if (x > 0 && y < 0)
					{
						++quater[3];
					}
				}
				cout << quater[0] * quater[1] * (quater[0] + quater[1] - 2)/ 2 + quater[2] * quater[3] * (quater[2] + quater[3] - 2) / 2;
			}

			void ege11323()
			{
				int n = 0;
				cin >> n;
				int a = 0;
				int b = 0;
				int minSubtractNotDividedBy6 = 10001;
				int sumOfMin = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> a >> b;
					a < b ? sumOfMin += a : sumOfMin += b; // тринарный оператор
					int currentSubtract = abs(a - b);
					if (currentSubtract < minSubtractNotDividedBy6 && currentSubtract % 6 != 0)
					{
						minSubtractNotDividedBy6 = currentSubtract;
					}
				}
				if (sumOfMin % 3 != 0)
				{
					cout << sumOfMin;
					return;
				}
				if (minSubtractNotDividedBy6 == 10001)
				{
					cout << 0;
					return;
				}
				cout << sumOfMin + minSubtractNotDividedBy6;
			}

			void ege11336()
			{
				int const s = 6;
				int n = 0;
				cin >> n;
				int number = 0;
				int a[s];
				int min = 1000;
				int minMultip = INT_MAX;
				for (int i = 0; i < s; ++i)
				{
					cin >> a[i];
				}
				for (int i = s; i < n; ++i)
				{
					cin >> number;
					if (a[0] < min)
					{
						min = a[0];
					}
					for (int j = 0; j < 5; ++j)
					{
						a[j] = a[j + 1];
					}
					a[5] = number;
					if (min * number < minMultip)
					{
						minMultip = min * number;
					}
				}
				cout << minMultip;
			}
		}
		//end of ege272 namespace

		namespace ege273
		{
			void ege4862()
			{
				int n = 0;
				cin >> n;
				int x = 0;
				int y = 0;
				int a[6] = { 1000, -1000, 1000, -1000, 0, 0};
				for (int i = 0; i < n; ++i)
				{
					cin >> x >> y;
					if (x == 0)
					{
						if (y > 0)
						{
							if (y > a[1])
							{
								a[1] = y;
							}
							if (y < a[0])
							{
								a[0] = y;
							}
						}
						if (y < 0)
						{
							if (y > a[3])
							{
								a[3] = y;
							}
							if (y < a[2])
							{
								a[2] = y;
							}
						}
					}
					if (y > 0)
					{
						if (abs(x) > a[4])
						{
							a[4] = abs(x);
						}
					}
					if (y < 0)
					{
						if (abs(x) > a[5])
						{
							a[5] = abs(x);
						}
					}
				}
				if ((abs(a[1]) - abs(a[0])) * a[4] > (abs(a[3]) - abs(a[2])) * a[5])
				{
					cout << (a[1] - a[0]) * a[4] * 0.5;
				}
				else
				{
					cout << (abs(a[3]) - abs(a[2])) * a[5] * 0.5;
				}
			}

			void ege6436()
			{
				int a[16];
				int number = 0;
				int n = 0;
				cin >> n;
				for (int i = 0; i < 16; ++i)
				{
					a[i] = 0;
				}
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					++a[number - 1];
				}
				int t = 0;
				for (int i = 0; i < 16; ++i)
				{
					if (a[i] != 0)
					{
						++t;
					}
				}
				int max = 0;
				int index = 0;
				for (int i = 0; i < t; ++i)
				{
					for (int j = i; j < 16; ++j)
					{
						if (a[j] > max)
						{
							max = a[j];
							index = j;
						}
					}
					cout << index + 1 << " " << max << endl;
					a[index] = a[i];
					a[i] = max;
					max = 0;
				}
			}

			void ege7321()
			{
				int n = 0;
				cin >> n;
				int m = 0;
				cin >> m;
				int a = 0;
				int b = 0;
				int x = 0;
				int y = 0;
				int y1 = 0;
				int y2 = 0;
				for (int i = 0; i < n;++i)
				{
					cin >> a >> b;
					x = x + a;
					y1 = y + b;
					y2 = x + m;
					if (y1 < y2)
					{
						y = y1;
					}
					else
					{
						y = y2;
					}
				}
				x >= y ? cout << y : cout << x;
			}

			void ege3130()
			{
				int a[100];
				int n = 0;
				cin >> n;
				int number;
				int negative = 0;
				int positive = 0;
				for (int i = 0; i < n; ++i)
				{
					a[i] = 0;
				}
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					if (number < 0)
					{
						a[negative] = number;
						++negative;
					}
					if (number > 0)
					{
						a[n - positive] = number;
						++positive;
					}
				}
				for (int i = 0; i < n; ++i)
				{
					if (a[i] != 0)
					{
						cout << a[i];
					}
				}
			}
		}
		//end of ege273 namespace

		namespace ege274
		{
			void ege11363()
			{
				int n = 0;
				cin >> n;
				int a = 0;
				int b = 0;
				int minSubtractNotDividedBy3 = 10001;
				int sumOfMax = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> a >> b;
					a > b ? sumOfMax += a : sumOfMax += b; // тринарный оператор
					int min = abs(a - b);
					if (min < minSubtractNotDividedBy3 && min % 3 != 0)
					{
						minSubtractNotDividedBy3 = min;
					}
				}
				if (sumOfMax % 3 != 0)
				{
					cout << sumOfMax;
				}
				else
				{
					if (minSubtractNotDividedBy3 == 10001)
					{
						cout << 0;
					}
					else
					{
						cout << sumOfMax - minSubtractNotDividedBy3;
					}
				}
			}

			void ege13423()
			{
				int n = 0;
				cin >> n;
				int a[28];
				for (int i = 0; i < 28; ++i)
				{
					a[i] = 0;
				}
				int number = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					int sum = number % 10 + (number / 10) % 10 + ((number / 10) / 10) % 10;
					++a[sum];
				}
				int result = 0;
				int sumOfDigit = 0;
				for (int i = 0; i < 28; ++i)
				{
					if (a[i] > result)
					{
						result = a[i];
						sumOfDigit = i;
					}
				}
				cout << sumOfDigit;
			}

			void ege13503()
			{
				int n = 0;
				cin >> n;
				int a[10];
				for (int i = 0; i < 10; ++i)
				{
					a[i] = 0;
				}
				int number = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					while (number < 10)
					{
						++a[number % 10];
						number /= 10;
					}
					++a[number];
				}
				int digitFrequency = 0;
				for (int i = 0; i < 10; ++i)
				{
					if (a[i] >= digitFrequency)
					{
						digitFrequency = a[i];
					}
				}
				for (int i = 10; i >= 0; i--)
				{
					if (a[i] = digitFrequency)
					{
						cout << i;
					}
				}
			}

			void ege13557()
			{
				int n = 0;
				cin >> n;
				int number = 0;
				int sum = 0;
				int min = INT_MAX;
				bool flag = true;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					sum += number;
					if (number < min && number % 6 != 0)
					{
						min = number;
						flag = false;
					}
				}
				if (sum % 6 != 0)
				{
					cout << n << " " << sum;
				}
				else
				{
					if (flag)
					{
						cout << 0 << " " << 0;
					}
					else
					{
						cout << n - 1 << " " << sum - min;
					}
				}
			}

			void ege13611()
			{
				int n = 0;
				cin >> n;
				int a[10];
				for (int i = 0; i < 10; ++i)
				{
					a[i] = 0;
				}
				int number = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					int length = 0;
					while (number != 0)
					{
						++length;
						number /= 10;
					}
					++a[length];
				}
				int lengthFrequency = 0;
				for (int i = 0; i < 10; ++i)
				{
					if (a[i] >= lengthFrequency)
					{
						lengthFrequency = a[i];
					}
				}
				for (int i = 9; i >= 0; --i)
				{
					if (a[i] == lengthFrequency)
					{
						cout << i << " " << lengthFrequency;
						return;
					}
				}
			}

			void ege13754()
			{
				int n = 0;
				cin >> n;
				int number = 0;
				int n2 = 0;
				int n13 = 0;
				int n26 = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					if (number % 2 == 0 && number % 13 != 0)
					{
						++n2;
					}
					if (number % 2 != 0 && number % 13 == 0)
					{
						++n13;
					}
					if (number % 2 == 0 && number % 13 == 0)
					{
						++n26;
					}
				}
				int result = 0;
				result = n2 * n13 + n26 * (n - n26) + (n26 * (n26 - 1)) / 2;
				cout << result;
			}

			void ege15995()
			{
				int count = 0;
				int const n = 5;
				int a[n];
				int number = 0;
				cin >> count;
				int multiple = 0;
				int unMultiple = 0;
				int result = 0;
				
				for (int j = 0; j < n; ++j)
				{
					cin >> number;
					a[j] = number;
				}
				for (int j = n; j < count; ++j)
				{
					cin >> number;
					if (a[j % n] % 13 == 0)
					{
						++multiple;
					}
					else
					{
						++unMultiple;
					}
					if (number % 13 == 0)
					{
						result += multiple + unMultiple;
					}
					else
					{
						result += multiple;
					}
				}
				cout << result;
			}

			void ege18729()
			{
				int n = 0;
				cin >> n;
				int a[117];
				int max2 = 0;
				a[0] = 0;
				for (int i = 1; i < 117; ++i)
				{
					a[i] = 0;
				}
				for (int i = 0; i < n; ++i)
				{
					int number = 0;
					cin >> number;
					if (number % 117 != 0)
					{
						if (number > a[number % 117])
						{
							a[number % 117] = number;
						}
					}
					else
					{
						if (number > max2 && number <= a[0])
						{
							max2 = number;
						}
						if (number > a[0])
						{
							max2 = a[0];
							a[0] = number;
						}
					}
				}
				int maxSum = 0;
				int index = 0;
				for (int i = 1; i < 117; ++i)
				{
					if (((a[i] + a[117 - i]) % 117 == 0) && (a[i] + a[117 - i] > maxSum))
					{
						maxSum = a[i] + a[117 - i];
						index = i;
					}
				}
				if (a[0] + max2 > maxSum)
				{
					maxSum = a[0] + max2;
					cout << a[0] << " " << max2;
					return;
				}
				if (maxSum != 0)
				{
					cout << a[index] << " " << a[117 - index];
				}
				else
				{
					cout << "NO";
				}
			}

			void ege14286()
			{
				int n = 0;
				cin >> n;
				int a[19];
				for (int i = 0; i < 19; ++i)
				{
					a[i] = 0;
				}
				for (int i = 0; i < n; ++i)
				{
					int number = 0;
					cin >> number;
					++a[(number % 100) % 10 + ((number % 100) - (number % 100) % 10) / 10];
				}
				int rerealest = n;
				for (int i = 0; i < 19; ++i)
				{
					if (a[i] != 0 && a[i] < rerealest)
					{
						rerealest = a[i];
					}
				}
				cout << rerealest;
			}

			void ege15964()
			{
				int n = 0;
				cin >> n;
				int max = 0;
				int secondMax = 0;
				for (int i = 0; i < n; ++i)
				{
					int number = 0;
					cin >> number;
					if (number > max && (number % 2) != (max % 2) && number % 5 == 0 || max % 5 == 0)
					{
						secondMax = max;
						max = number;
					}
				}
				cout << max * secondMax;
			}
		}
		// end of ege274 namespace
	}
	// end of ege27 namespace
}
// end of ege namespace