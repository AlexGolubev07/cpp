#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

Node::Node(int data)
{
	this->data = data;
	this->left = nullptr;
	this->right = nullptr;
	this->parent = nullptr;
}

int Node::height()
{
	if (this->left != nullptr && this->right != nullptr)
	{
		int left = this->left->height();
		int right = this->right->height();
		return left > right ? left + 1 : right + 1;
	}

	if (this->left != nullptr && this->right == nullptr)
	{
		return this->left->height() + 1;
	}

	if (this->left == nullptr && this->right != nullptr)
	{
		return this->right->height() + 1;
	}

	return 1;
}

Node* Node::getNode(int const data)
{
	if (this->data == data)
	{
		return this;
	}

	if (this->left != nullptr && this->right != nullptr)
	{
		if (this->left->getNode(data) == nullptr)
		{
			return this->right->getNode(data);
		}
		return this->left->getNode(data);
	}

	if (this->left == nullptr && this->right != nullptr)
	{
		return this->right->getNode(data);
	}

	if (this->left != nullptr && this->right == nullptr)
	{
		return this->right->getNode(data);
	}

	return nullptr;
}

int Node::elementMaxSize()
{
	if (this->left != nullptr && this->right != nullptr )
	{
		int left = this->left->elementMaxSize();
		int right = this->right->elementMaxSize();
		return left > right ? left : right;
	}

	if (this->left != nullptr && this->right == nullptr)
	{
		return this->left->elementMaxSize();
	}

	if (this->left == nullptr && this->right != nullptr)
	{
		return this->right->elementMaxSize();
	}

	return to_string(this->data).length();
}