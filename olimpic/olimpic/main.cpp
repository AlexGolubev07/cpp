#include <iostream>
#include <cassert>
#include "windows.h"

using namespace std;

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
			if ((INT_MAX / 10) < res)
			{
				cout << "data too big" << endl;
				return 0;
			}
			res *= 10;
		}
		return res / 10;
	}
};

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
		private:
			static int begin;

			static bool outside(int const* a, int const m, int const value, int const second)
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

			static bool step(int const* a, int const m)
			{
				if (m == 0 || m == 1 || m == 2)
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
					return true;
				// åñòü ëè ëèøíåå âíå ãðóïïû
				for (int i = 1; i < second; ++i)
				{
					if (a[i] != a[0] && outside(a, m, a[i], second))
					{
						return false;
					}
				}

				begin = second + 1;
				return step(a + 1, second - 1);
			}

			static bool solved(int const* a, int const m)
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

		public:
			static void photo(int begin = 0)
			{
				Photo::begin = begin;
				int l = 0;
				int m = 0;
				cin >> l >> m;
				int* array = new int[l];
				for (int i = 0; i < l; ++i)
					cin >> array[i];
				cout << Photo::solved(array, l); // Bce nloxo
			}
		};

		/*string firstHelp(string current, string res)
		{
			return "0";
		}*/
	}
}

#include <string>
using namespace std;

int allRus::firstDay::Photo::begin = 0;

int main()
{
	allRus::firstDay::Photo check;
	check.photo(0);
	return 0;
}