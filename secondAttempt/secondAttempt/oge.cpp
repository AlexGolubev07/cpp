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
}