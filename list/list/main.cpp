#include <iostream>
#include <cassert>
#include "CycleList.h"

using namespace std;
using namespace CycleList;

int main()
{
	List c;
	for (int i = 0; i < 10; ++i)
	{
		c.add(i + 1);
	}

	cout << c << endl;
	c.removeId(5);
	cout << c;

	return 0;
}