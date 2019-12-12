#include <iostream>
#include < cstdlib > 
#include <ctime>
#include <string>

using namespace std;

namespace calc
{
	int breaks(string const input, int const k1, int const number1, int const y1);

	int mainBody()
	{
		string input = "";
		cin >> input;
		int k = 0;
		int number = 0;
		int y = 0;
		sqrt = false;
		breaks(input, k, number, y);
		return 0;
	}

	int breaks(string const input, int const k1, int const number1, int const y1)
	{
		string a[100][100];
		int b[100];
		int k = k1;
		int x = 0;
		int number = number1;
		bool BreaksRight = false;
		bool Breaks = false;
		int j = 0;
		int y = y1;
		int first = 0;
		int last = 0;
		for (int i = 0; i < 100; ++i)
		{
			b[i] = 0;
		}
		for (int i = 0; i < 100; ++i)
		{
			for (number = 0; number < 100; ++number)
			{
				a[i][number] = "";
			}
		}
		number = 0;
		for (int w = 0; w < input.length(); ++w)
		{
			if (input[w] == '(')
			{
				++w;
				j = 1;
				x = 1;
				while (input[w] != ')' && x == 1)
				{
					if (input[w] == '+' ||
						input[w] == '-' ||
						input[w] == '*' ||
						input[w] == '/' ||
						input[w] == '%' &&
						input[w + 2] == '1' ||
						input[w + 2] == '2' ||
						input[w + 2] == '3' ||
						input[w + 2] == '4' ||
						input[w + 2] == '5' ||
						input[w + 2] == '6' ||
						input[w + 2] == '7' ||
						input[w + 2] == '8' ||
						input[w + 2] == '9' ||
						input[w + 2] == '(' &&
						input[w - 2] == '1' ||
						input[w - 2] == '2' ||
						input[w - 2] == '3' ||
						input[w - 2] == '4' ||
						input[w - 2] == '5' ||
						input[w - 2] == '6' ||
						input[w - 2] == '7' ||
						input[w - 2] == '8' ||
						input[w - 2] == '9' ||
						input[w - 2] == ')')
					{
						BreaksRight = true;
					}
					if (input[w] == '(' && input[w - 1] != 't')
					{
						x += 1;
						Breaks = true;
						sqrt = true;
					}
					if (input[w] == ')' && x != 1 && sqrt != true)
					{
						x -= 1;
					}
					++w;
					a[k][number] += input[w];
				}
				if (Breaks == true)
				{
					++number;
					breaks(a[k][number - 1], k, number, y);
				}
				else
				{
					for (int l = j; l < i; ++l)
					{
						for (int i = 0; i < a[k][number].length(); ++i) // sqrt & multiplication & division & reminder of divivsion & degree
						{

							if (a[k][number][i] == '*')
							{
								multiplication();
							}

							if (a[k][number][i] == '/')
							{
								division();
							}

							if (a[k][number][i] == '%')
							{
								reminderOfDivision();
							}

							if (a[k][number][i] == '|' && a[k][number][i + 1] == '|')
							{
								coompilation();
							}

							if (a[k][number][i] == '^')
							{
								degree();
							}

							if (a[k][number][i] == 't' && a[k][number][i - 1] == 'r' && a[k][number][i - 2] == 'q' && a[k][number][i - 3] == 's')
							{
								sqrt1();
							}
						}
						for (int i = 0; i < a[k][number].length(); ++i) // plus & minus
						{
							if (a[k][number][i] == '-')
							{
								minus();
							}

							if (a[k][number][i] == '+')
							{
								plus();
							}
						}
					}
				}
				++k;
			}
			if (BreaksRight == true)
			{
				BreaksRight = false;
			}
			else
			{
				cout << "error";
				break;
			}
		}
	}

	int multiplication()
	{
		if (a[k][number][i] == '*') // multiplication begin
		{
			i -= 2;
			while (a[k][number][i] != ' ' || a[k][number][i] != '(')
			{
				--i;
			}
			int first = i + 1;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				++i;
			}
			++y;
			while (a[k][number][i] != '*')
			{
				++i;
			}
			i += 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				++i;
			}
			int last = i;
			b[y - 1] *= b[y];
			a[k][number].erase(first, last);
			//a[k][number].insert(to_string(b[y - 1]), first, (first + (to_string(b[y - 1])).length());
			b[y] = 0;
		}
		// multiplication end
	}

	int division()
	{
		if (a[k][number][i] == '/') // division begin
		{
			i -= 2;
			while (a[k][number][i] != ' ' || a[k][number][i] != '(')
			{
				--i;
			}
			int first = i + 1;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i + 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				--i;
			}
			++y;
			while (a[k][number][i] != '*')
			{
				++i;
			}
			i += 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				++i;
			}
			int last = i - 1;
			b[y - 1] /= b[y];
			a[k][number].erase(first, last);
			//a[k][number].insert(to_string(b[y - 1]), first, (first + (to_string(b[y - 1])).length());
			b[y] = 0;
		}
		// division end
	}

	int reminderOfDivision()
	{
		if (a[k][number][i] == '%') // remainder of division begin
		{
			i -= 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				--i;
			}
			int first = i;
			++y;
			while (a[k][number][i] != '%')
			{
				++i;
			}
			i += 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				++i;
			}
			int last = 1;
			a[k][number].erase(first, last);
			//a[k][number].insert(to_string(b[y - 1]), first, (first + (to_string(b[y - 1])).length());
			b[y - 1] %= b[y];
			b[y] = 0;
		}
		//remainder of division end
	}

	int coompilation()
	{
		if (a[k][number][i] == '|' && a[k][number][i + 1] == '|')
		{
			int length = 1;
			i -= 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				--i;
			}
			int first = i;
			++y;
			while (a[k][number][i] != '|')
			{
				++i;
			}
			i += 3;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
					length *= 10;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
					length *= 10;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
					length *= 10;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
					length *= 10;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
					length *= 10;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
					length *= 10;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
					length *= 10;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
					length *= 10;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
					length *= 10;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
					length *= 10;
				}
				if (a[k][number][i] == '-')
				{
					cout << "error";
					return;
				}
				++i;
			}
			int last = i;
			b[y - 1] = b[y - 1] * length + b[y];
			a[k][number].erase(first, last);
			//a[k][number].insert(to_string(b[y - 1]), first, (first + (to_string(b[y - 1])).length());
			b[y] = 0;
		}
	}

	int degree()
	{
		if (a[k][number][i] == '^')//degree begin
		{
			i -= 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				--i;
			}
			int first = i;
			++y;
			while (a[k][number][i] != '^')
			{
				++i;
			}
			i += 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-')
				{
					cout << "error";
					return;
				}
				++i;
			}
			int last = i;
			int number2 = b[y - 1];
			for (int replays = 0; replays < b[y]; ++replays)
			{
				b[y - 1] *= number2;
			}
			a[k][number].erase(first, last);
			//a[k][number].insert(to_string(b[y - 1), first, (first + (to_string(b[y - 1])).length());
			b[y] = 0;
		}
		//degree end
	}

	int minus()
	{
		if (a[k][number][i] == '-') // minus begin
		{
			i -= 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				--i;
			}
			int first = i;
			++y;
			while (a[k][number][i] != '*')
			{
				++i;
			}
			i += 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				++i;
			}
			int last = i;
			b[y - 1] -= b[y];
			a[k][number].erase(first, last);
			//a[k][number].insert(to_string(b[y - 1]), first, (first + (to_string(b[y - 1])).length());
			b[y] = 0;
		}
		// minus end
	}

	int plus()
	{
		if (a[k][number][i] == '+') // minus begin
		{
			i -= 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				--i;
			}
			int first = i;
			++y;
			while (a[k][number][i] != '*')
			{
				++i;
			}
			i += 2;
			while (a[k][number][i] != ' ')
			{
				if (a[k][number][i] == '1')
				{
					b[y] = b[y] * 10 + 1;
				}
				if (a[k][number][i] == '2')
				{
					b[y] = b[y] * 10 + 2;
				}
				if (a[k][number][i] == '3')
				{
					b[y] = b[y] * 10 + 3;
				}
				if (a[k][number][i] == '4')
				{
					b[y] = b[y] * 10 + 4;
				}
				if (a[k][number][i] == '5')
				{
					b[y] = b[y] * 10 + 5;
				}
				if (a[k][number][i] == '6')
				{
					b[y] = b[y] * 10 + 6;
				}
				if (a[k][number][i] == '7')
				{
					b[y] = b[y] * 10 + 7;
				}
				if (a[k][number][i] == '8')
				{
					b[y] = b[y] * 10 + 8;
				}
				if (a[k][number][i] == '9')
				{
					b[y] = b[y] * 10 + 9;
				}
				if (a[k][number][i] == '0' && a[k][number][i] != ' ')
				{
					b[y] = b[y] * 10;
				}
				if (a[k][number][i] == '-' && a[k][number][i - 1] != ' ')
				{
					cout << "error";
					return;
				}
				else
				{
					b[y] -= 2 * b[y];
				}
				++i;
			}
			int last = i;
			b[y - 1] += b[y];
			a[k][number].erase(first, last);
			//a[k][number].insert(to_string(b[y - 1]), first, (first + (to_string(b[y - 1])).length());
			b[y] = 0;
		}
		// minus end
	}

	int sqrt1()
	{
		if (a[k][number][i] == 's' && a[k][number][i] == 'q' && a[k][number][i] == 'r' && a[k][number][i] == 't'&&)
		{
			i += 5;
			while (a[k][number][i] != ')')
			{
				if (a[k][number][i] == '*')
				{
					multiplication();
				}

				if (a[k][number][i] == '/')
				{
					division();
				}

				if (a[k][number][i] == '%')
				{
					reminderOfDivision();
				}

				if (a[k][number][i] == '|' && a[k][number][i + 1] == '|')
				{
					coompilation();
				}

				if (a[k][number][i] == '^')
				{
					degree();
				}

				if (a[k][number][i] == 't' && a[k][number][i - 1] == 'r' && a[k][number][i - 2] == 'q' && a[k][number][i - 3] == [s])
				{
					sqrt1();
				}
				++i;
			}
			while (a[k][number][i] != '(')
			{
				--i;
			}
			++i;
			while (a[k][number][i] != ')')
			{
				minus();

				plus();
			}
		}
	}
}