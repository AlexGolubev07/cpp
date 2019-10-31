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
		}
	}
}