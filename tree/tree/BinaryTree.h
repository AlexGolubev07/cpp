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

		friend std::ostream& operator<< (std::ostream& out, BinaryTree const& t);
	};

	class BinaryTree
	{
	public:
		Node* root;

		int height();

		bool balanced()
		{
			return root->balanced();
		}
	};
}

