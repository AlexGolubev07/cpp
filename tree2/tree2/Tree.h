#pragma once
#include "Node.h"
#include <iostream>

class Tree
{
public:
	Node* root;
	
	int height() const;

	Node* getNode(int const level, int const position) const;

	Node* getNode(int data);

	void add(int const level, int const position, int const data);

	Node ** getLevel(int const level) const;

	void printLevel(int const level);

	void printTree();

	friend  std::ostream& operator<<(std::ostream& out, const Tree& tree);

	int elementMaxSize() const;

	std::string toString() const;

	std::string levelToString(int const level, int const amountOfSpacesBefore, int const amountOfSpacesInside,
		int const amountOfElements, int const elementSize) const;
};

