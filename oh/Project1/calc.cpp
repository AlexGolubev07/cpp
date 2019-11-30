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
		string a[100][100];
		int b[100];
		int k = 0;
		int x = 0;
		int number = 0;
		bool BreaksRight = false;
		bool Breaks = false;
		int j = 0;
		int y = 0;
		for (int i = 0; i < 100; ++i)
		{
			b[i]= 0;
		}
		for (int i = 0; i < 100; ++i)
		{
			for (number = 0; number < 100; ++number)
			{
				a[i][number] = "";
			}
		}
		number = 0;
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
					a[k][number] += input[i];
				}
				if (Breaks == true)
				{
					++number;
					breaks(a[k][number - 1]);
				}
				else 
				{
					for (int l = j; l < i; ++l)
					{
						for (int i = 0; i < a[k][number].length(); ++i) // breckets
						{
							if (a[k][number][i] == '*') // multiplication begin
							{
								i -= 2;
								while (a[k][number][i] != ' ')
								{
									if(a[k][number][i]== '1')
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
									++i;
								}
								b[y - 1] *= b[y];
							}
							// multiplication end

							if (a[k][number][i] == '/') // division begin
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
									++i;
								}
								b[y - 1] /= b[y];
							}
							// division end

							if (a[k][number][i] == '*') // remainder of division begin
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
									--i;
								}
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
									++i;
								}
								b[y - 1] %= b[y];
							}
							//remainder of division end

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
		return 0;
	}
}