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

	Node* temp = t.root;
	cout << temp->data << " " << temp->level << " " << temp->position << endl;

	temp = t.root->leftChild;
	cout << temp->data << " " << temp->level << " " << temp->position << endl;
	temp = t.root->rightChild;
	cout << temp->data << " " << temp->level << " " << temp->position << endl;

	temp = t.root->leftChild->leftChild;
	cout << temp->data << " " << temp->level << " " << temp->position << endl;
	temp = t.root->leftChild->rightChild;
	cout << temp->data << " " << temp->level << " " << temp->position << endl;
	
	temp = t.root->rightChild->leftChild;
	cout << temp->data << " " << temp->level << " " << temp->position << endl;
	temp = t.root->rightChild->rightChild;
	cout << temp->data << " " << temp->level << " " << temp->position << endl;
	return 0;
}