#include <iostream>
#include "List.h"
#include <cassert>
#include "CycleList.h"

using namespace std;
using namespace CycleLists;

int main()
{
	CycleList l;
	for (int i = 0; i < 10; ++i)
	{
		l.add(i + 1);
	}
	cout << l;
	return 0;
}