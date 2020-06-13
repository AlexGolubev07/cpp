#pragma once
#include "AssociateArray.h"
#include "Node.h"

class HaffmanTree
{
private:
	class TreeNode
	{
	public:
		char letter;
		int frequency;
		TreeNode* left;
		TreeNode* right;
		TreeNode* parent;

		TreeNode(char const letter = '\0', int const frequency = 0)
		{
			this->letter = letter;
			this->frequency = frequency;
			this->left = nullptr;
			this->right = nullptr;
			this->parent = nullptr;
		};
	};

public:
	HaffmanTree::TreeNode* root;

	HaffmanTree()
	{
		this->root = new HaffmanTree::TreeNode();
	}

	void aaToTree(AssociateArray a)
	{
		int length = a.length();

		if (a.arabianSorted() == false)
		{
			a.sortArabian();
		}

		if (length == 1)
		{
			this->root->frequency = a.head->value;
			this->root->letter = a.head->key;
			this->root->left = new HaffmanTree::TreeNode();
			this->root->left->frequency = a.head->value;
			this->root->left->letter = a.head->key;
			return;
		}

		if (length == 2)
		{
			this->root->frequency = a.head->value + a.head->next->value;
			this->root->letter = '\0';
			this->root->left = new HaffmanTree::TreeNode();
			this->root->left->frequency = a.head->next->value;
			this->root->left->letter = a.head->next->key;
			this->root->right = new HaffmanTree::TreeNode();
			this->root->right->frequency = a.head->value;
			this->root->right->letter = a.head->key;
			return;
		}

		AssociateArray b = a;
		HaffmanTree::TreeNode* temp = this->root;

		while (length != 1)
		{
			b.sortArabian();
			temp->frequency = b.head->value + b.head->next->value;
			temp->letter = '\0';
			temp->left = new HaffmanTree::TreeNode();
			temp->left->frequency = b.head->value;
			temp->left->letter = b.head->key;
			temp->right = new HaffmanTree::TreeNode();
			temp = temp->right;
			b.head = b.head->next;
			length--;
		}
		temp->frequency = b.head->value;
		temp->letter = b.head->key;
	}
};