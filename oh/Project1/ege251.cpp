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
				int l = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i] + a[i + 1];
					k = a[i] * a[i + 1];
					if (k % 2 = 0 && j % 7 = 0)
					{
						++l;
					}
				}
				cout << l;
			}

			void ege8113()
			{
				#define N 20
				
				int a[N];
				int i, j, k;
				int result;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i];
					k = a[i + 1];
					if (j % 3 = 0 && k % 3 = 0)
					{
						++result;
					}
				}
				cout << result;
			}

			void ege8763()
			{
				#define N 40
				
				long a[N];
				long i, j, k;
				int result = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i] + a[i + 1];
					k = a[i] * a[i + 1];
					if (j % 2 = 0 && k > 100)
					{
						++result;
					}
				}
				cout << result;
			}

			void ege9376()
			{
				#define N 20
				
				int a[N];
				int i, j, k;
				int result;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i];
					k = a[i + 1];
					if (j % 3 = 0 || k % 3 = 0)
					{
						++result;
					}
				}
				cout << result;
			}

			void ege6936()
			{

				#define N 2014

				float a[N];
				float d, r;
				int i, j, k;
				int result1;
				int result2;
				int number1;
				int number2;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				i = 0;
				j = a[i];
				k = a[i + 1];
				if (j > k)
				{
					result1 = j - k;
				}
				else
				{
					result1 = k - j;
				}
				for (i = 1; i < N - 1; ++i)
				{
					result2 = result1;
					j = a[i];
					k = a[i + 1];
					if (j > k)
					{
						result1 = j - k;
					}
					else
					{
						result1 = k - j;
					}
					if (result1 > result2)
					{

					}
					else
					{
						result1 = result2;
						number1 = j;
						number2 = k;
					}
				}
				cout << number1 << number2;
			}

			void ege11126()
			{
				#define N 50
				
				int a[N];
				int i, j, k;
				int result = 0;
				for (i = 0; i < N; i++)
				{
					cin >> a[i];
				}
				for (i = 0; i < N - 1; ++i)
				{
					j = a[i];
					k = a[i + 1];
					if (j > 9 && k > 9)
					{
						++result;
					}
				}
				cout << result;
			}
		}
	}
}