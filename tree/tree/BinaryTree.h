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
	};

	class BinaryTree
	{
	public:
		Node* root;

		int height();

		bool balanced();

		int amountOfValue(int const value);

		bool full();
	};
}

