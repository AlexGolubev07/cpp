#include <iostream>

using namespace std;

namespace oge
{
	void oge20()
	{
		int number = 0;
		int result = 0;
		int amount = 0;
		cin >> amount;
		for (int i = 0; i < amount; i++)
		{
			cin >> number;
			if (number % 5 == 0 && number > result)
			{
				result = number;
			}
		}
		cout << result;
	}

	void oge621()
	{
		int number = 0;
		int result = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 6 == 0 && number % 10 == 4)
			{
				result += number;
			}
			cin >> number;
		}
		cout << result;
	}

	void oge40()
	{
		int number = 0;
		int amount = 0;
		int result = 0;
		cin >> amount;
		for (int i = 0; i < amount; i++)
		{
			cin >> number;
			if (number % 6 == 0)
			{
				result += number;
			}
		}
		cout << result;
	}

	void oge80()
	{
		int number = 0;
		int amount = 0;
		int result = 30001;
		cin >> amount;
		for (int i = 0; i < amount; i++)
		{
			cin >> number;
			if (number % 3 == 0 && number < result)
			{
				result = number;
			}
		}
		cout << result;
	}

	void oge784()
	{
		int number = 0;
		int result = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 6 == 0 && number % 10 == 4)
			{
				result += number;
			}
			cin >> number;
		}
		cout << result;
	}

	void oge1071()
	{
		int number = 0;
		int amount = 0;
		int loosers = 0;
		int result = 0;
		cin >> amount;
		for (int i = 0; i < amount; i++)
		{
			cin >> number;
			if (number == 0)
			{
				++loosers;
			}
			if (number > result)
			{
				result = number;
			}
		}
		if (loosers != 0)
		{
			cout << "No" << endl << result << " - best result";
		}
		else
		{
			cout << "Yes" << endl << result << " - best result";
		}
	}
}