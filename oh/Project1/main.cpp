#include <iostream>
#include "integerNumbers.h"
#include "myMath.h"
#include "myArray.h"
#include "taskWithArrays.h"
#include "sort.h"
#include <ctime>
#include "oge.h"
#include "test.h"
#include "algorythmCompare.h"
#include "olympic.h"
#include "ege.h"
#include "plane.h"
#include "games.h"
#include "numeralSystem.h"
#include <string>;
#include "work291219.h"

using namespace std;

int main()
{
	srand(time(0));
	int a[4][4];
	int i = 0;
	int j = 0;
	for (int i = 0; i < 4; ++i)
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
	int l = 0;
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
					while (a[0][y] == 0 && l <= 3)
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
						++l;
					}
				}
				else
				{
					l = 0;
					if (a[1][y] == 0)
					{
						while (a[0][y] == 0 && l <= 2)
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
							++l;
						}
					}
					else
					{
						l = 0;
						if (a[2][y] == 0)
						{
							a[2][y] = a[3][0];
							a[3][y] = 0;
							if (a[2][y] == a[3][y])
							{
								a[2][y] *= 2;
								a[3][y] = 0;
							}
							++l;
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
					l = 0;
					while (a[3][y] == 0 && l <= 3)
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
						++l;
					}
				}
				else
				{
					l = 0;
					if (a[2][y] == 0)
					{
						while (a[3][y] == 0 && l <= 2)
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
							++l;
						}
					}
					else
					{
						l = 0;
						if (a[1][y] == 0)
						{
							a[1][y] = a[0][0];
							a[0][y] = 0;
							if (a[1][y] == a[0][y])
							{
								a[1][y] *= 2;
								a[0][y] = 0;
							}
							++l;
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
					l = 0;
					while (a[y][0] == 0 && l <= 3)
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
						++l;
					}
				}
				else
				{
					l = 0;
					if (a[y][1] == 0)
					{
						while (a[y][0] == 0 && l <= 2)
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
							++l;
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
					l = 0;
					while (a[y][3] == 0 && l <= 3)
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
						++l;
					}
				}
				else
				{
					l = 0;
					if (a[y][2] == 0)
					{
						while (a[y][2] == 0 && l <= 2)
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
							++l;
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