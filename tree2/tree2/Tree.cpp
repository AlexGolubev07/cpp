#include "Tree.h"
#include <iostream>

int Tree::height()
{
	if (this->root == nullptr)
	{
		return 0;
	}

	return this->root->height();
}

Node* Tree::getNode(int level, int position)
{
	Node* t = this->root;

	if (this->height() == 1)
	{
		return t;
	}

	int dvoika = pow(2, level - 1);

	/*
	обработка исключений
	*/

	for (int i = 0; i < level - 1; ++i)
	{
		if (position <= dvoika / 2)
		{
			t = t->left;
		}
		else
		{
			t = t->right;
			position -= dvoika / 2;
		}
		dvoika /= 2;
	}
	
	return t;
}

Node* Tree::getNode(int data)
{
	return this->root->getNode(data);
}

void Tree::add(int const level, int const position, int const data)
{
	if (level == 1)
	{
		this->root = new Node(data);
		return;
	}

	int parentPosition = position / 2 + (position % 2);
	int parentLevel = level - 1;

	Node* parent = nullptr;

	if (parentLevel != 1)
	{
		parent = this->getNode(parentLevel, parentPosition);
	}
	else
	{
		parent = this->root;
	}

	if (position % 2 == 0)
	{
		parent->right = new Node(data);
	}
	else
	{
		parent->left = new Node(data);
	}
}

Node** Tree::getLevel(int const level)
{
	int positions = pow(2, level - 1);

	Node** a = new Node * [positions];

	if (level == 1)
	{
		positions = 1;

		a[0] = this->root;
		return a;
	}

	for (int i = 0; i < positions; ++i)
	{
		a[i] = this->getNode(level, i + 1);
	}

	return a;
}

void Tree::printLevel(int const level)
{
	Node** a = this->getLevel(level);

	int positions = pow(2, level - 1);

	for (int i = 0; i < positions; ++i)
	{
		std::cout << a[i]->data << " ";
	}

	std::cout << std::endl;
}

void Tree::printTree()
{
	int height = this->height() + 1;
	
	for (int i = 1; i < height; ++i)
	{
		this->printLevel(i);
	}
}