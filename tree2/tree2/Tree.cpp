#include "Tree.h"
#include <iostream>
#include <string>

using namespace std;

int Tree::height() const
{
	if (this->root == nullptr)
	{
		return 0;
	}

	return this->root->height();
}

Node* Tree::getNode(int level, int position) const
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
			if (t->left == nullptr)
			{
				return nullptr;
			}

			t = t->left;
		}
		else
		{
			if (t->right == nullptr)
			{
				return nullptr;
			}

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

	if (parent == nullptr)
	{
		return;
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

Node ** Tree::getLevel(int const level) const
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

	int zero = 5 - level;

	zero <= 0 ? zero = 1 : zero += 0;

	if (level >= 4)
	{
		std::cout << " ";
	}

	for (int i = 0; i < positions; ++i)
	{
		if (a[i] != nullptr)
		{
			std::cout << a[i]->data;
			for (int j = 0; j < zero; ++j)
			{
				std::cout << " ";
			}
		}
		else
		{
			std::cout << "n";
			for (int j = 0; j < zero; ++j)
			{
				std::cout << " ";
			}
		}
		if (i == positions / 2 - 1 && positions > 2 && level < 4)
		{
			std::cout << " ";
		}
	}

	std::cout << std::endl;
}

void Tree::printTree()
{
	int height = this->height() + 1;
	int zero = pow(2, this->height());

	for (int i = 1; i < height; ++i)
	{
		zero -= i;
		if (i >= 4)
		{
			++zero;
		}

		for (int j = 0; j < zero; ++j)
		{
			std::cout << " ";
		}
		this->printLevel(i);
	}
}

int Tree::elementMaxSize() const
{
	return this->root->elementMaxSize();
}

std::string Tree::levelToString(int const level, int const amountOfSpacesBefore, int const amountOfSpacesInside,
	int const amountOfElements, int const elementMaxSize) const
{
	string s = "";
	Node ** currentLevel = this->getLevel(level);
	int const levelSize = pow(2, level - 1);

	string spacesBefore = string(amountOfSpacesBefore * elementMaxSize, ' ');
	s += spacesBefore;
	
	string element = to_string(this->getLevel(level)[0]->data);
	element = string(elementMaxSize - element.length(), ' ') + element;
	s += element;

	string spacesInside = string(amountOfSpacesInside * elementMaxSize, ' ');
	for (int i = 1; i < levelSize; ++i)
	{
		string element = to_string(this->getLevel(level)[i]->data);
		element = string(elementMaxSize - element.length(), ' ') + element;
		s += spacesInside + element;
	}
	s += spacesBefore;

	return s;
}

std::string Tree::toString() const
{
	string s = "";
	int const h = this->height();
	int dvoika = pow(2, h);
	int amountOfElements = 1;
	int const elementMaxSize = this->elementMaxSize();

	for (int level = 1; level <= h; ++level)
	{
		int const amountOfSpacesBefore = dvoika / 2 - 1;
		int const amountOfSpacesInside = dvoika - 1;
		
		s += this->levelToString(level, amountOfSpacesBefore, amountOfSpacesInside, amountOfElements, elementMaxSize) + "\n";

		amountOfElements *= 2;
		dvoika /= 2;
	}

	return s;
}

std::ostream& operator<<(std::ostream& out, Tree const& tree)
{
	out << tree.toString();

	return out;
}