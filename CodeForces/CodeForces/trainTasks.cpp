#include "trainTasks.h"
#include <cmath>

string toString(int n)
{
	if (n == 0)
		return "0";
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
	return res;
}

namespace tasks
{
	namespace A
	{
		string task4(int w)
		{
			if (w % 2 != 0 || w < 4)
				return "NO";
			return "YES";
		}

		string* task71(int a)
		{
			string word = "";
			string* answers = new string[a];
			for (int i = 0; i < a; ++i)
			{
				cin >> word;
				if (word.length() > 10)
				{
					answers[i] = word[0] + toString(word.length() - 2) + word[word.length() - 1];
				}
				else
				{
					answers[i] = word;
				}
			}

			return answers;
		}
	}

	namespace B
	{
		int* task1389()
		{
			int t = 0;
			cin >> t;
			int n = 0;
			int k = 0;
			int z = 0;
			int* res = new int[t];
			for (int i = 0; i < t; ++i)
			{
				cin >> n >> k >> z;
				int* array = new int[n];
				for (int j = 0; j < n; ++j)
				{
					cin >> array[j];
				}


			}
			return res;
		}
	}

	namespace C
	{
		//
		void task1381()
		{
			int t = 0;
			cin >> t;
			for (int z = 0; z < t; ++z)
			{
				int n = 0;
				int x = 0;
				int y = 0;
				bool twoNum = true;
				int first = 0;
				int second = 0;
				cin >> n >> x >> y;
				int* bob = new int[n];
				int* help = new int[n];
				for (int j = 0; j < n; ++j)
				{
					cin >> bob[j];
					help[j] = bob[j];
					if (j == 0)
						first = bob[j];
					if (j == 1)
						second = bob[j];
					if (bob[j] != first && bob[j] != second)
						twoNum = false;
				}

				if (n - x % 2 == 1 && twoNum == true)
				{
					cout << "NO";
					continue;
				}

				cout << "YES" << endl;
				for (int j = 0; j < x; ++j)
				{
					cout << bob[j] << " ";
				}

				for (int j = x; j < n; ++j)
				{
					for (int i = 1; i < n;++i)
					{
						if (help[j] == bob[j] && help[j] != help[j + i])
						{
							int data = help[j];
							bob[j] = bob[j + i];
							bob[j + i] = data;
							break;
						}
					}

					cout << bob[j] << " ";
				}

			}
		}
	}

	namespace D
	{

	}
	
	namespace E
	{
		void task1375()
		{
			int n = 0;
			cin >> n;
			arr<int> a(n);

			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}


		}

		//
		int* task1392()
		{
			int n = 0;
			cin >> n;
			int* h = new int[n];

			for (int i = 0; i < n; ++i)
			{
				cin >> h[i];
			}

			bool able = true;
			while (able)
			{
				able = false;
				for (int i = 0; i < n - 1; ++i)
				{
					if(h[i] + 2 <= h[i + 1])
					{
						++h[i];
						h[i + 1]--;
						able = true;
					}
				}
			}

			return h;
		} 

		int task1393()
		{
			int n = 0;
			string word = "";
			string alphabet = "abcdefghijklmnopqrstuvwxyz";
			int res = 0;
			for (int i = 0; i < n; ++i)
			{
				cin >> word;

			}

			return 0;
		}

		//
		int task1400()
		{
			int n = 0;
			cin >> n;
			arr<int> arra(n);

			for (int i = 0; i < n; ++i)
			{
				cin >> arra[i];
			}

			int longestLine = 0;
			int longestColumn = 0;
			int longestLineIndex = 0;
			int longestColumnIndex = 0;
			bool able = true;
			int res = 0;
			int zero = 0;
			while (arra.length != 0)
			{
				longestLine = 0;
				longestColumn = 0;
				able = true;
				zero = 0;
				for (int i = 0; i < arra.length; ++i)
				{
					if (arra[i] > longestColumn)
					{
						longestColumn = arra[i];
						longestColumnIndex = i;
					}
				}

				if (arra.length > longestColumn)
				{
					zero = 0;
					for (int i = 0; i < arra.length; ++i)
					{
						if (arra[i] == 0)
						{
							++zero;
							if (i != arra.length - 1)
								able = false;
						}
					}

					for (int i = 0; i < arra.length && able == true; ++i)
					{
						--arra[i];
					}

					if (zero == arra.length)
						return res;
				}
				else
				{
					arra.del(longestColumnIndex);
				}

				if (able == false)
				{
					arra.del(longestColumnIndex);
				}

				++res;
			}

			return res;
		}
	}

	namespace F
	{
		//
		namespace task1394
		{
			int* replace(int* array, int k, int x)
			{
				array[k] = x;
				return array;
			}

			int* reverse(int* array, int k, int length)
			{
				int i = 1;
				int two = pow(2, k);
				int hlen = i * two - 1 - (i - 1) * two;
				int* help = new int[hlen];
				while (i * two <= length)
				{
					int start = (i - 1) * two;
					int end = i * two - 1;
					for (int j = end; j >= start; j--)
						help[end - j] = array[j];
					for (int j = start; j < end + 1; ++j)
						array[j] = help[j - start];
					++i;
				}
				return array;
			}

			int* swap(int* array, int k, int length)
			{
				int i = 1;
				int two = pow(2, k);
				while (i * 2 * two <= length)
				{
					int s1 = (i * 2 - 2) * two;
					int e1 = (i * 2 - 1) * two - 1;
					int s2 = (i * 2 - 1) * two;
					int e2 = i * 2 * two - 1;
					int hlen = e1 - s1;
					for (int j = 0; j < hlen + 1; ++j)
					{
						array[s1 + j] += array[s2 + j];
						array[s2 + j] = array[s1 + j] - array[s2 + j];
						array[s1 + j] -= array[s2 + j];
					}
					++i;
				}
				return array;
			}

			int sum(int* array, int s, int e)
			{
				int sum = 0;
				for (int i = s; i < e + 1; ++i)
					sum += array[i];
				return sum;
			}

			void out(int* array, int length)
			{
				for (int i = 0; i < length; ++i)
				{
					cout << array[i] << " ";
				}
				cout << endl;
			}

			void decision()
			{
				int n = 0;
				int q = 0;
				cin >> n >> q;
				int length = pow(2, n);
				int* array = new int[length];

				for (int i = 0; i < length; ++i)
					cin >> array[i];

				for (int i = 0; i < q; ++i)
				{
					int func = 0;
					cin >> func;
					int index = 0;
					int start = 0;
					int end = 0;
					int toAssign = 0;

					if (func == 1)
					{
						cin >> index;
						cin >> toAssign;
						array = replace(array, index - 1, toAssign);
					}

					if (func == 2)
					{
						cin >> index;
						array = reverse(array, index, length);
					}

					if (func == 3)
					{
						cin >> index;
						array = swap(array, index, length);
					}

					if (func == 4)
					{
						cin >> start;
						cin >> end;
						cout << endl << sum(array, start - 1, end - 1) << endl;
					}

					out(array, length);
				}
			}
		}
	}

	namespace G
	{

	}
}

namespace work
{
	int wall(int n, int m)
	{
		if (n % 2 == 0)
		{
			return n / 2 * (m + m + 1);
		}
		return (n / 2 + 1) * (m + 1) + (n / 2) * m;
	}

	int sweets(int n)
	{
		int num = 0;
		int res = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> num;
			res += abs(num);
		}
		return res;
	}

	int toys(int n)
	{
		int x1 = INT_MIN;
		int x2 = 0;
		int y1 = INT_MIN;
		int y2 = 0;
		int nearestX1 = INT_MIN;
		int nearestX2 = INT_MAX;
		int nearestY1 = INT_MIN;
		int nearestY2 = INT_MAX;
		bool unable = false;
		cin >> nearestX1 >> nearestX2 >> nearestY1 >> nearestY2;
		for (int i = 1; i < n; ++i)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			
			if (x1 > nearestX1)
			{
				nearestX1 = x1;
				if (x2 < nearestX2 || x1 > nearestX2)
					unable = true;
			}
			if (x2 < nearestX2)
				nearestX2 = x2;
			if (y1 > nearestY1)
			{
				nearestY1 = y1;
				if (y2 < nearestY2 || y1 > nearestY2)
					unable = true;
			}
			if (y2 < nearestY2)
				nearestY2 = y2;

			if (x1  > x2 || y1 > y2)
				unable = true;
		}
		if (unable == true || abs(x1) > abs(x2) || abs(y1) > abs(y2))
			return 0;
		return (abs(x2) - abs(x1)) * (abs(y2) - abs(y1));
	}

	void kidToys(int n)
	{
		bool unable = false;
		int x1, x2, y1, y2;
		int nx1 = INT_MIN, nx2 = INT_MAX, ny1 = INT_MIN, ny2 = INT_MAX;

		for (int i = 0; i < n; ++i)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			if (x1 > nx1)
				nx1 = x1;

			if (nx2 < nx1 || ny2 < ny1)
				unable = true;

			if (x2 < nx2)
				nx2 = x2;

			if (nx2 < nx1 || ny2 < ny1)
				unable = true;

			if (y1 > ny1)
				ny1 = y1;

			if (nx2 < nx1 || ny2 < ny1)
				unable = true;

			if (y2 < ny2)
				ny2 = y2;

			if (nx2 < nx1 || ny2 < ny1)
				unable = true;
		}

		if (unable)
		{
			cout << 0;
			return;
		}

		cout << (nx2 - nx1) * (ny2 - ny1);
	}

	void linee( int n, int m,int plus, int first, int maxm)
	{
		int toPlus = 1;
		bool plusOne = false;
		for (int i = 0; i < n; ++i)
		{
			if (i == 0 && m != 0)
			{
				cout << first << " ";
				continue;
			}

			if (toPlus == -1)
			{
				plus += toPlus;
			}
			else
			{
				if (plus < maxm)
				{
					plus += toPlus;
				}
				else
				{
					if (plusOne == false)
					{
						plusOne = true;
						++plus;
					}
				}
			}
			first += plus - 1;
			if (n > m)
			{
				if (m + i + 1 > n)
					toPlus = -1;
			}
			else
			{
				if (n - i == m - i + 1)
					toPlus = -1;
			}
			cout << first << " ";
		}
		cout << endl;
	}
	
	void line(int n, int m, int plus, int first, int line)
	{
		int toPlus = 1;
		for (int i = 0; i < n; ++i)
		{
			if (i == 0)
			{
				cout << first << " ";
				continue;
			}

			cout << first + plus << " ";
			first += plus;
			plus += toPlus;
			if (plus > m)
				plus = m;
			if (line >= n - i - 1)
			{
				toPlus = -1;
				plus -= (n - i - line);
			}
		}
		cout << endl;
	}

	void boringLesson(int n, int m)
 	{
		int first = 1;
		line(n, m, 1, 1, 0);
		int plus = 1;
		for (int i = 1; i < m; ++i)
		{
			if(plus <= m)
				++plus;
			first += plus;
			line(n, m, plus, first, i);
		}
	}

	void mathGame()
	{
		long long int x = 0;
		long long y = 0;
		cin >> x >> y;
		if (x == 2 && y == 1)
		{
			cout << 1 << " " << 1;
			return;
		}

		if (x == y + 1)
		{
			cout << y << " " << 1;
			return;
		}

		for (int i = 0; i < 200000000; ++i)
		{
			if (x * i - i * i == y)
			{
				cout << i << " " << x - i;
				return;
			}
		}
		cout << 0;
	}

	void E()
	{
		int x;
		long long int y;
		cin >> x >> y;
		if (x == 2 && y == 1)
		{
			cout << 1 << " " << 1;
			return;
		}

		if (x  == y + 1)
		{
			cout << y << " " << 1;
			return;
		}

		long int sqrty = int(y / 2);
		int sqt;
		if (y > 1000000000)
		{
			sqt = int(sqrt(sqrty));
		}
		else
		{
			sqt = sqrty;
		}
		long long int* array = new long long int[sqt];
		long int cur = 0;
		for (long int i = 1; i < sqrty + 4; ++i)
		{
			if (y % i == 0)
			{
				array[cur] = i;
				++cur;
				for (long long int j = 0; j < cur; ++j)
				{
					if (array[j] + i == x && i * array[j] == y)
					{
						cout << array[j] << " " << i;
						return;
					}
				}
			}
		}
		cout << "0";
	}

	void Ee()
	{
		long long int x;
		long long int y;
		cin >> x >> y;
		if (x == 2 && y == 1)
		{
			cout << 1 << " " << 1;
			return;
		}

		long long int sqrty = sqrt(y);
		long long int cur = 0;
		for (long long int i = 1; i < sqrty + 4; ++i)
		{
			if (y % i == 0)
			{
				for (long long int j = 0; j < i; ++j)
				{
					if (j + i == x && i * j == y)
					{
						cout << j << " " << i;
						return;
					}
				}
			}
		}
		cout << "-1";
	}

	void F(int n)
	{
		int res = 0;
		int num = 0;
		int last = 0;
		int lasts = 1;
		bool start = false;
		int** answer = new int* [2];
		answer[0] = new int[n];
		answer[1] = new int[n];

		cin >> num;
		last = num;
		for (int i = 1; i < n; ++i)
		{
			cin >> num;
			if (num == last || start == true)
			{
				++lasts;
				if (start == true && num != last)
				{
					answer[0][res] = last;
					answer[1][res] = lasts - 1;
					++res;
					//cout << last << " " << lasts - 1 << endl;
					last = num;
					lasts = 1;
					start = true;
				}
				else
				{
					start = false;
				}
			}
			else
			{
				answer[0][res] = last;
				answer[1][res] = lasts;
				++res;
				//cout << last << " " << lasts << endl;
				lasts = 1;
				last = num;
				start = true;
			}
		}
		answer[0][res] = last;
		answer[1][res] = lasts;
		cout << res + 1 << endl;
		for (int i = 0; i < res + 1; ++i)
		{
			cout << answer[0][i] << " " << answer[1][i] << endl;
		}
	}

	void water(int n)
	{
		int* open = new int[n];
		int* all = new int[n];
		int cur = 0;
		int acur = 0;
		long long int res = 0;
		int num = 0;
		for(int i = 0; i < n; ++i)
		{
			cin >> num;
			all[acur] = num;
			++acur;
			if (cur != 0 && num > open[cur - 1])
			{
				int help = 0;
				while (num > open[cur - help - 1])
				{
					int index = 0;
					for (int j = acur - 2; j >= 0; j--)
					{
						if (all[j] == open[cur - help - 2])
						{
							index = j;
							break;
						}
					}
					if (open[cur - help - 2] >= num)
					{
						res += (num - open[cur - help - 1]) * (acur - index - 2);
						break;
					}
					else
					{
						res += (open[cur - help - 2] - open[cur - help - 1]) * (acur - index - 2);
					}
					
					open[cur - help - 1] = 0;
					++help;
					if (cur - help - 2 == -1)
					{
						cur = 0;
						open[0] = num;
						help = -1;
						break;
					}
				}
				cur -= (help + 1);
			}
			open[cur] = num;
			++cur;
		}
		cout << res;
	}

	string haker()
	{
		string word = " "; 
		string favourit = "";
		int num = 0;
		cin >> word;
		cin >> favourit;
		cin >> num;

		string code = "";
		int cl = 0;
		int length = favourit.length();
		int wordLength = word.length();
		bool* same = new bool[length];
		bool allSame = false;
		bool able = false;
		bool secondCycle = false;

		for (int i = 0; i < length; ++i)
		{
			same[i] = false;
		}

		for (int i = wordLength - 1; i >= 0; i--)
		{
			able = false;
			secondCycle = true;
			for (int j = 0; j < length; ++j)
			{
				if (word[i] == favourit[j])
				{
					secondCycle = false;
  					able = true;
					code = word[i] + code;
					same[j] = true;
					allSame = true;
					++cl;
					if (cl > num)
					{
						able = false;
						for (int i = 0; i < cl - 2; ++i)
						{
							if (code[i] == code[cl - 1])
							{
								code = string(code, 0, cl - 1);
								--cl;
								able = true;
								break;
							}
						}
					}
					for (int z = 0; z < length; ++z)
					{
						if (same[z] == false)
						{
							allSame = false;
						}
					}

					if (allSame == true && cl == num)
					{
						return code;
					}
					

					break;
				}
			}

			if (allSame == true && secondCycle)
			{
				return code;
			}

			if (able == false)
			{
				code = "";
				cl = 0;
				for (int i = 0; i < length; ++i)
				{
					same[i] = false;
				}
			}
		}

		return "-1";
	}

	string hatsker()
	{
		string word = " ";
		string favourit = "";
		int num = 0;
		cin >> word;
		cin >> favourit;
		cin >> num;

		string code = "";
		int cl = 0;
		int length = favourit.length();
		int wordLength = word.length();
		bool* same = new bool[length];
		bool allSame = false;
		bool able = false;

		for (int i = 0; i < length; ++i)
		{
			same[i] = false;
		}

		for (int i = wordLength - 1; i >= 0; i--)
		{
			able = false;
			for (int j = 0; j < length; ++j)
			{
				if (word[i] == favourit[j])
				{
					able = true;
					code = word[i] + code;
					same[j] = true;
					allSame = true;
					++cl;
					if (cl > num)
					{
						able = false;
						for (int i = 0; i < cl - 2; ++i)
						{
							if (code[i] == code[cl - 1])
							{
								code = string(code, 0, cl - 1);
								--cl;
								able = true;
								break;
							}
						}
					}
					for (int z = 0; z < length; ++z)
					{
						if (same[z] == false)
						{
							allSame = false;
						}
					}

					if (allSame == true && cl == num)
					{
						return code;
					}

					bool next = false;
					for (int z = 0; z < length; ++z)
					{
						if (word[i - 1] == favourit[z])
						{
							next = true;
						}
					}
					if (next == false)
					{
						break;
					}

				}
			}

			if (allSame == true)
			{
				return code;
			}

			if (able == false)
			{
				code = "";
				cl = 0;
				for (int i = 0; i < length; ++i)
				{
					same[i] = false;
				}
			}
		}

		return "-1";
	}

	void stairs()
	{
		int n = 0;
		int k = 0;
		cin >> n >> k;
		int* a = new int[k];
		for (int i = 0; i < k; ++i)
		{
			cin >> a[i];
		}
	}

	void meteorites(int n)
	{
		int* array = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> array[i];
		}

		int res = n;
		bool able = true;
		int index = 0;
		while (true)
		{

			int i = 0;
 			for (i = 1; array[index + i] == 0; ++i)
			{
				if (index + i >= n)
				{
					index = 0;
					break;
				}
			}

			if (array[index] > 0 && array[index + i] < 0 && index + i != n)
			{
				able = true;
				
				if (array[index] == abs(array[index + i]))
				{
					array[index] = 0;
					array[index + i] = 0;
					res -= 2;
				}
				else
				{
					if (array[index] > abs(array[index + i]))
					{
						array[index + i] = 0;
						--res;
					}
					else
					{
						array[index] = 0;
						--res;
					}
				}
			}

			index += i;
			if (index >= n)
			{
				index = 0;
				if (able == false)
				{
					cout << res << endl;
					for (int i = 0; i < n; ++i)
					{
						if (array[i] != 0)
						{
							cout << array[i] << " ";
						}
					}
					return;
				}
				able = false;
			}
		}
	}

	void profi()
	{
		int w = 0;
		int h = 0;
		double length = 0;
		double a = 0;
		cin >> w >> h >> a >> length;
		double x = w / 2;
		double y = h / 2;
		int side = int(a / 90);
		while (length > 0)
		{
			double lenToBoard = 0;
			if (side == 0)
				lenToBoard = y >= 0 ? (h - y) / a : (h / 2 - abs(y)) / a;
			if (side == 1)
				double lenToBoard = x >= 0 ? (w - x) / a : (w / 2 - abs(x)) / a;
			if (side == 2)
			{
				double lenToBoard = x >= 0 ? (w / 2 + x) / a : abs(x) / a; 
			}
			if(side == 4)
			if (lenToBoard > length)
			{

				//end
			}
			side = (side + 3) % 4;
			a = 180 - a;
			length -= lenToBoard;
		}
	}

	void meteor(int n)
	{
		int* answer = new int[n];
		int length = n;
		int* plus = new int[n];
		int cur = 0;
		int curAns = 0;
		int num = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> num;
			if (num > 0)
			{
				plus[cur] = num;
				++cur;
			}
			else
			{
				if (cur == 0)
				{
					answer[curAns] = num;
					++curAns;
				}
				for (int j = cur - 1; j >= 0; j--)
				{
					if (plus[j] != 0 && abs(num) == plus[j])
					{
						plus[j] = 0;
						break;
					}

					if (plus[j] != 0 && abs(num) > plus[j])
					{
						plus[j] = 0;
					}
					else
					{
						if (plus[j] != 0)
						{
							break;
						}
					}
					if (j == 0)
					{
						answer[curAns] = num;
						++curAns;
					}
				}
			}
			for (int j = 0; j < cur; ++j)
				cout << plus[j] << " ";
			cout << endl;
			for (int j = 0; j < curAns; ++j)
				cout << answer[j] << " ";
			cout << endl;
		}

		int res = 0;
		for (int i = 0; i < cur; ++i)
		{
			if (plus[i] != 0)
			{
				++res;
			}
		}
		cout << res + curAns << endl;
		for (int i = 0; i < curAns; ++i)
		{
			cout << answer[i] << " ";
		}
		for (int i = 0; i < cur; ++i)
		{
			if (plus[i] != 0)
			{
				cout << plus[i] << " ";
			}
		}
	}


}

//

namespace contest
{
	void numbers()
	{
		int num[4];
		int max = 0;
		int maxIndex;
		for (int i = 0; i < 4; ++i)
		{
			cin >> num[i];
			if (num[i] > max)
			{
				max = num[i];
				maxIndex = i;
			}
		}
		
		for (int i = 0; i < 4; ++i)
		{
			if (i != maxIndex)
			{
				cout << max - num[i] << " ";
			}
		}
	}

	int math()
	{
		int a = 0;
		int b = 0;
		cin >> a >> b;
		for(int i = 0; i < b; ++i)
		{
			if (a % 10 == 0)
				a /= 10;
			else
			{
				--a;
			}
		}
		cout << a;
		return a;
	}

	int fafa()
	{
		int num = 0;
		cin >> num;
		int res = 0;
		for (int i = 1; i < num; ++i)
		{
			if ((num - i) % i == 0)
				++res;
		}
		cout << res;
		return res;
	}

	int downWord()
	{
		int n = 0;
		cin >> n;
		string word;
		cin >> word;
		int length = word.length();
		int res = 0;
		for (int j = length - 1; j >= 0; j--)
		{
			if (word[j] == '0' || word[j] == '2' || word[j] == '4' || word[j] == '6' || word[j] == '8')
			{
				res += j + 1;
			}
		}
		cout << res;
		return res;
	}

	void boooks()
	{
		int t = 0;
		int n = 0;
		cin >> n >> t;
		
		int** books = new int* [2];
		books[0] = new int[n];
		books[1] = new int[n];
		int num;
		int cur = 0;
		int res = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> num;
			for (int j = cur; j < i; ++j)
			{
				++books[0][j];
				books[1][j] += num;
				if (books[1][j] >= t)
				{
					++cur;
					if (books[0][j] > res)
						res = books[0][j];
				}
			}
		}
		cout << res;
	}

	int books()
	{
		int t = 0;
		int n = 0;
		cin >> n >> t;

		int* books = new int[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> books[i];
		}

		int ct = 0;
		int cres = 0;
		int res = 0;
		int j = 0;
		for(int i = 0; i < n; ++i)
		{
			for (j = i; j < n; ++j)
			{
				ct += books[j];
				++cres;
				if (ct > t)
				{
					--cres;
					break;
				}
			}
			if (j == n && cres >= res)
			{
				cout << cres;
				return cres;
			}
			if (cres > res )
				res = cres;
			cres = 0;
			ct = 0;
		}

		cout << res;
		delete[] books;
		return res;
	}

	void magicStick()
	{
		int t = 0;
		int x = 0;
		int y = 0;
		cin >> t;
		for (int i = 0; i < t; ++i)
		{
			cin >> x >> y;
			if (x == y)
			{
				cout << "YES" << endl;
				continue;
			}
			if (x == 1)
			{
				cout << "NO" << endl;
				continue;
			}
			if (x == 2 && y != 1)
			{
				cout << "NO" << endl;
				continue;
			}
			if (x == 3 && y > 2)
			{
				cout << "NO" << endl;
				continue;
			}
			cout << "YES" << endl;
		}
	}

	int diploms()
	{
		int w = 0;
		int h = 0;
		int n = 0;
		cin >> w >> h >> n;
		return 0;
	}

	void last()
	{
		int length = 0;
		cin >> length;

		if (length == 1)
		{
			cout << "0" << endl << "1";
			return;
		}

		string word = string(length, '0');
		for (int j = 0; j < length; ++j)
		{
			cout << word[j] << " ";
		}


		int sql = pow(2, length) - 1;
		for (int i = 0; i < sql; ++i)
		{
			for (int j = length - 1; j >= 0; j--)
			{
				if (word[j] == '0')
				{
					word[j] = '1';
					break;
				}
				else
				{
					word[j] = '0';
				}
			}
			cout << endl;
			for (int j = 0; j < length; ++j)
			{
				cout << word[j] << " ";
			}
		}
	}
}