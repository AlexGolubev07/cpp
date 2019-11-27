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
			cout << endl << answersRight << endl <<"How did you do it?";
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
		if (answersRight <= 3 && n == 5 && answersRight > 1 )
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
		cout << "Enter word to rewert..." << endl;
		cin >> input;
		string output = "";
		input = " " + input;
		for (int i = 1; i < input.length(); ++i)
		{
			output += input[input.length() - i];
		}
		if (input != output)
		{
			cout << output << endl;
			reverter();
		}
		else
		{
			cout << "I don`t know how to revert this!Enter normal words..." << endl;
			reverter();
		}
	}

	void cesar()
	{
		string alphbet1 = "abcdefghijklmnopqrstuvwxyz ";
		string alphbet2 = "abcdefghijklmnopqrstuvwxyz abcdefghijklmnopqrstuvwxyz";
		string input = "";
		string zero = " ";
		int n = 0;
		cin >> n >> input;
		int a[100];
		int k = 0;
		for (int i = 0; i < input.length(); ++i)
		{
			for (int j = 0; j < alphbet1.length(); ++i)
			{
				if (input[i] == alphbet1[j] && input[i] != zero[0])
				{
					a[k] = j;
					++k;
				}
				if (input[i] == zero[0])
				{
					a[k] = j - (n % 26);
					++k;
				}
			}
		}
		for (int i = 0; i < k; ++i)
		{
			cout << alphbet2[a[i] + (n % 26)];
		}

	}
}