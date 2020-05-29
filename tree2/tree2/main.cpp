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
	
	t.printTree();

	return 0;
}