#include <iostream>
#include "windows.h"
#include <cstring>
#include <cassert>
#include <ctime>

using namespace std;

//class AssociativeArray
//{
//public:
//	class Node
//	{
//	public:
//		Node* next;
//		int data;
//
//		Node(int data = 0)
//		{
//			this->data = data;
//		}
//
//		~Node()
//		{
//			delete this;
//		}
//	};
//
//	Node* head;
//
//	static int length;
//
//	AssociativeArray(int length)
//	{
//		this->length = length;
//		this->head = nullptr;
//	}
//
//	int& operator[](int index)
//	{
//		int i = 0;
//		Node* temp = this->head;
//		while (i != index)
//		{
//			if (temp->next != nullptr)
//			{
//				++i;
//				temp = temp->next;
//			}
//			else
//			{
//				return;
//			}
//		}
//		return temp->data;
//	}
//
//	void change(int start, int end, int data)
//	{
//		for (int i = start; i <= end; ++i)
//		{
//			this[i] = data;
//		}
//	}
//
//	friend istream& operator>>(istream& in, AssociativeArray array)
//	{
//		Node* temp = array.head;
//		int data;
//		for (int i = 0; i < array.length; ++i)
//		{
//			
//		}
//	}
//};

#pragma region Color
enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void SetColor(int text, ConsoleColor / int / background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
#pragma endregion Color

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

class intl
{
private:
#pragma region private
	int sumOfChar(char firstCh, char secondCh, bool firstm, bool secondm)
	{
		int first = toInt(firstCh);
		int second = toInt(secondCh);
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

	int toInt(char data)
	{
		return data - '0';
	}

	int mult(char firstCh, char secondCh)
	{
		return toInt(firstCh) * toInt(secondCh);
	}

	static string toString(int n)
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
			int sum = sumOfChar(first[i], second[i], false, false);
			res = toString((sum + one) % 10) + res;
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
		if (seconds.length() > firstf.length())
			return "-" + subtractOfTwoPositive(seconds, firstf, true);
		if (secondAttemp == false && firstf.length() == seconds.length())
		{
			for (int i = 0; i < firstf.length(); ++i)
			{
				if (toInt(firstf[i]) < toInt(seconds[i]))
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
			int sum = sumOfChar(first[i], second[i], false, true);
			if (i == 0 && first.length() == second.length() + 1)
				sum += 10;
			if (sum != one)
				res = toString(abs((sum + one)) % 10) + res;
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

	static string multiple(string const& firstf, string const& seconds)
	{
		if (seconds == "0")
			return "";
		if (seconds == "10")
			return firstf + "0";
		string first = firstf;
		string second = seconds;
		int const length = first.length() > second.length() ? first.length() : second.length();

		string res = "";
		int one = 0;
		intl help;
		for (int i = length - 1; i >= 0; --i)
		{
			int mul = help.mult(first[i], second[0]);
			res = toString((mul + one) % 10) + res;
			if ((mul + one) >= 10)
				one = (mul + one) / 10;
			if ((mul + one) < 10)
				one = 0;
			if (i == 0 && one != 0)
				res = toString(one) + res;
		}

		return res;
	}

	string operatorMult(string const& firstf, string const& seconds)
	{
		bool minus = false;
		string first = firstf;
		string second = seconds;
		if (first[0] == '-')
		{
			first = string(firstf, 1, firstf.length());
			minus = !minus;
		}
		if (second[0] == '-')
		{
			second = string(seconds, 1, seconds.length());
			minus = !minus;
		}

		intl res = intl(intl::multiple(first, string(1, second[second.length() - 1])));
		for (int i = second.length() - 2; i >= 0; i--)
		{
			res = intl::multiple(intl::multiple(first, string(1, second[i])), toString(pow(10, second.length() - i + 2)));
		}
		if ((first[0] == '-' && second[0] != '-') || (first[0] != '-' && second[0] == '-'))
			return "-" + res.data;
		return res.data;
	}

	string operatorPlus(string const& first, string const& second)
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
#pragma endregion private
public:
	string data;

	intl(string data = "0")
	{
		this->data = data;
	}

	intl& operator=(intl const& other)
	{
		this->data = other.data;
		return *this;
	}

	friend intl operator+(intl& first, intl& second)
	{
		return intl(first.operatorPlus(first.data, second.data));
	}

	friend intl operator+(intl& first, int const second)
	{
		return intl(first.operatorPlus(first.data, intl::toString(second)));
	}

	// void operator+=(intl& other)
	/*{
		this->data = this->operator+(other).data;
	}*/

	friend intl operator-(intl& first, intl& second)
	{
		return intl(first.subtractOfTwoPositive(first.data, second.data));
	}

	friend intl operator-(intl& first, int const second)
	{
		return intl(first.subtractOfTwoPositive(first.data, intl::toString(second)));
	}

	/*void operator-=(intl& other)
	{
		this->data = this->operator-(*this, other).data;
	}*/

	friend intl operator*(intl& first, intl const& second)
	{
		return intl(first.operatorMult(first.data, second.data));
	}

	friend intl operator*(intl& first, int const second)
	{
		return intl(first.operatorMult((first.data), intl::toString(second)));
	}

	void operator*=(intl& other)
	{
		this->data = this->operatorMult((this->data), other.data);
	}

	intl operator--()
	{
		this->data = this->subtractOfTwoPositive(this->data, "1");
	}

	intl operator++()
	{
		this->data = this->sumOfTwoPositivå(this->data, "1");
	}

	bool operator==(intl& other)
	{
		return this->data == other.data;
	}

	bool operator==(int& other)
	{
		return this->data == toString(other);
	}

	bool operator!=(intl& other)
	{
		return this->data != other.data;
	}

	bool operator!=(int& other)
	{
		return this->data != toString(other);
	}

	bool operator>(intl& other)
	{
		if (this->data == other.data)
			return false;
		if (this->data.length() > other.data.length())
			return true;
		if (this->data.length() < other.data.length())
			return false;
		for (int i = 0; i < this->data.length(); ++i)
		{
			if (toInt(this->data[i]) > toInt(other.data.length()))
				return true;
		}
		return false;
	}

	bool operator>(int& otherInt)
	{
		intl other(toString(otherInt));
		if (this->data == other.data)
			return false;
		if (this->data.length() > other.data.length())
			return true;
		if (this->data.length() < other.data.length())
			return false;
		for (int i = 0; i < this->data.length(); ++i)
		{
			if (toInt(this->data[i]) > toInt(other.data.length()))
				return true;
		}
		return false;
	}

	bool operator<(intl& other)
	{
		if (this->data == other.data)
			return false;
		if (this->data.length() < other.data.length())
			return true;
		if (this->data.length() > other.data.length())
			return false;
		for (int i = 0; i < this->data.length(); ++i)
		{
			if (toInt(this->data[i]) < toInt(other.data.length()))
				return true;
		}
		return false;
	}

	bool operator<(int& otherInt)
	{
		intl other(toString(otherInt));
		if (this->data == other.data)
			return false;
		if (this->data.length() < other.data.length())
			return true;
		if (this->data.length() > other.data.length())
			return false;
		for (int i = 0; i < this->data.length(); ++i)
		{
			if (toInt(this->data[i]) < toInt(other.data.length()))
				return true;
		}
		return false;
	}

	bool operator<=(intl& other)
	{
		intl help(this->data);
		if (help.data == other.data)
			return true;
		return help < other;
	}

	bool operator<=(int& other)
	{
		intl help(this->data);
		if (help.data == toString(other))
			return true;
		return help < other;
	}

	bool operator>=(intl& other)
	{
		intl help(this->data);
		if (help.data == other.data)
			return true;
		return help > other;
	}

	bool operator>=(int& other)
	{
		intl help(this->data);
		if (help.data == toString(other))
			return true;
		return help > other;
	}

	friend ostream& operator<<(ostream& out, intl const& toOut)
	{
		out << toOut.data;
		return out;
	}

	friend istream& operator>>(istream& in, intl& toIn)
	{
		string data = "";
		in >> data;
		toIn.data = data;
		return in;
	}

	int toInt()
	{
		int res = 0;
		for (int i = 0; i < this->data.length(); ++i)
		{
			res += this->toInt(this->data[i]);
			if ((1000 / 10) < res)
			{
				cout << "data too big" << endl;
				return 0;
			}
			res *= 10;
		}
		return res / 10;
	}
};

namespace olimpic8910
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
		res = 1000;
		for (int i = 0; i < 6; ++i)
		{
			if (strings[i] < res)
				res = strings[i];
		}
		cout << "YES" << " " << res;
		return res;
	}

	//

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
		int minLength = 1000;
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

	int numb(int a, int b)
	{
		if (a % 2 == 1 && b % 2 == 1)
			return (b - a) / 2 + 1;
		if ((a % 2 == 1 && b % 2 != 1) || (a % 2 != 1 && b % 2 == 1))
			return (b - a) / 2 + 1;
		return (b - a) / 2;
	}

	bool odd(int n = 0)
	{
		int sum = 0;
		while (n != 0)
		{
			sum += n % 10;
			n /= 10;
		}
		return sum % 2 == 0 ? false : true;
	}

	int num(int a, int b)
	{
		int res = 0;

		for (int i = a; i % 10 != 0; ++i)
			if (odd(i))
				++res;
		for (int i = b; i % 10 != 0; i--)
			if (odd(i))
				++res;

		return ((b - b % 10) - (a + 10 - a % 10)) / 2 + res;
	}
}

namespace olimpic91011
{
	namespace firstTask
	{
		int decision(int a, int b, int c, int d)
		{
			int res = 0;
			int sum = (b - a) + (d - c);
			for (int A = a; A <= b; ++A)
			{
				for (int B = A; B <= b; ++B)
				{
					for (int C = B + 1; C <= c; ++C)
					{
						if (sum + A + C - B >= d)
						{
							++res;
						}
					}
				}
			}
			return res;
		}

		void start()
		{
			int a = 0;
			int b = 0;
			int c = 0;
			int d = 0;
			cin >> a >> b >> c >> d;
			cout << endl << decision(a, b, c, d);
		}
	}

	namespace thirdTask
	{
		int* sort(int* array, int length)
		{
			int min = INT_MAX;
			int minIndex = 0;
			int* res = new int[length - 1];
			for (int i = 0; i < length; ++i)
			{
				for (int j = i; j < length; ++j)
				{
					if (array[j] < min)
					{
						min = array[j];
						minIndex = j;
					}
				}
				int minToArray = array[minIndex];
				array[minIndex] = array[i];
				res[i] = minToArray;
				min = INT_MAX;
			}
			return res;
		}

		string decision(int n, int c, int* t, int* k)
		{
			t = sort(t, n);
			string res = "";
			int s = 0;
			//decision

			int* p = new int[s];
			res = toString(s);
			res += '\n';
			for (int i = 0; i < s; ++i)
			{
				res += toString(p[i]);
				res += " ";
			}
			return res;
		}

		void start()
		{
			int n = 0;
			int c = 0;

			cin >> n >> c;

			int* t = new int[n];
			int* k = new int[n];

			for (int i = 0; i < n; ++i)
			{
				cin >> t[i];
				cin >> k[i];
			}

			cout << decision(n, c, t, k);

			delete[] t;
			delete[] k;
		}
	}

	namespace fifthTask
	{
		void start()
		{
			int n = 0;
			cin >> n;
			cout << decision(n);
		}

		string decision(int n)
		{
			int max = 1;
			for (int i = 0; i < 62; ++i)
			{
				max *= 2;
			}
			max--;
			for (int i = 0; i < max; ++i)
			{
				for (int j = 0; j < i; ++j)
				{
					if ((i - j) * (i + j) == n)
					{
						return "Yes " + toString(i) + " " + toString(j);
					}
				}
			}
			return "No";
		}
	}
}



namespace allRus
{
	namespace zeroDay
	{
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

	namespace firstDay
	{
		class Photo
		{
		public:
			Photo()
			{
				cout << "n = ";
				cin >> this->n;
				cout << "m = ";
				cin >> this->m;

				this->begin = 0;

				this->a = new int[m];
				for (int i = 0; i < m; ++i)
				{
					cin >> a[i];
				}

				this->unchecked = new bool[n];
				for (int i = 0; i < n; ++i)
				{
					unchecked[i] = true;
				}

				if (!solved())
				{
					cout << "WTF?";
					return;
				}

				decision();
			}

			~Photo()
			{
				delete[] unchecked;
				delete[] a;
			}

		private:
			int n;
			int m;
			int* a;
			bool* unchecked;
			int begin;

			bool outside(int const* a, int const value, int const second)
			{
				for (int i = second + 1; i < m; ++i)
				{
					if (a[i] == value)
					{
						return true;
					}
				}

				return false;
			}

			bool step(int const* a, int const m) // error
			{
				if (m == 0 || m == 1 || m == 2 || m == 3)
					return true;
				// ïîèñê âòîðîãî âõîæäåíèÿ
				int second = 0;
				for (int i = 1; i < m; ++i)
				{
					if (a[i] == a[0])
					{
						second = i;
						break;
					}
				}

				if (second == m - 1)
					return step(a + 1, m - 2);
				// åñòü ëè ëèøíåå âíå ãðóïïû
				for (int i = 1; i < second; ++i)
				{
					if (a[i] != a[0] && outside(a, a[i], second))
					{
						return false;
					}
				}

				begin = second + 1;
				if (a[0] == 9)
				{
					cout << "IIIIIIIIIIIIIIIIgor'";
				}

				if (second == 0)
					return step(a + 1, m - 1);
				return step(a + 1, second - 1);
			}

			bool solved()
			{
				for (int i = 0; i < m; )
				{
					if (step(a + i, m - i))
					{
						if (i == begin)
							break;
						i = begin;
					}
					else
					{
						return false;
					}
				}

				return true;
			}

			int lastPosition(int const first)
			{
				int last = -1;

				for (int i = first; i < m; ++i)
				{
					if (a[i] == a[first])
						last = i;
				}

				return last;
			}

			void groupDecision(int const start, int const end)
			{
				for (int i = start + 1; i <= end - 1; )
				{
					if (unchecked[a[i]])
					{
						int last = lastPosition(i);
						cout << "group = " << a[i] << "; first = " << i + 1 << "; last = " << last + 1 << endl;
						unchecked[a[i]] = false;
						groupDecision(i, last);
						i = last + 1;
					}
					else
					{
						++i;
					}
				}
			}

			void decision()
			{
				for (int i = 0; i < m; )
				{
					int last = lastPosition(i);
					cout << "group = " << a[i] << "; first = " << i + 1 << "; last = " << last + 1 << endl;
					unchecked[a[i]] = false;
					groupDecision(i, last);
					i = last + 1;
				}
			}
		};

		class Taxi
		{
		private:
			int** snow;
			int m;
			int n;
			bool** check;

			void initializeChecked()
			{
				for (int i = 1; i < m + 1; ++i)
				{
					for (int j = 1; j < n + 1; ++j)
					{
						this->check[i][j] = true;
					}
				}

				for (int j = 0; j < n + 2; ++j)
				{
					this->check[0][j] = false;
					this->check[m + 1][j] = false;
				}

				for (int i = 0; i < m + 2; ++i)
				{
					this->check[i][0] = false;
					this->check[i][n + 1] = false;
				}
			}

			void snowAdd(int m = -1, int n = -1)
			{
				for (int i = 0; i < this->m; ++i)
				{
					for (int j = 0; i < this->n; ++i)
					{
						if (i != m && j != n)
							++this->snow[i][j];
					}
				}
			}

			void out(int x, int y, int k)
			{
				for (int i = 1; i < m + 1; ++i)
				{
					for (int j = 1; j < n + 1; ++j)
					{
						if (i == x && j == y)
						{
							SetColor(2, 0);
							cout << " t";
							SetColor(15, 0);
						}
						else
						{
							if (this->snow[i][j] < 10)
							{
								cout << " ";
							}
							if (this->snow[i][j] > k)
							{
								SetColor(4, 0);
								cout << this->snow[i][j];
								SetColor(15, 0);
							}
							else
							{
								cout << this->snow[i][j];
							}
						}
						cout << " ";
					}
					cout << endl;
				}
				SetColor(1, 0);
				cout << k << endl << endl;
				SetColor(15, 0);
				for (int i = 1; i < m + 1; ++i)
				{
					for (int j = 1; j < n + 1; ++j)
					{
						cout << this->check[i][j] << " ";
					}
					cout << endl;
				}
				cout << endl;

			}

			void move()
			{
				int move;
				cin >> move;
				int toDel = 0;
				if (move == 1)
				{
					cin >> toDel;
					for (int i = 0; i < n; ++i)
						snow[toDel][i] = 0;
					this->snowAdd(toDel, -1);
				}
				if (move == 2)
				{
					cin >> toDel;
					for (int i = 0; i < m; ++i)
						snow[i][toDel] = 0;
					this->snowAdd(-1, toDel);
				}
				if (move == 3)
				{
					int x1 = 0;
					int y1 = 0;
					int x2 = 0;
					int y2 = 0;
					int k = 0;
					cin >> x1 >> y1 >> x2 >> y2 >> k;
					initializeChecked();
					this->decision(x1, y1, x2, y2, k);
				}
			}

			bool isNeightbor(int const x1, int const y1, int const x2, int const y2)
			{
				int deltaX[4] = { 0, 1, -1, 0 };
				int deltaY[4] = { -1, 0, 0, 1 };

				for (int i = 0; i < 4; ++i)
				{
					if (x2 == x1 + deltaX[i] && y2 == y1 + deltaY[i])
					{
						return true;
					}
				}

				return false;
			}

			int decision(int const x1, int const y1, int const x2, int const y2, int const k, int cycle = 0)
			{
				check[x1][y1] = false;
				cout << cycle << endl;
				this->out(x1, y1, k);

				if (this->isNeightbor(x1, y1, x2, y2))
				{
					initializeChecked();
					return snow[x2][y2] <= k ? 1 : -1;
				}

				int min = m * n + 1;
				int length[4];
				for (int i = 0; i < 4; ++i)
				{
					length[i] = min;
				}

				if (check[x1][y1 - 1] && snow[x1][y1 - 1] <= k)
				{
					length[0] = decision(x1, y1 - 1, x2, y2, k, cycle + 1) + 1;
				}

				if (check[x1][y1 + 1] && snow[x1][y1 + 1] <= k)
				{
					length[1] = decision(x1, y1 + 1, x2, y2, k, cycle + 1) + 1;
				}

				if (check[x1 - 1][y1] && snow[x1 - 1][y1] <= k)
				{
					length[2] = decision(x1 - 1, y1, x2, y2, k, cycle + 1) + 1;
				}

				if (check[x1 + 1][y1] && snow[x1 + 1][y1] <= k)
				{
					length[3] = decision(x1 + 1, y1, x2, y2, k, cycle + 1) + 1;
				}

				for (int i = 0; i < 4; ++i)
				{
					if (length[i] < min && length[i] > -1)
					{
						min = length[i];
					}
				}

				if (min == m * n + 1)
				{
					return -1;
				}

				this->check[x1][y1] = true;
				return min + 1;
			}

			int iterDecision(int x1, int y1, int const x2, int const y2, int const k)
			{
				int res = 0;
				int x = x1;
				int y = y1;
				int hres = 0;
				if (x1 < x2)
				{
					while (this->check[x][y1] != false)
					{
						++x;
						++hres;
					}
				}
			}

		public:

			Taxi()
			{
				int q = 0;
				cin >> this->m >> this->n >> q;
				this->snow = new int* [m + 1];
				for (int i = 0; i < m + 1; ++i)
				{
					this->snow[i] = new int[n + 1];
				}

				for (int i = 0; i < m + 1; ++i)
				{
					for (int j = 0; j < n + 1; ++j)
					{
						this->snow[i][j] = 0;
					}
				}

				this->check = new bool* [m + 2];
				for (int i = 0; i < m + 2; ++i)
				{
					this->check[i] = new bool[n + 2];
				}

				for (int i = 0; i < q; ++i)
				{
					this->move();
				}
			}

			~Taxi()
			{
				for (int i = 0; i < m; ++i)
				{
					delete[] this->snow[i];
					delete[] this->check[i];
				}

				delete[] this->snow;
				delete[] this->check;
			}
		};

		class Graf
		{
		private:
			int** d;
			int* ways;

			bool decision(int end, int time, double p, int currentLength, int n, int currentIndex)
			{
				if (currentIndex == end)
				{
					return false;
				}

				if (this->d[currentIndex][end] + currentLength >= time && this->d[currentIndex][end] + currentLength <= p / (p - 1) * time)
				{
					return true;
				}

				return decision(end, time, p, currentLength + d[currentIndex][currentIndex + 1], n, currentIndex + 1);
			}

			string toString(int data)
			{
				string res = "";
				while (data != 0)
				{
					if (data % 10 == 0)
						res = res + "0";
					if (data % 10 == 1)
						res = res + "1";
					if (data % 10 == 2)
						res = res + "2";
					if (data % 10 == 3)
						res = res + "3";
					if (data % 10 == 4)
						res = res + "4";
					if (data % 10 == 5)
						res = res + "5";
					if (data % 10 == 6)
						res = res + "6";
					if (data % 10 == 7)
						res = res + "7";
					if (data % 10 == 8)
						res = res + "8";
					if (data % 10 == 9)
						res = res + "9";
					data /= 10;
				}
				return res;
			}

			int* deickstra(int** a, int n)
			{
				int* d = new int[n];

				for (int i = 1; i < n; ++i)
				{
					d[i] = a[0][i];
				}

				int min = 1000;
				int minIndex = 1;
				for (int i = 1; i < n; ++i)
				{
					min = 1000;
					minIndex = i;
					for (int j = 0; j < n; ++j)
					{
						if (a[i][j] < min)
						{
							min = a[i][j];
							minIndex = j;
						}
					}

					for (int j = 0; j < n; ++j)
					{
						d[j] = min(d[j], d[minIndex] + a[minIndex][j]);
					}
				}
				return d;
			}

		public:
			Graf()
			{
				int t = 0;
				int n = 0;
				int m = 0;
				int q = 0;
				double p = 0;
				cin >> t;
				for (int i = 0; i < t; ++i)
				{
					cin >> n >> m >> q >> p;
					this->d = new int* [n];
					this->ways = new int[n];
					for (int j = 0; j < n; ++j)
					{
						this->d[j] = new int[n];
						for (int z = 0; z < n; ++z)
						{
							if (z != j)
							{
								this->d[j][z] = 1000 / 2;
							}
							else
							{
								this->d[j][z] = 0;
							}
						}
						this->ways[j] = 0;
					}

					for (int j = 0; j < m; ++j)
					{
						int first = 0;
						int second = 0;
						int length = 0;
						cin >> first >> second >> length;
						this->d[first - 1][second - 1] = length;
						this->d[second - 1][first - 1] = length;
					}

					for (int j = 1; j < n; ++j)
					{
						this->ways[j] = this->d[0][j];
					}

					/*	for (int j = 0; j < n; ++j)
					{
						for (int z = 0; z < n; ++z)
						{
							cout << this->d[j][z];
							for (int x = 1; x < 12 - toString(d[j][z]).length(); ++x)
							{
								cout << " ";
							}
						}
						cout << endl;
					}*/

					// :(:
					string result = "";
					/ int* way = new int* [n];
					for (int j = 0; j < n; ++j)
					{
						way[j] = new int[n];
					}*/

						int* res = this->deickstra(this->d, n);
					////for (int j = 0; j < n; ++j)
					////{
					////	//start help deickstra
					////	int** help = new int*[n - j];
					////	for (int z = 0; z < n - j; ++z)
					////	{
					////		help[z] = new int[n - j];
					////	}
					////	for (int z = 0; z < n - j; ++z)
					////	{
					////		for (int x = 0; x < n - j; ++x)
					////		{
					////			help[z][x] = this->d[z + n - j][x + n - j];
					////		}
					////	}
					//
					////	int* helpDeicstra = this->deickstra(help, n - j);
					//
					////	for (int z = 0; z < n - j; ++z)
					////	{
					////		delete[] help[z];
					////	}
					////	delete[] help;
					////	//end help deickstra
					////	int cur = 0;
					////	int* helpArray = new int[n - j];
					////	for (int z = n - j; z < n; ++z)
					////	{
					////		helpArray[cur] = helpDeicstra[z];
					////		++cur;
					////	}
					//
					////	for (int z = 0; z < j; ++z)
					////	{
					////		way[j][z] = way[0][z];
					////	}
					//
					////	for (int z = 0; z < n; ++z)
					////	{
					////		way[j][z] = helpArray[z];
					////	}
					////	delete[] helpArray;
					////}

					for (int j = 0; j < q; ++j)
					{
						int wayEnd = 0;
						int maxTime = 0;
						bool able = false;
						cin >> wayEnd >> maxTime;
						/*for (int z = 0; z < n; ++z)
						{
							if (ways[wayEnd - 1] >= maxTime && res[wayEnd - 1] <= (p / (p - 1) * maxTime))
							{
								result += "1";
							}
						}*/
						{
							result += "1";
						}
						/*else
						{
							result += "0";
						}*/
					}

					for (int j = 0; j < n; ++j)
					{
						//delete[] way[j];
						delete[] d[j];
					}
					//delete[] way;
					delete[] d;
					delete[] ways;

					cout << result;
					cout << endl;
				}
			}
		};
	}
}

namespace hz
{
	namespace start
	{
		namespace firstTask
		{
			bool isAble(int x, int y, int n, int m, char** island, bool** crocodiles)
			{
				if (island[x][y] == '.')
				{
					return false;
				}

				if (island[x][y] == 'N')
				{
					for (int i = x - 1; i >= 0; i--)
						if (crocodiles[i][y])
							return false;
				}

				if (island[x][y] == 'S')
				{
					for (int i = x + 1; i < n; ++i)
						if (crocodiles[i][y])
							return false;
				}

				if (island[x][y] == 'W')
				{
					for (int i = y - 1; i >= 0; i--)
						if (crocodiles[x][i])
							return false;
				}

				if (island[x][y] == 'E')
				{
					for (int i = y + 1; i < m; ++i)
						if (crocodiles[x][i])
							return false;
				}

				return true;
			}

			int decision(int n, int m, char** island, bool** crocodiles, int res)
			{
				bool able = false;
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m; ++j)
					{
						if (crocodiles[i][j] == true && isAble(i, j, n, m, island, crocodiles))
						{
							crocodiles[i][j] = false;
							able = true;
							break;
						}
					}
					if (able)
						break;
				}
				if (able)
				{
					return decision(n, m, island, crocodiles, res + 1);
				}
				else
				{
					return res;
				}
			}

			void start()
			{
				int n = 0;
				int m = 0;
				cin >> n >> m;
				char** island = new char* [n];
				bool** crocodiles = new bool* [n];
				for (int i = 0; i < n; ++i)
				{
					island[i] = new char[m];
					crocodiles[i] = new bool[m];
				}

				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m; ++j)
					{
						cin >> island[i][j];
						if (island[i][j] == '.')
						{
							crocodiles[i][j] = false;
						}
						else
						{
							crocodiles[i][j] = true;
						}
					}
				}

				cout << decision(n, m, island, crocodiles, 0) << endl;

				for (int i = 0; i < n; ++i)
				{
					delete[] island[i];
					delete[] crocodiles[i];
				}
				delete[] island;
				delete[] crocodiles;
			}
		}

		namespace secondTask
		{
			string decision(long long int a, long long int b, long long int c, long long int n)
			{
				string res = "";
				long long int max = 0;
				for (long long int i = 1; i < n; ++i)
				{
					for (long long int j = 1; j < n; ++j)
					{
						for (long long int k = 1; k < n; ++k)
						{
							if (i * a + j * b + k * c <= n && i * j * k > max)
							{
								max = i * j * k;
								res = toString(i * a) + " " + toString(j * b) + " " + toString(k * c);
							}
						}
					}
				}
				return res;
			}

			void start()
			{
				//long long int start = time(0);
				long long int a = 0;
				long long int b = 0;
				long long int c = 0;
				long long int	n = 0;
				cin >> a >> b >> c >> n;
				cout << decision(a, b, c, n);
				//long long int end = time(0);
				//mcout << endl << end - start; //(end - start) / 1000 << "." << (end - start) % 1000;
			}
		}
	}


}
#include <string>
using namespace std;

int main()
{
	int start = time(0);
	cout << olimpic8910::num(1, 1000000000);

	cout << endl << time(0) - start;
	return 0;
}