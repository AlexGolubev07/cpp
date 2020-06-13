#pragma once
#include <string>
#include <iostream>
#include <cassert>

class EncodingTable
{
private :
	class Node
	{
	public:
		char key;
		std::string value;
		Node* next;
		Node* previous;
	};

public:
	Node* head;
	EncodingTable()
	{
		this->head = nullptr;
	}

	std::string& operator[](char const key)
	{
		bool keyDoesntExists = this->head != nullptr;
		assert(keyDoesntExists);

		Node* temp = this->head;

		while (temp->next != nullptr)
		{
			if (temp->key == key)
			{
				return temp->value;
			}
			temp = temp->next;
		}

		if (temp->key == key)
		{
			return temp->value;
		}

		keyDoesntExists = false;
		assert(keyDoesntExists);
	}
};