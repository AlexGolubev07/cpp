#include <iostream>

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
						if (((a[i + 1] - a[i]) + (a[i - 1] - a[i])) > j)
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
				#define N 40 
				
				int a[N]; 
				int i, l, lmax, s, smax;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				lmax = 0;
				smax = 0;
				s = 0;
				for (i = 0; i < N - 1; ++i)
				{
					if (a[i] < a[i + 1])
					{
						++smax;
					}
					else
					{
						++smax;
						if (smax > lmax)
						{
							lmax = smax;
							l = i;
						}
						smax = 0;
					}
				}
				for (i = 0; i < lmax - 1; ++i)
				{
					s += a[l - i];
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
	}
}