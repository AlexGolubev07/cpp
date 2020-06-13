#pragma once
#include "Node.h"

class TreeNode
{
	Node node;
	TreeNode* left;
	TreeNode* right;
	TreeNode* parent;

	TreeNode(Node node)
	{
		this->node = node;
		this->left = nullptr;
		this->right = nullptr;
		this->parent = nullptr;
	};
};

class MyList
{
public:
	TreeNode* head;

	MyList()
	{
		this->head = nullptr;
	};

	void pushFront(Node node)
	{

	}

	void pushBack(Node node)
	{

	}

	void popFront()
	{

	}

	void popBack()
	{

	}

	void sorteAdd(Node node)
	{

	}

	~MyList()
	{

	};
};