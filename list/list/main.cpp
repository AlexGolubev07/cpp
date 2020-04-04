#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	List l;
	for (int i = 1; i <= 10; ++i)
	{
		l.add(i);
	}
	cout << l;
	return 0;
}