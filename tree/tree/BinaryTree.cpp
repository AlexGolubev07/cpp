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

	std::ostream& operator<< (std::ostream& out, BinaryTree const& t)
	{
		int cycle = 0;
		for (int i = 0; i < t.root->height * 2; ++i)
		{
			std::cout << " ";
		}
		std::cout << t.root->data;
		while (cycle != t.root->height)
		{
			int c = 1;
			for (int s = 0; s < cycle - 1;++s)
			{
				c *= 2;
			}
			for (int s = 0; s < t.root->height * 2 - c; ++s)
			{
				std::cout << " ";
			}
			std::cout << "/ \'";
			for (int colvo = 0; colvo < c; ++colvo)
			{
				for (int s = 0; s < c; ++s)
				{
					std::cout << " ";
				}
				cout
			}
		}
		return out;
	}
}