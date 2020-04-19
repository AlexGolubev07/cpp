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

		int height();
	};

	class BinaryTree
	{
	public:
		Node* root;

		int height()
		{
			return root->height();
		}
	};
}

