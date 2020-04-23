#include "BinaryTree.h"

namespace Tree
{
	#pragma region Node
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

	bool Node::balanced()
	{
		if (this->leftChild == nullptr && this->rightChild == nullptr)
		{
			return true;
		}

		if (this->leftChild == nullptr)
		{
			return  this->rightChild->balanced();
		}

		if (this->rightChild == nullptr)
		{
			return this->leftChild->balanced();
		}

		return this->leftChild->balanced() && this->rightChild->balanced() && this->leftChild->height() == this->rightChild->height();
	}

	int Node::amountOfValue(int const value)
	{
		int currenNode = 0;

		if (this->data == value)
		{
			++currenNode;
		}

		if (this->leftChild == nullptr && this->rightChild == nullptr)
		{
			return currenNode;
		}

		if (this->leftChild == nullptr)
		{
			return currenNode + this->rightChild->amountOfValue(value);
		}

		if (this->rightChild == nullptr)
		{
			return currenNode + this->leftChild->amountOfValue(value);
		}

		return currenNode + this->leftChild->amountOfValue(value) + this->rightChild->amountOfValue(value);
	}

	bool Node::full()
	{
		if (this->leftChild == nullptr && this->rightChild == nullptr)
		{
			return true;
		}

		if (this->leftChild == nullptr)
		{
			return false;
		}

		if (this->rightChild == nullptr)
		{
			return false;
		}

		return this->leftChild->full() && this->rightChild->full() && this->leftChild->height() == this->rightChild->height();
	}
	#pragma endregion

	#pragma region BinaryTree
	int BinaryTree::height()
	{
		return this->root->height();
	}

	bool BinaryTree::balanced()
	{
		return this->root->balanced();
	}

	int BinaryTree::amountOfValue(int const value)
	{
		if (this->root == nullptr)
		{
			return 0;
		}

		return this->root->amountOfValue(value);
	}

	bool BinaryTree::full()
	{
		if (this->root == nullptr)
		{
			return true;
		}

		return this->root->full();
	}
	#pragma endregion
}