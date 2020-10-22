#pragma once

#include <iostream>
#include <cstring>
#include <cassert>


using namespace std;

char toString(int n)
{
	if (n == 0)
		return '0';
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
	return res[0];
}

int numFromSystem(char letter)
{
	string alph = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string alph2 = "0123456789abcdefghijklmnopqrstuvwxyz";
	int length = alph.length() - 1;
	for (int i = 0; i < length; ++i)
	{
		if (alph[i] == letter || alph2[i] == letter)
		{
			return i;
		}
	}
	
	cout << endl << "System is too big" << endl;
	assert(true);
}

void systemTranslator()
{
	string word = "";
	string wordNum = "";
	string cycleRes = "";
	int num = 0;
	int division = 0;
	int wordLength;
	while (word != "0")
	{
		cin >> word;
		int from = 0;
		int to = 0;
		int i = 0;

		while (word[i] != '>')
		{
			from = from * 10 + numFromSystem(word[i]);
			++i;
		}

		++i;

		while (word[i] != '\0')
		{
			to = to * 10 + numFromSystem(word[i]);
			++i;
		}

		if (to == 1)
		{
			cout << "Unable conversation" << endl;
			continue;
		}

		while (wordNum != "0")
		{
			cin >> wordNum;
			cycleRes = "";
			division = 0;
			num = 0;
			i = 0;

			while (wordNum[i] != '\0')
			{
				num = num * 10 + numFromSystem(wordNum[i]);
				++i;
			}

			while (num != 0)
			{
				cycleRes = toString(num % to) + cycleRes;
				num = (num - num % to) / to;
			}
			
		}

	}
}