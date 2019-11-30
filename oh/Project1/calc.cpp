#include <iostream>
#include < cstdlib > 
#include <ctime>
#include <string>

using namespace std;

namespace calc
{
	int breaks(string const input);

	int mainBody()
	{
		string input = "";
		cin >> input;
		//breaks(input);
		return 0;
	}

	int breaks(string const input)
	{
	/*	string a[100];
		float b[100];
		int k = 0;
		int x = 0;
		bool BreaksRight = false;
		bool Breaks = false;
		int j = 0;
		int y = 0;
		for (int i = 0; i < 100; ++i)
		{
			b[i] = 0;
		}
		for (int i = 0; i < 100; ++i)
		{
			a[i] = "";
		}
		for (int i = 0; i < input.length(); ++i)
		{
			if (input[i] == '(')
			{
				++i;
				j = 1;
				x = 1;
				while (input[i] != ')' && x == 1)
				{
					if (input[i] == '+' ||
						input[i] == '-' ||
						input[i] == '*' ||
						input[i] == '/' ||
						input[i] == '%' &&
						input[i + 2] == '1' ||
						input[i + 2] == '2' ||
						input[i + 2] == '3' ||
						input[i + 2] == '4' ||
						input[i + 2] == '5' ||
						input[i + 2] == '6' ||
						input[i + 2] == '7' ||
						input[i + 2] == '8' ||
						input[i + 2] == '9' ||
						input[i + 2] == '(' &&
						input[i - 2] == '1' ||
						input[i - 2] == '2' ||
						input[i - 2] == '3' ||
						input[i - 2] == '4' ||
						input[i - 2] == '5' ||
						input[i - 2] == '6' ||
						input[i - 2] == '7' ||
						input[i - 2] == '8' ||
						input[i - 2] == '9' ||
						input[i - 2] == ')')
					{
						BreaksRight = true;
					}
					if (input[i] == '(')
					{
						x += 1;
						Breaks = true;
					}
					if (input[i] == ')' && x != 1)
					{
						x -= 1;
					}
					++i;
					a[k] += input[i];
				}
				if (Breaks == true)
				{
					breaks(a[k]);
				}
				else 
				{
					for (int l = j; l < i; ++l)
					{
						if (input[l] == '0' && l == j)
						{
							cout << "error";
							break;
						}
						if (input[i] == 1 ||
							input[i] == 2 ||
							input[i] == 3 ||
							input[i] == 4 ||
							input[i] == 5 ||
							input[i] == 6 ||
							input[i] == 7 ||
							input[i] == 8 ||
							input[i] == 9 && l == j)
						{
							while (input[l] != ' ')
							{
								if (input[l] == 0)
								{
									b[y] = b[y] * 10;
								}
								if (input[l] == 1)
								{
									b[y] = b[y] * 10 + 1;
								}
								if (input[l] == 2)
								{
									b[y] = b[y] * 10 + 2;
								}
								if (input[l] == 3)
								{
									b[y] = b[y] * 10 + 3;
								}
								if (input[l] == 4)
								{
									b[y] = b[y] * 10 + 4;
								}
								if (input[l] == 5)
								{
									b[y] = b[y] * 10 + 5;
								}
								if (input[l] == 6)
								{
									b[y] = b[y] * 10 + 6;
								}
								if (input[l] == 7)
								{
									b[y] = b[y] * 10 + 7;
								}
								if (input[l] == 8)
								{
									b[y] = b[y] * 10 + 8;
								}
								if (input[l] == 9)
								{
									b[y] = b[y] * 10 + 9;
								}
								++l;
							}
							result += a[k];
							++k;
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
		}*/
		return 0;
	}
}