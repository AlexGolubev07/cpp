#include <iostream>
#include < cstdlib > 
#include <ctime>
#include <string>

using namespace std;

namespace games
{
	void oralAccount()
	{
		int n = 0;
		int range = 0;
		string complexity;
		bool notInsane = true;
		cout << "enter: easy, medium, hard or insane";
		cin >> complexity;
		if (complexity == "easy")
		{
			n = 3;
			range = 20;
		}
		else
		{
			if (complexity == "medium")
			{
				n = 5;
				range = 50;
			}
			else
			{
				if (complexity == "hard")
				{
					n = 7;
					range = 70;
				}
				else
				{
					if (complexity == "insane")
					{
						n = 10;
						notInsane = false;
						range = 100;
					}
					else
					{
						cout << "enter right form";
						oralAccount();
					}
				}
			}
		}
		int answersRight = 0;
		for (int i = 0; i < n; ++i)
		{
			srand(time(0));
			int number1 = rand() % range;
			int number2 = rand() % range;
			int rightAnswer = number1 * number2;
			cout << number1 << " * " << number2;
			if (notInsane == false)
			{
				int number3 = rand() % range;
				cout << " * " << number3;
				rightAnswer *= number3;
			}
			int sameAnswer = 0;
			cin >> sameAnswer;
			if (sameAnswer == rightAnswer)
			{
				cout << " right" << endl;
				++answersRight;
			}
			else
			{
				cout << " wrong" << endl;
			}
		}
		if (answersRight == n && n == 10)
		{
			cout << endl << answersRight << endl << "How did you do it?";
		}
		if (answersRight > 7 && n == 10)
		{
			cout << endl << answersRight << endl << "You are good!";
		}
		if (answersRight >= 5 && n == 10)
		{
			cout << endl << answersRight << endl << "So, it`s OK!";
		}
		if (answersRight == 4 && n == 10)
		{
			cout << endl << answersRight << endl << "Practice more!";
		}
		if (answersRight < 3 && n == 10)
		{
			cout << endl << answersRight << endl << "Try again with easily level!";
		}
		if (answersRight == n && n == 7)
		{
			cout << endl << answersRight << endl << "You are good!";
		}
		if (answersRight >= 4 && n == 7)
		{
			cout << endl << answersRight << endl << "So, it`s OK!";
		}
		if (answersRight < 4 && n == 7)
		{
			cout << endl << answersRight << endl << "Try again with easily level!";
		}
		if (answersRight >= 4 && n == 5)
		{
			cout << endl << answersRight << endl << "So, it`s OK!";
		}
		if (answersRight <= 3 && n == 5 && answersRight > 1)
		{
			cout << endl << answersRight << endl << "Practice more!";
		}
		if (answersRight == 1 && n == 5)
		{
			cout << endl << answersRight << endl << "Practice more!";
		}
		if (answersRight == 3 && n == 3)
		{
			cout << endl << answersRight << endl << "So, it`s OK";
		}
		if (answersRight <= 2 && n == 3)
		{
			cout << endl << answersRight << endl << "Math isn`t your";
		}
		cout << endl << "retry?";
		string retry;
		cin >> retry;
		if (retry == "yes")
		{
			oralAccount();
		}
		//end of code for first game
	}

	void tryYourLuck()
	{
		srand(time(0));
		int randowDigit = rand() % 10;
		int enterDigit = 0;
		cin >> enterDigit;
		cout << "Enter one number from 0 to 10";
		if (enterDigit == randowDigit)
		{
			cout << "Right!You are lacky!";
		}
		else
		{
			cout << "Wrong";
			tryYourLuck();
		}
	}
	//end of code for 
	void reverter()
	{
		string input = "";
		cout << "Enter word to revert..." << endl;
		cin >> input;
		string output = "";
		for (int i = 1; i <= input.length(); ++i)
		{
			output += input[input.length() - i];
		}
		cout << output;
	}

	string cesar(string const word, int const shift)
	{
		string alphabet = "abcdefghijklmnopqrstuvwxyz";
		string result = "";
		for (int i = 0; i < word.length(); ++i)
		{
			char letter = word[i];
			if (letter == ' ')
			{
				result += ' ';
				continue;
			}
			int position = alphabet.find(letter) + shift;
			result += alphabet[position % 26];
		}

		return result;
	}

	int calc()
	{
		string input = "";
		cin >> input;
		int a[100];
		int result = 0;
		int k = 0;
		char zero = ' ';
		for (int i = 0; i < 100; ++i)
		{
			a[i] = 0;
		}
		for (int i = 0; i < input.length(); ++i)
		{
			if (input[i] == 0 ||
				input[i] == 1 ||
				input[i] == 2 ||
				input[i] == 3 ||
				input[i] == 4 ||
				input[i] == 5 ||
				input[i] == 6 ||
				input[i] == 7 ||
				input[i] == 8 ||
				input[i] == 9)
			{
				while (input[i] != zero)
				{
					if (input[i] == 0)
					{
						a[k] = a[k] * 10;
					}
					if (input[i] == 1)
					{
						a[k] = a[k] * 10 + 1;
					}
					if (input[i] == 2)
					{
						a[k] = a[k] * 10 + 2;
					}
					if (input[i] == 3)
					{
						a[k] = a[k] * 10 + 3;
					}
					if (input[i] == 4)
					{
						a[k] = a[k] * 10 + 4;
					}
					if (input[i] == 5)
					{
						a[k] = a[k] * 10 + 5;
					}
					if (input[i] == 5)
					{
						a[k] = a[k] * 10 + 5;
					}
					if (input[i] == 6)
					{
						a[k] = a[k] * 10 + 6;
					}
					if (input[i] == 7)
					{
						a[k] = a[k] * 10 + 7;
					}
					if (input[i] == 8)
					{
						a[k] = a[k] * 10 + 8;
					}
					if (input[i] == 9)
					{
						a[k] = a[k] * 10 + 9;
					}
					++i;
				}
				result += a[k];
				++k;
			}

			if (input[i] == '+')
			{
				++i;
				while (input[i] != zero)
				{
					if (input[i] == 0)
					{
						a[k] = a[k] * 10;
					}
					if (input[i] == 1)
					{
						a[k] = a[k] * 10 + 1;
					}
					if (input[i] == 2)
					{
						a[k] = a[k] * 10 + 2;
					}
					if (input[i] == 3)
					{
						a[k] = a[k] * 10 + 3;
					}
					if (input[i] == 4)
					{
						a[k] = a[k] * 10 + 4;
					}
					if (input[i] == 5)
					{
						a[k] = a[k] * 10 + 5;
					}
					if (input[i] == 5)
					{
						a[k] = a[k] * 10 + 5;
					}
					if (input[i] == 6)
					{
						a[k] = a[k] * 10 + 6;
					}
					if (input[i] == 7)
					{
						a[k] = a[k] * 10 + 7;
					}
					if (input[i] == 8)
					{
						a[k] = a[k] * 10 + 8;
					}
					if (input[i] == 9)
					{
						a[k] = a[k] * 10 + 9;
					}
					++i;
				}
				if (input[i + 1] != '*')
				{
					result += a[k];
				}
				else
				{
					++k;
					++i;
					while (input[i] != zero)
					{
						if (input[i] == 0)
						{
							a[k] = a[k] * 10;
						}
						if (input[i] == 1)
						{
							a[k] = a[k] * 10 + 1;
						}
						if (input[i] == 2)
						{
							a[k] = a[k] * 10 + 2;
						}
						if (input[i] == 3)
						{
							a[k] = a[k] * 10 + 3;
						}
						if (input[i] == 4)
						{
							a[k] = a[k] * 10 + 4;
						}
						if (input[i] == 5)
						{
							a[k] = a[k] * 10 + 5;
						}
						if (input[i] == 5)
						{
							a[k] = a[k] * 10 + 5;
						}
						if (input[i] == 6)
						{
							a[k] = a[k] * 10 + 6;
						}
						if (input[i] == 7)
						{
							a[k] = a[k] * 10 + 7;
						}
						if (input[i] == 8)
						{
							a[k] = a[k] * 10 + 8;
						}
						if (input[i] == 9)
						{
							a[k] = a[k] * 10 + 9;
						}
						++i;
					}
					a[k - 1] *= a[k];
					result += a[k];
				}
			}
			//sum

			if (input[i] == '-')
			{
				++i;
				while (input[i] != zero)
				{
					if (input[i] == 0)
					{
						a[k] = a[k] * 10;
					}
					if (input[i] == 1)
					{
						a[k] = a[k] * 10 + 1;
					}
					if (input[i] == 2)
					{
						a[k] = a[k] * 10 + 2;
					}
					if (input[i] == 3)
					{
						a[k] = a[k] * 10 + 3;
					}
					if (input[i] == 4)
					{
						a[k] = a[k] * 10 + 4;
					}
					if (input[i] == 5)
					{
						a[k] = a[k] * 10 + 5;
					}
					if (input[i] == 5)
					{
						a[k] = a[k] * 10 + 5;
					}
					if (input[i] == 6)
					{
						a[k] = a[k] * 10 + 6;
					}
					if (input[i] == 7)
					{
						a[k] = a[k] * 10 + 7;
					}
					if (input[i] == 8)
					{
						a[k] = a[k] * 10 + 8;
					}
					if (input[i] == 9)
					{
						a[k] = a[k] * 10 + 9;
					}
					++i;
				}
				if (input[i = 1] != '*')
				{
					result -= a[k];
				}
				else
				{
					++k;
					++i;
					while (input[i] != zero)
					{
						if (input[i] == 0)
						{
							a[k] = a[k] * 10;
						}
						if (input[i] == 1)
						{
							a[k] = a[k] * 10 + 1;
						}
						if (input[i] == 2)
						{
							a[k] = a[k] * 10 + 2;
						}
						if (input[i] == 3)
						{
							a[k] = a[k] * 10 + 3;
						}
						if (input[i] == 4)
						{
							a[k] = a[k] * 10 + 4;
						}
						if (input[i] == 5)
						{
							a[k] = a[k] * 10 + 5;
						}
						if (input[i] == 5)
						{
							a[k] = a[k] * 10 + 5;
						}
						if (input[i] == 6)
						{
							a[k] = a[k] * 10 + 6;
						}
						if (input[i] == 7)
						{
							a[k] = a[k] * 10 + 7;
						}
						if (input[i] == 8)
						{
							a[k] = a[k] * 10 + 8;
						}
						if (input[i] == 9)
						{
							a[k] = a[k] * 10 + 9;
						}
						++i;
					}
					a[k - 1] *= a[k];
					result += a[k];
				}
				//sub
			}
		}
		cout << result;
		return result;
	}

	int ttfe()
	{
		srand(time(0));
		int a[4][4];
		int i = 0;
		int j = 0;
		for (int i = 0;i < 4;++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				a[i][j] = 0;
			}
		}
		i = rand() % 4;
		j = rand() % 4;
		a[i][j] = 2;
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				cout << a[i][j] << " ";
				if (a[i][j] == 2048)
				{
					cout << "You win!";
				}
			}
			cout << endl;
		}
		int y = 0;
		string t = "";
		bool h = false;
		bool right = true;
		while (right == true)
		{
			cin >> t;
			if (t != "a" && t != "s" && t != "w" && t != "d" && t != "stop")
			{
				while (t != "a" && t != "s" && t != "w" && t != "d" && t != "stop")
				{
					cin >> t;
				}
			}
			if (t == "w")
			{
				for (int y = 0; y < 4; ++y)
				{
					if (a[0][y] == 0)
					{
						while (a[0][y] == 0)
						{
							a[0][y] = a[1][y];
							a[1][y] = a[2][y];
							a[2][y] = a[3][y];
							a[3][y] = 0;
							if (a[0][y] == a[1][y])
							{
								a[0][y] *= 2;
								a[1][y] = a[2][y];
								a[2][y] = a[3][y];
								a[3][y] = 0;
							}
							if (a[1][y] == a[2][y])
							{
								a[1][y] *= 2;
								a[2][y] = a[3][y];
								a[3][y] = 0;
							}
							if (a[2][y] == a[3][y])
							{
								a[2][y] *= 2;
								a[3][y] = 0;
							}
						}
					}
					else
					{
						if (a[1][y] == 0)
						{
							while (a[0][y] == 0)
							{
								a[1][y] = a[2][y];
								a[2][y] = a[3][y];
								a[3][y] = 0;
								if (a[1][y] == a[2][y])
								{
									a[1][y] *= 2;
									a[2][y] = a[3][y];
									a[3][y] = 0;
								}
								if (a[2][y] == a[3][y])
								{
									a[2][y] *= 2;
									a[3][y] = 0;
								}
							}
						}
						else
						{
							if (a[2][y] == 0)
							{
								a[2][y] = a[3][0];
								a[3][y] = 0;
								if (a[2][y] == a[3][y])
								{
									a[2][y] *= 2;
									a[3][y] = 0;
								}
							}
						}
					}
				}
				while (a[i][j] != 0)
				{
					i = rand() % 4;
					j = rand() % 4;
				}
				a[i][j] = 2;
			}
			if (t == "s")
			{
				for (int y = 0; y < 4; ++y)
				{
					if (a[3][y] == 0)
					{
						while (a[3][y] == 0)
						{
							a[3][y] = a[2][y];
							a[2][y] = a[1][y];
							a[1][y] = a[0][y];
							a[0][y] = 0;
							if (a[3][y] == a[2][y])
							{
								a[3][y] *= 2;
								a[2][y] = a[2][y];
								a[2][y] = a[0][y];
								a[0][y] = 0;
							}
							if (a[2][y] == a[1][y])
							{
								a[2][y] *= 2;
								a[1][y] = a[0][y];
								a[0][y] = 0;
							}
							if (a[1][y] == a[0][y])
							{
								a[1][y] *= 2;
								a[0][y] = 0;
							}
						}
					}
					else
					{
						if (a[2][y] == 0)
						{
							while (a[3][y] == 0)
							{
								a[2][y] = a[1][y];
								a[1][y] = a[0][y];
								a[0][y] = 0;
								if (a[2][y] == a[1][y])
								{
									a[2][y] *= 2;
									a[1][y] = a[0][y];
									a[0][y] = 0;
								}
								if (a[1][y] == a[0][y])
								{
									a[1][y] *= 2;
									a[0][y] = 0;
								}
							}
						}
						else
						{
							if (a[1][y] == 0)
							{
								a[1][y] = a[0][0];
								a[0][y] = 0;
								if (a[1][y] == a[0][y])
								{
									a[1][y] *= 2;
									a[0][y] = 0;
								}
							}
						}
					}
				}
				while (a[i][j] != 0)
				{
					i = rand() % 4;
					j = rand() % 4;
				}
				a[i][j] = 2;
			}
			if (t == "a")
			{
				for (int y = 0; y < 4; ++y)
				{
					if (a[y][0] == 0)
					{
						while (a[y][0] == 0)
						{
							a[y][0] = a[y][1];
							a[y][1] = a[y][2];
							a[y][2] = a[y][3];
							a[y][3] = 0;
							if (a[y][0] == a[y][1])
							{
								a[y][0] *= 2;
								a[y][1] = a[y][2];
								a[y][2] = a[y][3];
								a[y][3] = 0;
							}
							if (a[y][1] == a[y][2])
							{
								a[y][1] *= 2;
								a[y][2] = a[y][3];
								a[y][3] = 0;
							}
							if (a[y][2] == a[y][3])
							{
								a[y][2] *= 2;
								a[y][3] = 0;
							}
						}
					}
					else
					{
						if (a[y][1] == 0)
						{
							while (a[y][0] == 0)
							{
								a[y][1] = a[y][2];
								a[y][2] = a[y][3];
								a[y][3] = 0;
								if (a[y][1] == a[y][2])
								{
									a[y][1] *= 2;
									a[y][2] = a[y][3];
									a[y][3] = 0;
								}
								if (a[y][2] == a[y][3])
								{
									a[y][2] *= 2;
									a[y][3] = 0;
								}
							}
						}
						else
						{
							if (a[y][2] == 0)
							{
								a[y][2] = a[y][3];
								a[y][3] = 0;
								if (a[y][2] == a[y][3])
								{
									a[y][2] *= 2;
									a[y][3] = 0;
								}
							}
						}
					}
				}
				while (a[i][j] != 0)
				{
					i = rand() % 4;
					j = rand() % 4;
				}
				a[i][j] = 2;
			}
			if (t == "d")
			{
				for (int y = 0; y < 4; ++y)
				{
					if (a[y][3] == 0)
					{
						while (a[y][3] == 0)
						{
							a[y][3] = a[y][2];
							a[y][2] = a[y][1];
							a[y][1] = a[y][0];
							a[y][0] = 0;
							if (a[y][3] == a[y][2])
							{
								a[y][3] *= 2;
								a[y][2] = a[y][1];
								a[y][1] = a[y][0];
								a[y][0] = 0;
							}
							if (a[y][2] == a[y][1])
							{
								a[y][2] *= 2;
								a[y][1] = a[y][0];
								a[y][0] = 0;
							}
							if (a[y][1] == a[y][0])
							{
								a[y][1] *= 2;
								a[y][0] = 0;
							}
						}
					}
					else
					{
						if (a[y][2] == 0)
						{
							while (a[y][2] == 0)
							{
								a[y][2] = a[y][2];
								a[y][1] = a[y][0];
								a[y][0] = 0;
								if (a[y][2] == a[y][1])
								{
									a[y][2] *= 2;
									a[y][1] = a[y][0];
									a[y][0] = 0;
								}
								if (a[y][1] == a[y][0])
								{
									a[y][1] *= 2;
									a[y][0] = 0;
								}
							}
						}
						else
						{
							if (a[y][1] == 0)
							{
								a[y][1] = a[y][0];
								a[y][0] = 0;
								if (a[y][1] == a[y][0])
								{
									a[y][1] *= 2;
									a[y][0] = 0;
								}
							}
						}
					}
				}
			}
			if (t == "stop")
			{
				break;
			}
			for (int i = 0; i < 4; ++i)
			{
				for (int j = 0; j < 4; ++j)
				{
					cout << a[i][j] << " ";
					if (a[i][j] == 2048)
					{
						cout << "You win!";
					}
				}
				cout << endl;
			}
			h = 0;
			for (int i = 0; i < 4; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					if (a[i][j] == a[i][j + 1] || a[i][j] == 0 || a[i][j + 1] == 0)
					{
						h = 1;
					}
				}
			}
			for (int j = 0; j < 4; ++j)
			{
				for (int i = 0; i < 3; ++i)
				{
					if (a[i][j] == a[i][j + 1] || a[i][j] == 0 || a[i][j + 1] == 0)
					{
						h = 1;
					}
				}
			}
			if (a[3][3] == 0)
			{
				h = 1;
			}
			right = h;
		}
		cout << "You lose!";
		return 0;
	}

	int ttfet()
	{
		srand(time(0));
		int a[5][10];
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				a[j][i] = 0;
			}
		}
		int in = 0;
		int i = 0;
		int n = 1;
		int l = 0;
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		int number = 0;
		while (in != -1)
		{

			n = 1;
			number = rand() % 6;
			for (int i = 0; i < number; ++i)
			{
				n *= 2;
			}
			cout << n;
			cin >> in;
			i = 0;
			if (in == 1)
			{
				if (a[0][0] == 0)
				{
					a[0][0] = n;
				}
				else
				{
					while (a[0][i + 1] != 0)
					{
						++i;
					}
					a[0][i + 1] = n;
				}
				i = 0;
				if (a[0][9] == a[0][8])
				{
					a[0][8] *= 2;
					a[0][7] = 0;
				}
				if (a[0][8] == a[0][7])
				{
					a[0][7] *= 2;
					a[0][8] = 0;
				}
				if (a[0][7] == a[0][6])
				{
					a[0][6] *= 2;
					a[0][7] = 0;
				}
				if (a[0][6] == a[0][5])
				{
					a[0][5] *= 2;
					a[0][6] = 0;
				}
				if (a[0][5] == a[0][4])
				{
					a[0][4] *= 2;
					a[0][5] = 0;
				}
				if (a[0][4] == a[0][3])
				{
					a[0][3] *= 2;
					a[0][4] = 0;
				}
				if (a[0][3] == a[0][2])
				{
					a[0][2] *= 2;
					a[0][3] = 0;
				}
				if (a[0][2] == a[0][1])
				{
					a[0][1] *= 2;
					a[0][2] = 0;
				}
				if (a[0][1] == a[0][0])
				{
					a[0][0] *= 2;
					a[0][1] = 0;
				}
				if (a[0][0] == 2048)
				{
					a[0][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[0][1] == 2048)
				{
					a[0][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[0][2] == 2048)
				{
					a[0][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[0][3] == 2048)
				{
					a[0][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[0][9] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			if (in == 2)
			{
				if (a[1][0] == 0)
				{
					a[1][0] = n;
				}
				else
				{
					while (a[1][i + 1] != 0)
					{
						++i;
					}
					a[1][i + 1] = n;
				}
				i = 0;
				if (a[1][9] == a[1][8])
				{
					a[1][8] *= 2;
					a[1][7] = 0;
				}
				if (a[1][8] == a[1][7])
				{
					a[1][7] *= 2;
					a[1][8] = 0;
				}
				if (a[1][7] == a[1][6])
				{
					a[1][6] *= 2;
					a[1][7] = 0;
				}
				if (a[1][6] == a[1][5])
				{
					a[1][5] *= 2;
					a[1][6] = 0;
				}
				if (a[1][5] == a[1][4])
				{
					a[1][4] *= 2;
					a[1][5] = 0;
				}
				if (a[1][4] == a[1][3])
				{
					a[1][3] *= 2;
					a[1][4] = 0;
				}
				if (a[1][3] == a[1][2])
				{
					a[1][2] *= 2;
					a[1][3] = 0;
				}
				if (a[1][2] == a[1][1])
				{
					a[1][1] *= 2;
					a[1][2] = 0;
				}
				if (a[1][1] == a[1][0])
				{
					a[1][0] *= 2;
					a[1][1] = 0;
				}
				if (a[1][0] == 2048)
				{
					a[1][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[1][1] == 2048)
				{
					a[1][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[1][2] == 2048)
				{
					a[1][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[1][3] == 2048)
				{
					a[1][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[1][9] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			if (in == 3)
			{
				if (a[2][0] == 0)
				{
					a[2][0] = n;
				}
				else
				{
					while (a[2][i + 1] != 0)
					{
						++i;
					}
					a[2][i + 1] = n;
				}
				i = 0;
				if (a[2][9] == a[2][8])
				{
					a[2][8] *= 2;
					a[2][7] = 0;
				}
				if (a[2][8] == a[2][7])
				{
					a[2][7] *= 2;
					a[2][8] = 0;
				}
				if (a[2][7] == a[2][6])
				{
					a[2][6] *= 2;
					a[2][7] = 0;
				}
				if (a[2][6] == a[2][5])
				{
					a[2][5] *= 2;
					a[2][6] = 0;
				}
				if (a[2][5] == a[2][4])
				{
					a[2][4] *= 2;
					a[2][5] = 0;
				}
				if (a[2][4] == a[2][3])
				{
					a[2][3] *= 2;
					a[2][4] = 0;
				}
				if (a[2][3] == a[2][2])
				{
					a[2][2] *= 2;
					a[2][3] = 0;
				}
				if (a[2][2] == a[2][1])
				{
					a[2][1] *= 2;
					a[2][2] = 0;
				}
				if (a[2][1] == a[2][0])
				{
					a[2][0] *= 2;
					a[2][1] = 0;
				}
				if (a[2][0] == 2048)
				{
					a[2][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[2][1] == 2048)
				{
					a[2][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[2][2] == 2048)
				{
					a[2][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[2][3] == 2048)
				{
					a[2][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[2][9] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			if (in == 4)
			{
				if (a[3][0] == 0)
				{
					a[3][0] = n;
				}
				else
				{
					while (a[3][i + 1] != 0)
					{
						++i;
					}
					a[3][i + 1] = n;
				}
				i = 0;
				if (a[3][9] == a[3][8])
				{
					a[3][8] *= 2;
					a[3][7] = 0;
				}
				if (a[3][8] == a[3][7])
				{
					a[3][7] *= 2;
					a[3][8] = 0;
				}
				if (a[3][7] == a[3][6])
				{
					a[3][6] *= 2;
					a[3][7] = 0;
				}
				if (a[3][6] == a[3][5])
				{
					a[3][5] *= 2;
					a[3][6] = 0;
				}
				if (a[3][5] == a[3][4])
				{
					a[3][4] *= 2;
					a[3][5] = 0;
				}
				if (a[3][4] == a[3][3])
				{
					a[3][3] *= 2;
					a[3][4] = 0;
				}
				if (a[3][3] == a[3][2])
				{
					a[3][2] *= 2;
					a[3][3] = 0;
				}
				if (a[3][2] == a[3][1])
				{
					a[3][1] *= 2;
					a[3][2] = 0;
				}
				if (a[3][1] == a[3][0])
				{
					a[3][0] *= 2;
					a[3][1] = 0;
				}
				if (a[3][0] == 2048)
				{
					a[3][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[3][1] == 2048)
				{
					a[3][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[3][2] == 2048)
				{
					a[3][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[3][3] == 2048)
				{
					a[3][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[3][9] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			if (in == 5)
			{
				if (a[4][0] == 0)
				{
					a[4][0] = n;
				}
				else
				{
					while (a[4][i + 1] != 0)
					{
						++i;
					}
					a[4][i + 1] = n;
				}
				i = 0;
				if (a[4][9] == a[4][8])
				{
					a[4][8] *= 2;
					a[4][7] = 0;
				}
				if (a[4][8] == a[4][7])
				{
					a[4][7] *= 2;
					a[4][8] = 0;
				}
				if (a[4][7] == a[4][6])
				{
					a[4][6] *= 2;
					a[4][7] = 0;
				}
				if (a[4][6] == a[4][5])
				{
					a[4][5] *= 2;
					a[4][6] = 0;
				}
				if (a[4][5] == a[4][4])
				{
					a[4][4] *= 2;
					a[4][5] = 0;
				}
				if (a[4][4] == a[4][3])
				{
					a[4][3] *= 2;
					a[4][4] = 0;
				}
				if (a[4][3] == a[4][2])
				{
					a[4][2] *= 2;
					a[4][3] = 0;
				}
				if (a[4][2] == a[4][1])
				{
					a[4][1] *= 2;
					a[4][2] = 0;
				}
				if (a[4][1] == a[4][0])
				{
					a[4][0] *= 2;
					a[4][1] = 0;
				}
				if (a[4][0] == 2048)
				{
					a[4][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[4][1] == 2048)
				{
					a[4][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[4][2] == 2048)
				{
					a[4][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[4][3] == 2048)
				{
					a[4][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 10; ++i)
					{
						a[l][i] = 0;
					}

				}
				if (a[4][9] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			for (int i = 0; i < 5; ++i)
			{
				for (int j = 0; j < 10; ++j)
				{
					cout << a[j][i] << " ";
				}
				cout << endl;
			}
		}
		return 0;
	}

	int ttfetr()
	{
		srand(time(0));
		int a[10][5];
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				a[i][j] = 0;
			}
		}
		int in = 0;
		int i = 0;
		int n = 1;
		int l = 0;
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				cout << a[j][1] << " ";
			}
			cout << endl;
		}
		int number = 0;
		while (in != -1)
		{

			n = 1;
			number = rand() % 6;
			for (int i = 0; i < number + 1; ++i)
			{
				n *= 2;
			}
			cout << n;
			cout << endl;
			cin >> in;
			i = 0;
			if (in == 1)
			{
				if (a[0][0] == 0)
				{
					a[0][0] = n;
				}
				else
				{
					while (a[i + 1][0] != 0)
					{
						++i;
					}
					a[i + 1][0] = n;
				}
				i = 0;
				if (a[9][0] == a[8][0])
				{
					a[8][0] *= 2;
					a[7][0] = 0;
				}
				if (a[8][0] == a[7][0])
				{
					a[7][0] *= 2;
					a[8][0] = 0;
				}
				if (a[7][0] == a[6][0])
				{
					a[6][0] *= 2;
					a[7][0] = 0;
				}
				if (a[6][0] == a[5][0])
				{
					a[5][0] *= 2;
					a[6][0] = 0;
				}
				if (a[5][0] == a[4][0])
				{
					a[4][0] *= 2;
					a[5][0] = 0;
				}
				if (a[4][0] == a[3][0])
				{
					a[3][0] *= 2;
					a[4][0] = 0;
				}
				if (a[3][0] == a[2][0])
				{
					a[2][0] *= 2;
					a[3][0] = 0;
				}
				if (a[2][0] == a[1][0])
				{
					a[1][0] *= 2;
					a[2][0] = 0;
				}
				if (a[1][0] == a[0][0])
				{
					a[0][0] *= 2;
					a[1][0] = 0;
				}
				if (a[0][0] == 2048)
				{
					a[0][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[1][0] == 2048)
				{
					a[1][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[2][0] == 2048)
				{
					a[2][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[3][0] == 2048)
				{
					a[3][0] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][i] = 0;
					}

				}
				if (a[9][0] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			if (in == 2)
			{
				if (a[0][1] == 0)
				{
					a[0][1] = n;
				}
				else
				{
					while (a[i + 1][1] != 0)
					{
						++i;
					}
					a[i + 1][1] = n;
				}
				i = 0;
				if (a[9][1] == a[8][1])
				{
					a[8][1] *= 2;
					a[7][1] = 0;
				}
				if (a[8][1] == a[7][1])
				{
					a[7][1] *= 2;
					a[8][1] = 0;
				}
				if (a[7][1] == a[6][1])
				{
					a[6][1] *= 2;
					a[7][1] = 0;
				}
				if (a[6][1] == a[5][1])
				{
					a[5][1] *= 2;
					a[6][1] = 0;
				}
				if (a[5][1] == a[4][1])
				{
					a[4][1] *= 2;
					a[5][1] = 0;
				}
				if (a[4][1] == a[3][1])
				{
					a[3][1] *= 2;
					a[4][1] = 0;
				}
				if (a[3][1] == a[2][1])
				{
					a[2][1] *= 2;
					a[3][1] = 0;
				}
				if (a[2][1] == a[1][1])
				{
					a[1][1] *= 2;
					a[2][1] = 0;
				}
				if (a[1][1] == a[0][1])
				{
					a[0][1] *= 2;
					a[1][1] = 0;
				}
				if (a[0][1] == 2048)
				{
					a[0][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[1][1] == 2048)
				{
					a[1][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[2][1] == 2048)
				{
					a[2][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[3][1] == 2048)
				{
					a[3][1] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][i] = 0;
					}

				}
				if (a[9][1] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			if (in == 3)
			{
				if (a[0][2] == 0)
				{
					a[0][2] = n;
				}
				else
				{
					while (a[i + 1][2] != 0)
					{
						++i;
					}
					a[i + 1][2] = n;
				}
				i = 0;
				if (a[9][2] == a[8][2])
				{
					a[8][2] *= 2;
					a[7][2] = 0;
				}
				if (a[8][2] == a[7][2])
				{
					a[7][2] *= 2;
					a[8][2] = 0;
				}
				if (a[7][2] == a[6][2])
				{
					a[6][2] *= 2;
					a[7][2] = 0;
				}
				if (a[6][2] == a[5][2])
				{
					a[5][2] *= 2;
					a[6][2] = 0;
				}
				if (a[5][2] == a[4][2])
				{
					a[4][2] *= 2;
					a[5][2] = 0;
				}
				if (a[4][2] == a[3][2])
				{
					a[3][2] *= 2;
					a[4][2] = 0;
				}
				if (a[3][2] == a[2][2])
				{
					a[2][2] *= 2;
					a[3][2] = 0;
				}
				if (a[2][2] == a[1][2])
				{
					a[1][2] *= 2;
					a[2][2] = 0;
				}
				if (a[1][2] == a[0][2])
				{
					a[0][2] *= 2;
					a[1][2] = 0;
				}
				if (a[0][2] == 2048)
				{
					a[0][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[1][2] == 2048)
				{
					a[1][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[2][2] == 2048)
				{
					a[2][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[3][2] == 2048)
				{
					a[3][2] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][i] = 0;
					}

				}
				if (a[9][2] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			if (in == 4)
			{
				if (a[0][3] == 0)
				{
					a[0][3] = n;
				}
				else
				{
					while (a[i + 1][3] != 0)
					{
						++i;
					}
					a[i + 1][3] = n;
				}
				i = 0;
				if (a[9][3] == a[8][3])
				{
					a[8][3] *= 2;
					a[7][3] = 0;
				}
				if (a[8][3] == a[7][3])
				{
					a[7][3] *= 2;
					a[8][3] = 0;
				}
				if (a[7][3] == a[6][3])
				{
					a[6][3] *= 2;
					a[7][3] = 0;
				}
				if (a[6][3] == a[5][3])
				{
					a[5][3] *= 2;
					a[6][3] = 0;
				}
				if (a[5][3] == a[4][3])
				{
					a[4][3] *= 2;
					a[5][3] = 0;
				}
				if (a[4][3] == a[3][3])
				{
					a[3][3] *= 2;
					a[4][3] = 0;
				}
				if (a[3][3] == a[2][3])
				{
					a[2][3] *= 2;
					a[3][3] = 0;
				}
				if (a[2][3] == a[1][3])
				{
					a[1][3] *= 2;
					a[2][3] = 0;
				}
				if (a[1][3] == a[0][3])
				{
					a[0][3] *= 2;
					a[1][3] = 0;
				}
				if (a[0][3] == 2048)
				{
					a[0][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[1][3] == 2048)
				{
					a[1][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[2][3] == 2048)
				{
					a[2][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[3][3] == 2048)
				{
					a[3][3] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][i] = 0;
					}

				}
				if (a[9][3] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			if (in == 5)
			{
				if (a[0][4] == 0)
				{
					a[0][4] = n;
				}
				else
				{
					while (a[i + 1][4] != 0)
					{
						++i;
					}
					a[i + 1][4] = n;
				}
				i = 0;
				if (a[9][4] == a[8][4])
				{
					a[8][4] *= 2;
					a[7][4] = 0;
				}
				if (a[8][4] == a[7][4])
				{
					a[7][4] *= 2;
					a[8][4] = 0;
				}
				if (a[7][4] == a[6][4])
				{
					a[6][4] *= 2;
					a[7][4] = 0;
				}
				if (a[6][4] == a[5][4])
				{
					a[5][4] *= 2;
					a[6][4] = 0;
				}
				if (a[5][4] == a[4][4])
				{
					a[4][4] *= 2;
					a[5][4] = 0;
				}
				if (a[4][4] == a[3][4])
				{
					a[3][4] *= 2;
					a[4][4] = 0;
				}
				if (a[3][4] == a[2][4])
				{
					a[2][4] *= 2;
					a[3][4] = 0;
				}
				if (a[2][4] == a[1][4])
				{
					a[1][4] *= 2;
					a[2][4] = 0;
				}
				if (a[1][4] == a[0][4])
				{
					a[0][4] *= 2;
					a[1][4] = 0;
				}
				if (a[0][4] == 2048)
				{
					a[0][4] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[1][4] == 2048)
				{
					a[1][4] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[2][4] == 2048)
				{
					a[2][4] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][l] = 0;
					}

				}
				if (a[3][4] == 2048)
				{
					a[3][4] = 2048;
					cout << "Which line must be deleted?";
					cin >> l;
					for (int i = 0; i < 5; ++i)
					{
						a[i][i] = 0;
					}

				}
				if (a[9][4] != 0)
				{
					cout << "You Lose!";
					in = -1;
				}
			}
			for (int i = 0; i < 10; ++i)
			{
				for (int j = 0; j < 5; ++j)
				{
					if (a[i][j] < 10)
					{
						cout << "   ";
					}
					if (a[i][j] > 9 && a[i][j] < 100)
					{
						cout << "  ";
					}
					if (a[i][j] > 99 && a[i][j] < 1000)
					{
						cout << " ";
					}
					cout << a[i][j] << "  ";
				}
				cout << endl;
			}
		}
		return 0;
	}

	int snake()
	{
	
	}

	int tetris()
	{
		int a[20][10];
		for (int i = 0; i < 20; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				a[i][j] = 0;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
}