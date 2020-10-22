#include "lessons.h"

char toString(int n)
{
	if (n == 0)
		return '0';
	string res = "";
	while (n > 0)
	{
		if ((n % 10) == 0)
			res = "0" + res;
		if ((n % 10) == 1)
			res = "1" + res;
		if ((n % 10) == 2)
			res = "2" + res;
		if ((n % 10) == 3)
			res = "3" + res;
		if ((n % 10) == 4)
			res = "4" + res;
		if ((n % 10) == 5)
			res = "5" + res;
		if ((n % 10) == 6)
			res = "6" + res;
		if ((n % 10) == 7)
			res = "7" + res;
		if ((n % 10) == 8)
			res = "8" + res;
		if ((n % 10) == 9)
			res = "9" + res;
		n /= 10;
	}
	if (n < 0)
		res = "-" + res;
	return res[0];
}

namespace lesson2
{
	void first()
	{
		int n = 0;
		cin >> n;
		int* array = new int[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> array[i];
		}

		int index = 0;
		int max = INT_MIN;

		int c = n;
		while (c != 1)
		{
			max = array[c - 1];
			index = c - 1;
			for (int i = 0; i < c; ++i)
			{
				if (array[i] > max)
				{
					max = array[i];
					index = i;
				}
			}

			int help = array[c - 1];
			array[c - 1] = max;
			array[index] = help;
			c--;
		}

		for (int i = 0; i < n; ++i)
		{
			cout << array[i] << " ";
		}
	}

	void hardest()
	{
		int n = 0;
		int t = 0;
		cin >> n >> t;
		double* a = new double[n];
		double* b = new double[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i] >> b[i];
		}

		int res = 2;
		for (int i = 1; i < n; ++i)
		{
			if (a[i] - b[i] / 2 > a[i - 1] + b[i - 1] / 2 + t)
				res += 2;
			if (a[i] - b[i] / 2 == a[i - 1] + b[i - 1] / 2 + t)
				++res;
		}
		cout << res;
		return;
	}

	void robber()
	{
		int n = 0;
		int m = 0;
		cin >> n >> m;
		int* a = new int[m];
		int* b = new int[m];
		int max = 0;
		int mi = 0;

		for (int i = 0; i < m; ++i)
		{
			cin >> a[i] >> b[i];
			if (b[i] > max)
			{
				max = b[i];
				mi = i;
			}
		}

		if (a[mi] >= n)
		{
			cout << max * n;
			return;
		}

		int res = max * a[mi];
		n -= a[mi];
		a[mi] = 0;

		bool cycled = false;
		while (n != 0)
		{
			cycled = true;
			int max = 0;
			int mi = 0;
			for (int i = 0; i < m; ++i)
			{
				if (a[i] != 0 && b[i] > max)
				{
					max = b[i];
					mi = i;
					cycled = false;
				}
			}

			if (cycled)
			{
				cout << res;
				return;
			}

			if (a[mi] >= n)
			{
				cout << res + max * n;
				return;
			}
			else
			{
				res += max * a[mi];
				n -= a[mi];
				a[mi] = 0;
			}
		}
		cout << res;
		return;
	}

	void newYear()
	{
		string n1 = "";
		string n2 = "";
		string letters = "";
		cin >> n1 >> n2 >> letters;

		int l = letters.length();
		int l1 = n1.length();
		int l2 = n2.length();
		bool able = true;
		if (l1 > l || l2 > l)
			able = false;

		for (int i = 0; i < l1; ++i)
		{
			for (int j = 0; j < l; ++j)
			{
				if (n1[i] == letters[j])
				{
					letters[j] = '\0';
					break;
				}
				if (j == l - 1)
					able = false;
			}
		}

		for (int i = 0; i < l2; ++i)
		{
			for (int j = 0; j < l; ++j)
			{
				if (n2[i] == letters[j])
				{
					letters[j] = '\0';
					break;
				}
				if (j == l - 1)
					able = false;
			}
		}

		for (int i = 0; i < l; ++i)
		{
			if (letters[i] != '\0')
				able = false;
		}

		if (able)
		{
			cout << "YES";
			return;
		}

		cout << "NO";
	}

	void gerasim()
	{
		int n = 0;
		cin >> n;
		int* array = new int[n];
		int sum = 0;
		bool excelent = true;
		bool able = true;
		int last = 0;
		cin >> last;
		sum = last;
		array[0] = last;
		int bottles[2];
		int cur = 0;
		for (int i = 1; i < n; ++i)
		{
			cin >> array[i];
			sum += array[i];
			if (last != array[i])
			{
				excelent = false;
			}
			last = array[i];
		}

		if (sum % n != 0 || !able)
		{
			cout << "Unrecoverable configuration.";
			return;
		}

		int sr = sum / n;
		for (int i = 0; i < n; ++i)
		{
			if (array[i] != sr)
			{
				bottles[cur] = i;
				++cur;
			}
		}

		if (cur >= 3)
		{
			cout << "Unrecoverable configuration.";
			return;
		}

		if (excelent)
		{
			cout << "Exemplary pages.";
			return;
		}

		if (array[bottles[0]] > array[bottles[1]])
		{
			if (array[bottles[0]] - sum / n == sum / n - array[bottles[1]])
			{
				cout << array[bottles[0]] - sum / n << " ml. from cup #" << bottles[1] + 1 << " to cup #" << bottles[0] + 1;
				return;
			}
			else
			{
				cout << "Unrecoverable configuration.";
				return;
			}
		}

		if (array[bottles[0]] - sum / n == sum / n - array[bottles[1]])
		{
			cout << array[bottles[1]] - sum / n << " ml. from cup #" << bottles[0] + 1 << " to cup #" << bottles[1] + 1;
		}
		else
		{
			cout << "Unrecoverable configuration.";
			return;
		}
	}

	void last()
	{
		int n = 0;
		cin >> n;

		char letter = ' ';
		char ll = ' ';

		bool able = false;

		string ans = "";

		cin >> ll;
		for (int i = 0; i < n - 1; ++i)
		{
			cin >> letter;
			if (letter != ll)
			{
				ans = string(1, ll) + string(1, letter);
				able = true;
			}

			ll = letter;
		}

		if (!able)
		{
			cout << "NO";
			return;
		}

		cout << "YES" << endl << ans;
	}
}

namespace lesson3
{

	int lastHelp(int n, int res)
	{
		for (int i = 0; i < n; ++i)
		{
			res += pow(2, i);
		}
		return res;
	}

	int fromDvoical(string n)
	{
		int res = 0;
		int length = n.length();
		for (int i = 0; i < length; ++i)
		{
			if (n[i] == '1')
			{
				res += pow(2, length - i - 1);
			}
		}
		return res;
	}

	int lastTask(string n)
	{
		int length = n.length();
		int res = 0;
		string nearestDv = "";
		bool help = false;
		for (int i = 0; i < length; ++i)
		{
			if (help || n[i] - '0' == 1)
			{
				nearestDv += '1';
				continue;
			}

			if (n[i] - '0' > 1)
			{
				nearestDv += '1';
				help = true;
				continue;
			}

			if (n[i] - '0' == 0 && help)
			{
				nearestDv += '1';
				continue;
			}

			if (n[i] - '0' == 0 && !help)
			{
				nearestDv += '0';
				help = true;
			}
		}

		res += fromDvoical(nearestDv);
		return res;
	}

	void scobs2(int n)
	{
		int n2 = n * 2;

		string ans = string(n2, '1');
		string help = "()[]";
		while (ans != string(n2, '4'))
		{
			for (int i = n2 - 1; i >= 0; i--)
			{
				if (ans[i] - '0' <= 3)
				{
					ans[i] = toString(ans[i] - '0' + 1);
					break;
				}
				else
				{
					ans[i] = '1';
				}
			}

			int check[4] = { 0, 0, 0, 0 };
			bool able = true;

			for (int i = 0; i < n2; ++i)
			{
				++check[ans[i] - '0' - 1];
				if (check[1] > check[0] || check[3] > check[2] || 
					(check[0] != 0 && check[1] != 0 && check[0] - check[1] < check[3] - check[2]) || 
					(check[2] != 0 && check[3] != 0 && check[2] - check[3] < check[1] - check[0]) ||
					(i != 0 && ((ans[i] == '2' && ans[i - 1] == '3') || (ans[i] == '4' && ans[i - 1] == '1'))))
				{
					able = false;
				}
			}

			if (able && check[0] == check[1] && check[2] == check[3])
			{
				for (int i = 0; i < n2; ++i)
				{
					cout << help[ans[i] - '1'];
				}
				cout << endl;
			}
		}
	}
}

namespace lesson4
{
	void easiest()
	{
		int n = 0;
		cin >> n;
		int* array = new int[n];
		
		for (int i = 0; i < n; ++i)
		{
			cin >> array[i];
		}

		int sereza = 0;
		int dima = 0;

		int first = 0;
		int last = n - 1;

		bool step = true;

		while (first != last + 1)
		{
			int help = 0;
			if (array[first] >= array[last])
			{
				help = array[first];
				first++;
			}
			else
			{
				help = array[last];
				last--;
			}

			if (step)
			{
				sereza += help;
			}
			else
			{
				dima += help;
			}

			step = !step;
			
		}
		cout << sereza << " " << dima;
	}

	void B()
	{
		int a = 0;
		int b = 0;
		cin >> a >> b;
		int* tasks = new int[a];
		int* t = new int[b];
		for (int i = 0; i < a; ++i)
			cin >> tasks[i];
		for (int i = 0; i < b; ++i)
			cin >> t[i];
		int l = 0;
		int r = 0;
		int count = 0;
		while (l < a && r < b)
		{
			if (tasks[l] <= t[r])
			{
				++count;
				++l;
				++r;
				continue;
			}
			++r;
		}
		cout << a - count;
	}

	void fury()
	{
		int n = 0;
		cin >> n;
		int aliveres = 0;
		int* array = new int[n];

		for(int i = 0; i < n; ++i)
		{
			cin >> array[i];
		}

		int firstnNumDie = INT_MAX;
		for (int i = n - 1; i >= 0; i--)
		{
			if (i < firstnNumDie)
				++aliveres;
			if (firstnNumDie > i - array[i])
				firstnNumDie = i - array[i];
		}

		cout << aliveres;
	}

	void cerealGuy()
	{
		int help = 0;
		int n = 0;
		int m = 0;
		int rightest = INT_MAX;
		int leftest = INT_MIN;
		string line = "";
		string storona = "";
		cin >> n >> m;
		if (m == 0)
		{
			if (n == 0)
			{
				cout << -1; 
				return;
			}
			cout << n;
			return;
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> line >> line >> line;
			storona = line;
			cin >> line;
			cin >> help;

			if (storona == "left" && help < rightest)
				rightest = help;
			if (storona == "right" && help > leftest)
				leftest = help;
		}

		if (leftest >= rightest || leftest + 1 == rightest)
		{
			cout << -1;
			return;
		}

		if (leftest != INT_MIN && rightest != INT_MAX)
		{
			if (rightest - leftest - 1 == 0)
			{
				cout << -1;
				return;
			}

			cout << rightest - leftest - 1;
			return;
		}

		if (leftest == INT_MIN)
			leftest = 1;
		if (rightest == INT_MAX)
			rightest = n;
		if (rightest - leftest == 0)
		{
			cout << -1;
			return;
		}

		cout << rightest - leftest;
	}

	void kirill()
	{
		long long int l = 0;
		long long int r = 0;
		long long int x = 0;
		long long int y = 0;
		long long int k = 0;
		cin >> l >> r >> x >> y >> k;
		
		for (int i = x; i <= y; ++i)
		{
			if (i * k >= l && i * k <= r)
			{
				cout << i * k << endl;
				cout << "YES";
				return;
			}
		}

		cout << "NO";
	}

	void chocolate()
	{
		int n = 0;
		cin >> n;

		if (n == 1)
		{
			cout << 1 << " " << 0;
			return;
		}

		int* array = new int[n];
		for (int i = 0; i < n; ++i)
			cin >> array[i];

		int f = 0;
		int l = n - 1;
		int alice = 0;
		int bob = 0;

		while (true)
		{
			if (array[f] == array[l])
			{
				++alice;
				++bob;
				array[f] = 0;
				array[l] = 0;
				++f;
				l--;
			}
			else
			{
				if (array[f] > array[l])
				{
					array[f] -= array[l];
					array[l] = 0;
					bob++;
					l--;
				}
				else
				{
					if (array[f] < array[l])
					{
						array[l] -= array[f];
						array[f] = 0;
						alice++;
						f++;
					}
				}
			}

			if (l - f == 1)
			{
				cout << alice + 1 << " " << bob + 1;
				return;
			}

			if (l - f == 0)
			{
				cout << alice + 1 << " " << bob;
				return;
			}

			if (l - f == -1)
			{
				cout << alice << " " << bob;
				return;
			}

			
		}
	}
}

namespace lesson5
{

}