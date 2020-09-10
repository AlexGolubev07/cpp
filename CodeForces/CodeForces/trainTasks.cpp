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
		int x1 = 0;
		int x2 = 0;
		int y1 = 0;
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
				if (x2 < nearestX2)
					unable = true;
			}
			if (x2 < nearestX2)
				nearestX2 = x2;
			if (y1 > nearestY1)
			{
				nearestY1 = y1;
				if (y2 < nearestY2)
					unable = true;
			}
			if (y2 < nearestY2)
				nearestY2 = y2;
			if (abs(x1) > abs(x2) || abs(y1) > abs(y2))
				unable = true;
		}
		if (unable == true || abs(x1) > abs(x2) || abs(y1) > abs(y2))
			return 0;
		return (abs(x2) - abs(x1)) * (abs(y2) - abs(y1));
	}

	void line( int n, int m,int plus, int first, int maxm)
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
			if (n >= m)
			{
				if (m + i + 1 >= n)
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

	void boringLesson(int n, int m)
 	{
		int first = 1;
		line(n, 0, 0, 1, m);
		int plus = 1;
		for (int i = 1; i < m; ++i)
		{
			if(plus <= m)
				++plus;
			first += plus;
			line(n, i, plus, first, m);
		}
	}

	void E(int x, int y)
	{
		int sqrty = sqrt(y);
		int* array = new int[sqrty];
		int cur = 0;
		while (y != 1)
		{
			for (int i = 2; i < sqrty + 4; ++i)
			{
				if (y % i == 0)
				{
					y /= i;
					array[cur] = i;
					++cur;
					for (int j = 0; j < cur; ++j)
					{
						if (array[j] + array[cur - 1] == x)
						{
							cout << array[j] << " " << array[cur];
							return;
						}
					}
				}
			}
		}
		cout << "-1";
	}

	class List
	{
	private:
		class Node
		{
		public:
			int data;
			Node* next;
			Node* previous;

			Node(int data, Node* previous = nullptr, Node* next = nullptr)
			{
				this->data = data;
				this->next = next;
				this->previous = previous;
			}
		};

		void delNode(Node* toDel, Node* toPaste)
		{
			Node* previous = toDel->previous;
			previous->next = toPaste;
			toPaste->previous = previous;
			delete toDel;
		}

		Node* head;
		int length;
	public:

		List(int n)
		{
			this->length = n;
			int num = 0;
			Node* current = this->head;
			this->head = current;
			cin >> num;
			current = new Node(num);
			for (int i = 0; i < n; ++i)
			{
				cin >> num;
				current->next = new Node(num, current);
				current = current->next;
			}
			current->next = this->head;
			this->head->previous = current;
		}

		void decision()
		{
			Node* current = this->head;
			bool cycle = true;
			while (cycle == true)
			{
				if (current == this->head)
				{
					cycle = false;
				}

				if (current->data > 0 && current->next->data < 0)
				{
					cycle = true;
					if (current->data == abs(current->next->data))
					{
						current = current->next->next;
						delNode(current->previous->previous, current->previous);
						delNode(current->previous, current);
						this->length -= 2;
					}
					else
					{
						if (current->data > abs(current->next->data))
						{
							delNode(current->next, current->next->next);
							current = current->next;
							--this->length;
							
						}
						else
						{
							current = current->next;
							delNode(current->previous, current);
							--this->length;
						}
					}
				}
			}
			current = this->head;
			cout << this->length << endl;
			while (current->next != this->head)
			{
				cout << current->data << " ";
				current = current->next;
			}
			cout << current->data;
		}
	};
}