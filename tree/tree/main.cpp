#include <iostream>
#include "BinaryTree.h"

using namespace std;
using namespace Tree;

int main()
{
	BinaryTree t;
	t.root = new Node(1);
	t.add(2, 1, 2);
	t.add(2, 2, 3);
	t.add(3, 1, 4);
	t.add(3, 2, 5);
	t.add(3, 3, 6);
	t.add(3, 4, 7);
	t.add(4, 1, 8);
	t.add(4, 2, 9);
	t.add(4, 3, 10);
	t.add(4, 4, 11);
	t.add(4, 5, 12);
	t.add(4, 6, 13);
	t.add(4, 7, 14);
	t.add(4, 8, 15);

	t.printLevel(3);

	return 0;
}
/*
1
2 3
4 5 6 7
*/