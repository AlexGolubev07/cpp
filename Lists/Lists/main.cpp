#include "lists.h"
#include <iostream>

using namespace std;

int main()
{
	myList<> l;

	l.pushBack(2);
	l.pushFront(5);
	l.pushFront(6);
	l.pushBack(8);
	l.popBack();
	l.popFront();
	l.popFront();
	l.popBack();

	return 0;
}
