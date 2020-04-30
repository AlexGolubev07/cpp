#include <iostream>
#include "BinaryTree.h"

using namespace std;
using namespace Tree;

int main()
{
	BinaryTree t;
	t.root = new Node(1);
	t.root->leftChild = new Node(2);
	t.root->leftChild->parent = t.root;
	t.root->rightChild = new Node(3);
	t.root->rightChild->parent = t.root;
	t.root->leftChild->leftChild = new Node(4);
	t.root->leftChild->leftChild->parent = t.root->leftChild;
	t.root->leftChild->rightChild = new Node(5);
	t.root->leftChild->rightChild->parent = t.root->leftChild;
	cout << t.shortestBranch();
	return 0;
}