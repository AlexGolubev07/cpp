#pragma once
#include "Node.h"

class Tree
{
public:
	Node* root;
	
	int height();

	Node* getNode(int const level, int const position);

	Node* getNode(int data);

	void add(int const level, int const position, int const data);

	Node** getLevel(int const level);

	void printLevel(int const level);

	void printTree();
};

