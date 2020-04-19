#pragma once
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
	};

	class BinaryTree
	{
	public:
		Node* root;

		int height();
	};
}

