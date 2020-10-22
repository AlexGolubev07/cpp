#include <iostream>
#include <vector>
#include "trainTasks.h"
#include "lessons.h"



void swap(int* array, int firstIndex, int secondIndex)
{
	int help = array[firstIndex];
	array[firstIndex] = array[secondIndex];
	array[secondIndex] = help;
}

void quickSort(int* array, int fi, int si)
{
	if (fi - si == 1)
		return;
	if (fi - si == 2)
	{
		if (array[fi] > array[si - 1])
			swap(array, fi, si - 1);
		return;
	}
	if (fi - si == 3)
	{
		if (array[fi] > array[si - 1])
			swap(array, fi, si - 1);
		if (array[fi] > array[fi + 1])
			swap(array, fi, fi + 1);
		if (array[fi + 1] > array[si - 1])
			swap(array, fi + 1, si - 1);
		return;
	}
	int pivot = array[si - 1];
	int i = 0;
	for (i = 0; fi + i < si - i - 2; ++i)
	{
		if (array[fi + i] > pivot && array[si - i - 2] < pivot)
			swap(array, fi + i, si - i);
	}
	for (int i = 0; i < 9; ++i)
	{
		cout << array[i] << " ";
	}
	if (fi + i == si - i)
	{
		quickSort(array, fi, fi + i);
		quickSort(array, fi + i, si);
	}
	else
	{
		quickSort(array, fi, fi + i - 1);
		quickSort(array, fi + i, si);
	}
	return;
}

//void test(int n)
//{
//	if (n == 0)
//	{
//		cout << 0;
//		return;
//	}
//	if (n == 1)
//	{
//		int a, b;
//		cin >> a >> b;
//		cout << 0;
//		return;
//	}
//	int high;
//	int sex;
//	int* boys = new int[n];
//	int* girls = new int[n];
//	boys[0] = 0;
//	girls[0] = 0;
//	int cb = 0;
//	int cg = 0;
//	int res = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> sex >> high;
//		
//		if (sex == 1)
//		{
//			boys[cb] = high;
//			++cb;
//		}
//		else
//		{
//			girls[cg] = high;
//			++cg;
//		}
//	}
//
//	int index = 0;
//	int max = 0;
//	int help = 0;
//	for (int i = 0; i < cb; ++i)
//	{
//		for (int j = i; j < cb; ++j)
//		{
//			if (boys[j] > max)
//			{
//				index = j;
//				max = boys[j];
//			}
//		}
//		help = boys[i];
//		boys[i] = boys[index];
//		boys[index] = help;
//		index = i + 1;
//		max = 0;
//	}
//
//	index = 0;
//	for (int i = 0; i < cg; ++i)
//	{
//		for (int j = i; j < cg; ++j)
//		{
//			if (girls[j] > max)
//			{
//				index = j;
//				max = girls[j];
//			}
//		}
//		help = girls[i];
//		girls[i] = girls[index];
//		girls[index] = help;
//		index = i + 1;
//		max = 0;
//	}
//
//	for (int i = 0; i < cb - 1; ++i)
//	{
//		if (boys[i] - boys[i + 1] > res)
//			res = boys[i] - boys[i + 1];
//	}
//
//	for (int i = 0; i < cg - 1; ++i)
//	{
//		if (girls[i] - girls[i + 1] > res)
//			res = girls[i] - girls[i + 1];
//	}
//
//	if (cg != 0 && girls[cg - 1] > boys[0] && girls[cg - 1] - boys[0] > res)
//		res = girls[cg - 1] - boys[0];
//	if (cg != 0 && girls[cg - 1] < boys[0] && boys[0] - girls[cg - 1] > res)
//		res = boys[0] - girls[cg - 1];
//
//	cout << res;
//	delete[] boys;
//	delete[] girls;
//}
//
//void olimpic(int n)
//{
//	int dance = 0;
//	int* help = new int[n];
//	int* ans = new int[n];
//	int lastDance = -1;
//	int curD = 0;
//	int ca = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> dance;
//		if (dance != lastDance && ans[ca - 1] != lastDance)
//		{
//			if (lastDance == -1)
//			{
//				lastDance = dance;
//			}
//			ans[ca] = lastDance;
//			lastDance = dance;
//			++ca;
//		}
//		else
//		{
//			help[curD] = dance;
//			++curD;
//			for (int j = 0; j < curD; ++j)
//			{
//				if (help[j] != 0 && help[j] != lastDance)
//				{
//					ans[ca] = lastDance;
//					++ca;
//					lastDance = help[j];
//					help[j] = 0;
//					break;
//				}
//			}
//		}
//		cout << endl;
//		for (int j = 0; j < ca; ++j)
//		{
//			cout << ans[j] << " ";
//		}
//		cout << endl;
//		for (int j = 0; j < curD; ++j)
//		{
//			cout << ans[j] << " ";
//		}
//		cout << endl;
//	}
//
//	bool able = true;
//	for (int i = 0; able ; ++i)
//	{
//		able = false;
//		for (int j = 0; j < curD; ++j)
//		{
//			if (help[j] != 0 && help[j] != lastDance)
//			{
//				able = true;
//				ans[ca] = lastDance;
//				++ca;
//				lastDance = help[j];
//				help[j] = 0;
//				break;
//			}
//		}
//	}
//
//	if (ca != n)
//	{
//		cout << 0;
//		return;
//	}
//	for (int i = 0; i < ca; ++i)
//	{
//		cout << ans[i] << " ";
//	}
//}

string cesar(char letter = ' ', int sdvigg = 0)
{
	string alphabet = "abcdefghigklmnopqrstuvwxyz";
	string word = " ";
	string res = "";
	
	int sdvig = 0;
	if (letter != ' ')
	{
		word[0] = letter;
		sdvig = sdvigg;
	}
	else
	{
		cin >> word >> sdvig;
	}
	
	int length = word.length();
	int alphLen = alphabet.length();

	for (int i = 0; i < length; ++i)
	{
		int index = 0;
		for (int j = 0; j < alphLen; ++j)
		{
			if (word[i] == alphabet[j])
			{
				index = (j + sdvig + alphLen) % alphLen;
				break;
			}
		}
		res += alphabet[index];
	}
	cout << res;
	return res;
}


int main()
{
	lesson4::kirill();
	return 0;
}

//int main()
//{
//	int n = 0;
//	int m = 0;
//
//	cin >> n >> m;
//
//	if (n == 1)
//	{
//		for (int i = 1; i < m + 1; ++i)
//		{
//			cout << i;
//		}
//	}
//	else if (n == 2)
//	{
//		int num = 1;
//
//		for (int i = 0; i < m; ++i)
//		{
//			cout << num << " " << num + 1;
//			num += 2;
//		}
//	}
//	else if (m < n)
//	{
//		int f_number = 0;
//		int long_d = n - m;
//		for (int r = 0; r < m; ++r)
//		{
//			bool shortt = true;
//			int longg = 0;
//			vector<int> mass;
//			int summ = r + 1;
//			int number = f_number;
//			mass.push_back(number + summ);
//			number = mass.front();
//
//			for (int i = 0; i < n - 1; ++i)
//			{
//				if (summ + 1 == m + 1)
//				{
//					++longg;
//				}
//
//				mass.push_back(number + summ);
//
//				if (shortt)
//				{
//					if (summ + 1 == m + 1)
//					{
//						if (longg == long_d)
//						{
//							shortt = false;
//							--summ;
//						}
//					}
//					else
//					{
//						++summ;
//					}
//				}
//				else
//				{
//					--summ;
//				}
//
//				number = mass.back();
//			}
//
//			for (int i = 0; i < mass.size(); ++i)
//			{
//				cout << mass[i] << " ";
//			}
//
//			f_number = mass.front();
//		}
//	}
//	else
//	{
//		int f_number = 0;
//		int end = 1;
//
//		for (int r = 0; r < m; ++r)
//		{
//			bool shortt = true;
//			vector<int> mass;
//
//			int summ = 0;
//			if (r + 1 <= n)
//			{
//				summ = r + 1;
//			}
//			else
//			{
//				summ = n;
//			}
//
//			int number = f_number;
//			mass.push_back(number + summ);
//			number = mass.front();
//
//			for (int i = 0; i < n - 1; ++i)
//			{
//				if (summ > n - 1)
//				{
//					summ = n - 1;
//				}
//
//				mass.push_back(number + summ);
//
//				if (shortt)
//				{
//					if (r >= m - n + 2 && mass.size() == n - end)
//					{
//						shortt = false;
//						--summ;
//						++end;
//					}
//					else
//					{
//						++summ;
//					}
//				}
//				else
//				{
//					--summ;
//				}
//
//				number = mass.back();
//			}
//
//			for (int i = 0; i < mass.size(); ++i)
//			{
//				cout << mass[i] << " ";
//			}
//			cout << endl;
//			f_number = mass.back();
//		}
//	}
//
//	return 0;
//}