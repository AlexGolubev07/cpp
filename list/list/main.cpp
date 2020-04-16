#include <iostream>
#include <cassert>
#include "CycleList.h"

using namespace std;
using namespace CycleList;

int main()
{
	List c;
	for (int i = 0; i < 41; ++i)
	{
		c.add(i + 1);
	}

	cout << c.Joseph(2);

	return 0;
}