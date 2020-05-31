#pragma once
class Node
{
public:
	int data;
	Node* left;
	Node* right;
	Node* parent;

	Node(int data);

	int height();

	Node* getNode(int data);

	int elementMaxSize();
};

