#include <iostream>
#include "BinaryTree.h"

using namespace std;
using namespace Tree;

int main()
{
	BinaryTree t;
	t.root = new Node(3);
	t.root->leftChild = new Node(4);
	t.root->rightChild = new Node(4);
	t.root->leftChild->leftChild = new Node(4);
	t.root->leftChild->rightChild = new Node(5);
	t.root->rightChild->leftChild = new Node(6);
	t.root->rightChild->rightChild = new Node(7);
	cout << t.full();
	return 0;
}