#include <iostream>
#include <cassert>
#include "windows.h"

using namespace std;

namespace olimpic8
{
	int oleja(int t, int d, int p)
	{
		assert(p % d == 0);

		if (p < 1)
			return -1;

		for (int i = 0; i < t; ++i)
		{
			if ((t - i) * d + i * d * 2 == p)
				return i;
		}
		return oleja(t, d, p - t * d);
	}

	int taskB()
	{
		int m = 0;
		cin >> m;
		float n = 0;
		int res = 0;
		for (int i = 0; i < m; ++i)
		{
			cin >> n;
			if (n > 850 && n <= 1400)
				++res;
			if (n > 1400 && n <= 1950)
				res += 2;
			if (n > 1950 && n <= 2500)
				res += 3;
			if (n > 2500 && n <= 3050)
				res += 4;
			if (n > 3050 && n <= 3600)
				res += 5;
			if (n > 3600)
				res += 6;
		}
		return res;
	} 

	int tea(int a, int b, int c, int d, int n)
	{
		int days = n * 7;
		int res = 0;
		while (days > (a + b))
		{
			res += a * c;
			res += b * d;
			days -= (a + b);
		}
		if (days <= a)
			return res + days * c;
		return res + a * c + (days - a) * d;
	}

	int concert()
	{
		int strings[6];
		for (int i = 0; i < 6; ++i)
			cin >> strings[i];
		int n;
		cin >> n;
		int number = 0;
		bool end = false;
		int res = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> number;
			--strings[number - 1];
			if (strings[number - 1] == 0 && end == false)
			{
				end = true;
				res = number;
			}
		}

		if (end == true)
		{
			cout << "NO" << " " << res;
			return res;
		}
		res = INT_MAX;
		for (int i = 0; i < 6; ++i)
		{
			if (strings[i] < res)
				res = strings[i];
		}
		cout << "YES" << " " << res;
		return res;
	}

	int yearCount(int a, int n)
	{
		if (a > 0 && n < 0 && (a + n) < 0)
		{
			return a + n - 1;
		}
		if (a < 0 && n > 0 && (a + n) > 0)
		{
			return a + n + 1;
		}
		return a + n;
	}

	int flashLigths(int a, int b, int c)
	{
		int res = 0;
		while (a != 0 && b != 0 && c != 0)
		{
			res += 3;
			a--;
			b--;
			c--;
			if (b != 0)
			{
				b--;
				++res;
			}
		}
		return res;
	}

	int repair()
	{
		int l = 0;
		cin >> l;
		int m;
		cin >> m;
		int n = 0;
		bool* fence = new bool[m];
		for (int i = 0; i < m; ++i)
		{
			cin >> n;
			if (n == 0)
				fence[i] = false;
			if (n == 1)
				fence[i] = true;
		}

		int res = 0;

		for (int i = 0; i < m; ++i)
		{
			if (fence[i] == true)
			{
				++res;
				i += l - 1;
			}
		}
		delete[] fence;
		return res + 1;
	}

	int hill()
	{
		int n = 0;
		cin >> n;
		int high = 0;
		int start = 0;
		int end = 0;
		int cstart = 0;
		int cend = 0;
		int* attraction = new int[n];
		int minLength = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			cin >> attraction[i];
		}

		bool* check = new bool[n];
		for (int i = 1; i < n; ++i)
		{
			if (attraction[i] > attraction[i - 1])
			{
				check[i] = false;
			}
			else
			{
				check[i] = true;
			}
		}

		bool ok = false;
		for (int i = 1; i < n; ++i)
		{
			if (check[i] != check[i - 1])
				ok = true;
		}

		if (ok == false)
		{
			cout << 0;
			return 0;
		}

		for (int i = 1; i < n - 1; ++i)
		{
			if (attraction[i - 1] < attraction[i] && attraction[i + 1] < attraction[i])
			{
				cout << i - 1 << " " << i + 1;
				return 0;
			}
			if (attraction[i - 1] < attraction[i])
			{
				cstart = i - 1;
				while (attraction[i + 1] == attraction[i])
					++i;
				if (i == n)
				{
					cout << 0;
					return 0;
				}

				if (attraction[i + 1] < attraction[i])
				{
					cend = i + 1;
					if (cstart - cend != 0)
					{
						if ((end - start) < minLength)
						{
							minLength = end - start;
							start = cstart;
							end = cend;
						}
					}
				}
			}
		}
		cout << start + 1 << " " << end + 1;
		delete[] attraction;
		delete[] check;
		return 0;
	}

	int numbers(int a, int b)
	{
		int res = 0;
		for (int i = a; i < b + 1; ++i)
		{
			int sum = 0;
			int n = i;
			while (n != 0)
			{
				sum += n % 10;
				n /= 10;
			}

			if (sum % 2 == 1)
				++res;
		}
		return res;
	}
}

namespace allRus
{
	int to_int(char first)
	{
		if (first == '0')
			return 0;
		if (first == '1')
			return 1;
		if (first == '2')
			return 2;
		if (first == '3')
			return 3;
		if (first == '4')
			return 4;
		if (first == '5')
			return 5;
		if (first == '6')
			return 6;
		if (first == '7')
			return 7;
		if (first == '8')
			return 8;
		if (first == '9')
			return 9;
	}

	int to_int(char firstCh, char secondCh, bool firstm, bool secondm)
	{
		int first = to_int(firstCh);
		int second = to_int(secondCh);
		if (firstm && !secondm)
			return -first + second;
		if (!firstm && secondm)
		{
			if (first >= second)
				return first - second;
			return -(10 - abs(first - second));
		}
		if (firstm && secondm)
			return -first - second;
		return first + second;
	}

	string to_string(int n)
	{
		if (n == 0)
			return "0";
		if (n == 1)
			return "1";
		if (n == 2)
			return "2";
		if (n == 3)
			return "3";
		if (n == 4)
			return "4";
		if (n == 5)
			return "5";
		if (n == 6)
			return "6";
		if (n == 7)
			return "7";
		if (n == 8)
			return "8";
		if (n == 9)
			return "9";
	}

	string sumOfTwoPositivå(string const& firstf, string const& seconds)
	{
		string first = firstf;
		string second = seconds;
		int const length = first.length() > second.length() ? first.length() : second.length();

		if (first.length() == length)
			second = string(length - second.length(), '0') + second;
		else
			first = string(length - first.length(), '0') + first;

		string res = "";
		int one = 0;
		for (int i = length - 1; i >= 0; --i)
		{
			int sum = to_int(first[i], second[i], false, false);
			res = to_string((sum + one) % 10) + res;
			if ((sum + one) >= 10)
				one = 1;
			if ((sum + one) < 10)
				one = 0;
			if (i == 0 && one == 1)
				res = string(1, '1') + res;
		}

		return res;
	}

	string subtractOfTwoPositive(string const& firstf, string const& seconds, bool secondAttemp = false)
	{
		if (firstf == seconds)
			return "0";
		if(seconds.length() > firstf.length())
			return "-" + subtractOfTwoPositive(seconds, firstf, true);
		if (secondAttemp == false && firstf.length() == seconds.length())
		{
			for (int i = 0; i < firstf.length(); ++i)
			{
				if (to_int(firstf[i]) < to_int(seconds[i]))
					return "-" + subtractOfTwoPositive(seconds, firstf, true);
			}
		}
		
		int length = firstf.length() > seconds.length() ? firstf.length() : seconds.length();
		int one = 0;
		string first = firstf;
		string second = seconds;
		string res = "";

		if (first.length() == length)
			second = string(length - second.length(), '0') + second;
		else
			first = string(length - first.length(), '0') + first;

		for (int i = length - 1; i >= 0; --i)
		{
			int sum = to_int(first[i], second[i], false, true);
			if(i == 0 && first.length() == second.length() + 1)
				sum += 10;
			if(sum != one)
				res = to_string(abs((sum + one)) % 10) + res;
			else
				res = "0" + res;
			if ((sum + one) >= 0)
				one = 0;
			if ((sum + one) < 0)
				one = -1;
			if (i == 0 && one == -1)
				res = "1" + res;
		}
		while (res[0] == '0')
			res.erase(0, 1);
		return res;
	}

	string task2(string const& first, string const& second)
	{
		string positiveFirst = first;
		string positiveSecond = second;

		if (first[0] == '-')
			positiveFirst = string(first, 1, first.length());
		if (second[0] == '-')
			positiveSecond = string(second, 1, second.length());

		if (first[0] != '-' && second[0] != '-')
			return sumOfTwoPositivå(positiveFirst, positiveSecond);

		if (first[0] == '-' && second[0] == '-')
			return "-" + sumOfTwoPositivå(positiveFirst, positiveSecond);

		if (first[0] != '-' && second[0] == '-')
			return subtractOfTwoPositive(positiveFirst, positiveSecond);

		if (first[0] == '-' && second[0] != '-')
			return subtractOfTwoPositive(positiveSecond, positiveFirst);
	}

	void out(int max, int current)
	{
		if (current == max)
			return;
		int n = 0;
		cin >> n;
		out(max, current + 1);
		cout << n << " ";
	}

	void print()
	{
		int n;
		cin >> n;
		out(n, 0);
	}

	void binaryFinding()
	{
		int n = 0;
		cin >> n;

		int left = 0;
		int right = pow(10, 9);

		while (true)
		{
			int mid = left + (right - left) / 2;

			cout << mid << " ";
			if (mid == n)
			{
				cout << 0;
				return;
			}

			if (mid > n)
			{
				cout << -1;
				right = mid;
			}
			else
			{
				left = mid + 1;
				cout << 1;
			}

			cout << endl;
		}
	}
}

#include <string>
using namespace std;

int main()
{
	cout << allRus::task2("-99", "100");
	return 0;
}