#pragma once
#include <iostream>

namespace Tree
{
	class Node
	{
	public:
		int data;
		int level;
		int position;
		Node* leftChild;
		Node* rightChild;
		Node* parent;

		Node(int const data = 0);

		int height();

		bool balanced();

		int amountOfValue(int const value);
		
		bool full();

		bool strict();

		int amountOfIgor();

		int shortestBranchLength();

		Node* shortestBranchLastNode(int const currentLevel, int const shortestBranchLength);

		Node* parentToAdd(int const level, int const position, int const helpLevel);

		void getLevel(int level, Node** a);
	};

	class BinaryTree
	{
	public:
		Node* root;

		Node* parentToAdd(int const level, int const position);

		void add(int level, int position, int const data);

		void addd(int level, int position, int const data);

		int height();

		bool balanced();

		int amountOfValue(int const value);

		bool full();
		
		bool strict();

		int amountOfIgor();

		int shortestBranchLength();

		Node* shortestBranchLastNode();

		std::string shortestBranch();

		Node** getLevel(int level);

		Node*** arrayOfLevels();

		void printLevel(int level);
	};
}

