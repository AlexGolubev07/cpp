#pragma once
#include <iostream>

namespace Tree
{
	class Node
	{
	public:
		int data;
		Node* leftChild;
		Node* rightChild;
		Node* parent;

		Node(int const data);

		int height();

		bool balanced();

		int amountOfValue(int const value);
		
		bool full();

		bool strict();

		int amountOfIgor();

		int shortestBranchLength();

		Node* shortestBranchLastNode(int const currentLevel, int const shortestBranchLength);
	};

	class BinaryTree
	{
	public:
		Node* root;

		int height();

		bool balanced();

		int amountOfValue(int const value);

		bool full();
		
		bool strict();

		int amountOfIgor();

		int shortestBranchLength();

		Node* shortestBranchLastNode();

		std::string shortestBranch();
	};
}

