#pragma once
class Node
{
public:
	char key;
	int value;
	Node* parent;
	Node* next;

	Node(char const key = '\0', int const value = 0)
	{
		this->key = key;
		this->value = value;
		this->parent = nullptr;
		this->next = nullptr;
	}
};

