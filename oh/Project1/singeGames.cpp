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
}