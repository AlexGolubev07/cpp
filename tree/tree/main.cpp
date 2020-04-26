#include <iostream>
#include "BinaryTree.h"

using namespace std;
using namespace Tree;

int main()
{
	BinaryTree t;
	t.root = new Node(1);
	t.root->leftChild = new Node(2);
	t.root->rightChild = new Node(3);
	t.root->leftChild->leftChild = new Node(4);
	t.root->leftChild->rightChild = new Node(5);
	t.root->rightChild->leftChild = new Node(6);
	cout << t.shortestBranchLength();
	return 0;
}