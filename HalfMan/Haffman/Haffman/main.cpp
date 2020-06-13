#include "AssociateArray.h"
#include "HaffManTree.h"
#include <iostream>

using namespace std;

int main()
{
	AssociateArray a;
	// cin >> a;
	a.add('a', 2);
	cout << a;
	a.add('b', 1);
	cout << a;
	a.add('c', 3);
	cout << a;
	a.add('d', 5);
	cout << a;
	HaffmanTree tree;
	tree.aaToTree(a);
	return 0;
}