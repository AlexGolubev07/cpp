#include "BinaryTree.h"
#include <string>

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

	bool Node::strict()
	{
		if ((this->leftChild == nullptr && this->rightChild != nullptr) || (this->leftChild != nullptr && this->rightChild == nullptr))
		{
			return false;
		}

		if (this->leftChild == nullptr && this->rightChild == nullptr)
		{
			return true;
		}

		return this->leftChild->strict() && this->rightChild->strict();
	}

	int Node::amountOfIgor()
	{
		if (this->leftChild == nullptr && this->rightChild == nullptr)
		{
			return 1;
		}

		if (this->leftChild != nullptr && this->rightChild == nullptr)
		{
			return this->leftChild->amountOfIgor();
		}

		if (this->leftChild == nullptr && this->rightChild != nullptr)
		{
			return this->rightChild->amountOfIgor();
		}

		return this->leftChild->amountOfIgor() + this->rightChild->amountOfIgor();

	}

	int min(int x, int y)
	{
		if (x < y)
		{
			return x;
		}
		return y;
	}

	int Node::shortestBranchLength()
	{
		if (this->leftChild == nullptr && this->rightChild == nullptr)
		{
			return 1;
		}

		if (this->leftChild != nullptr && this->rightChild == nullptr)
		{
			return 1 + this->leftChild->shortestBranchLength();
		}

		if (this->leftChild == nullptr && this->rightChild != nullptr)
		{
			return 1 + this->rightChild->shortestBranchLength();
		}

		return 1 + min(this->leftChild->shortestBranchLength(), this->rightChild->shortestBranchLength());
	}

	Node* Node::shortestBranchLastNode(int const currentLevel, int const shortestBranchLength)
	{
		if (currentLevel > shortestBranchLength)
		{
			return nullptr;
		}

		if (this->leftChild == nullptr && this->rightChild == nullptr && currentLevel == shortestBranchLength)
		{
			return this;
		}

		if (this->leftChild != nullptr && this->rightChild == nullptr)
		{
			return this->leftChild->shortestBranchLastNode(currentLevel + 1, shortestBranchLength);
		}

		if (this->leftChild == nullptr && this->rightChild != nullptr)
		{
			return this->rightChild->shortestBranchLastNode(currentLevel + 1, shortestBranchLength);
		}

		Node* l = this->leftChild->shortestBranchLastNode(currentLevel + 1, shortestBranchLength);
		if (l != nullptr)
		{
			return l;
		}
		else
		{
			return this->rightChild->shortestBranchLastNode(currentLevel + 1, shortestBranchLength);
		}
	}

	void Node::getLevel(int level, Node** a)
	{
		if (this->level > level)
		{
			return;
		}

		if (this->level == level)
		{
			int index = -1;
			if (this->parent->leftChild == this)
			{
				index = 2 * this->parent->position;
			}
			else
			{
				index = 2 * this->parent->position + 1;
			}
			a[index] = this;
			return;
		}

		if (this->leftChild != nullptr && this->rightChild != nullptr)
		{
			this->leftChild->getLevel(level, a);
			this->rightChild->getLevel(level, a);
		}

		if (this->leftChild != nullptr && this->rightChild == nullptr)
		{
			this->leftChild->getLevel(level, a);
		}

		if (this->leftChild == nullptr && this->rightChild != nullptr)
		{
			this->rightChild->getLevel(level, a);
		}

		return;
	}

	Node* Node::parentToAdd(int const level, int position, int amount)
	{
		if (this->level == level - 1)
		{
			return this;
		}

		if (position <= amount / 2)  // error
		{
			amount /= 2;
			this->leftChild->parentToAdd(level, position, amount);
		}
		else
		{
			position -= amount / 2;
			amount /= 2;
			this->rightChild->parentToAdd(level, position, amount);
		}
	}
#pragma endregion

#pragma region BinaryTree
	Node* BinaryTree::parentToAdd(int const level, int const position)
	{
		int amount = pow(2, level - 1);
		if (level != 2)
		{
			return this->root->parentToAdd(level, position, amount);
		}
		else
		{
			return this->root;
		}
	}

	void BinaryTree::add(int level, int position, int const data)
	{
		Node* t = this->parentToAdd(level, position);
		if (position % 2 == 1)
		{
			t->leftChild = new Node(data);
			t->leftChild->parent = t;
			t->leftChild->leftChild = nullptr;
			t->leftChild->rightChild = nullptr;
			t->leftChild->level = level;
			t->leftChild->position = position;
		}
		else
		{
			t->rightChild = new Node(data);
			t->rightChild->parent = t;
			t->rightChild->leftChild = nullptr;
			t->rightChild->rightChild = nullptr;
			t->rightChild->level = level;
			t->rightChild->position = position;
		}
	}

	void BinaryTree::addd(int level, int position, int const data)
	{
		Node* t = this->root;
		int helpLevel = level;
		while (t->level != helpLevel && t->position != position)
		{
			if (pow(2, helpLevel - 2) >= position)
			{
				if (t->leftChild != nullptr)
				{
					t = t->leftChild;
				}
				else
				{
					t->leftChild = new Node(data);
					t->leftChild->leftChild = nullptr;
					t->leftChild->leftChild = nullptr;
					t->leftChild->parent = t;
					t->leftChild->level = level;
					t->leftChild->position = position;
					return;
				}
			}
			else
			{
				if (t->rightChild != nullptr)
				{
					t = t->rightChild;
				}
				else
				{
					t->rightChild = new Node(data);
					t->rightChild->rightChild = nullptr;
					t->rightChild->rightChild = nullptr;
					t->rightChild->parent = t;
					t->rightChild->level = level;
					t->rightChild->position = position;
					return;
				}
				position -= pow(2, level - 2);
			}
			++helpLevel;
		}
	}

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

	bool BinaryTree::strict()
	{
		if (this->root == nullptr)
		{
			return true;
		}
		return this->root->strict();
	}

	int BinaryTree::amountOfIgor()
	{
		if (this->root == nullptr)
		{
			return 0;
		}

		return this->root->amountOfIgor();
	}

	int BinaryTree::shortestBranchLength()
	{
		if (this->root == nullptr)
		{
			return 0;
		}

		return root->shortestBranchLength();
	}

	Node* BinaryTree::shortestBranchLastNode()
	{
		if (this == nullptr)
		{
			return this->root;
		}
		return this->root->shortestBranchLastNode(1, this->shortestBranchLength());
	}

	std::string BinaryTree::shortestBranch()
	{
		Node* l = this->shortestBranchLastNode();
		std::string shortestBranch = "";
		while (l != this->root)
		{
			shortestBranch = std::to_string(l->data) + " " + shortestBranch;
			l = l->parent;
		}
		shortestBranch = std::to_string(this->root->data) + " " + shortestBranch;
		return shortestBranch;
	}

	Node** BinaryTree::getLevel(int level)
	{
		int size = int(pow(2, level - 1));
		Node** a = new Node * [size];
		for (int i = 0; i < size; ++i)
		{
			a[i] = nullptr;
		}
		this->root->getLevel(level, a);
		return a;
	}

	Node*** BinaryTree::arrayOfLevels()
	{
		Node*** a = new Node * *[this->height()];
		a[0] = new Node * [1];
		a[0][0] = root;
		for (int i = 1; i < this->height(); ++i)
		{
			a[i] = this->getLevel(i);
		}
		return a;
	}

	void BinaryTree::printLevel(int level)
	{
		int size = int(pow(2, level - 1));
		Node** a = this->getLevel(level);
		for (int i = 0; i < size; ++i)
		{
			if (a[i] == nullptr)
			{
				std::cout << "null" << " ";
			}
			else
			{
				std::cout << a[i]->data << " ";
			}
		}
	}
#pragma endregion
}