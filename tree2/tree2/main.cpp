#include "Node.h"
#include "Tree.h"
#include <iostream>

using namespace std;

int main()
{
	Tree t;
	t.root = new Node(1);
	t.add(2, 1, 2);
	t.add(2, 2, 3);
	t.add(3, 1, 4);
	t.add(3, 2, 5);
	t.add(3, 3, 6);
	t.add(3, 4, 7);
	t.add(4, 1, 8);
	t.add(4, 2, 9);
	t.add(4, 3, 1);
	t.add(4, 4, 2);
	t.add(4, 5, 3);
	t.add(4, 6, 4);
	t.add(4, 7, 5);
	t.add(4, 8, 6);

	t.printTree();

	return 0;
}