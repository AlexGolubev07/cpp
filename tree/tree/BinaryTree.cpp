#include "BinaryTree.h"

namespace Tree
{
	Node::Node(int const data)
	{
		this->data = data;
		this->leftChild = nullptr;
		this->rightChild = nullptr;
		this->parent = nullptr;
	}

	int Node::height()
	{
		if (this->leftChild == nullptr && this->rightChild == nullptr)
		{
			return 1;
		}
		
		if (this->leftChild == nullptr)
		{
			return  this->rightChild->height() + 1;
		}
		
		if (this->rightChild == nullptr)
		{
			return this->leftChild->height() + 1;
		}
		
		int l = this->leftChild->height();
		int r = this->rightChild->height();
		
		return l >= r ? l + 1 : r + 1;
	}

	int BinaryTree::height()
	{
		return this->root->height();
	}
}