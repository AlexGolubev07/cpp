#include "Node.h"
#include "Tree.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Tree t;
	t.root = new Node(10);
	t.add(2, 1, 2);
	t.add(2, 2, 3);
	t.add(3, 1, 4);
	t.add(3, 2, 54);
	t.add(3, 3, 621);
	t.add(3, 4, 765);
	t.add(4, 1, 8);
	t.add(4, 2, 900000);
	t.add(4, 3, 100);
	t.add(4, 4, 2);
	t.add(4, 5, 30);
	t.add(4, 6, 4);
	t.add(4, 7, 500);
	t.add(4, 8, 6);

	cout << t;

	return 0;
}