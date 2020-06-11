#pragma once
#include "Node.h"
#include <cassert>
#include <iostream>

class AssociateArray
{
public:
	Node* head;

	AssociateArray()
	{
		this->head = nullptr;
	}

	/*AssociateArray(string line)
	{
		AssociateArray a;
		for (int i = 0; i < line.length(); ++i)
		{
			if (a.keyExists(line[i]) == true)
			{
				++a[line[i]];
			}
			else
			{
				a.add(line[i], 1);
			}
		}
		a.sort();
	}*/

	void usualAdd(char const key, int const value)
	{
		assert(this->keyExists(key) == false);

		if (this->head == nullptr)
		{
			this->head = new Node(key, value);
			return;
		}

		Node* temp = this->head;

		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		temp->next = new Node(key, value);
		temp->next->parent = temp;
	}

	void add(char const key, int const value)
	{
		assert(this->keyExists(key) == false);

		Node* temp = this->head;

		if (temp == nullptr)
		{
			this->head = new Node(key, value);
			return;
		}

		if (value > temp->value)
		{
			this->head = new Node(key, value);
			this->head->next = temp;
			this->head->next->parent = this->head;
			return;
		}

		while (temp->value >= value)
		{
			if (temp->next == nullptr)
			{
				temp->next = new Node(key, value);
				temp->next->parent = temp;
				return;
			}
			temp = temp->next;
		}

		Node* next = temp->next;
		temp = temp->parent;
		temp->next = new Node(key, value);
		temp->next->parent = temp;
		temp->next->next = next;
	}

	int& operator[](char const key)
	{
		assert(this->keyExists(key) == true);

		Node* temp = this->head;

		while (temp->next != nullptr)
		{
			if (temp->key == key)
			{
				return temp->value;
			}
			temp = temp->next;
		}

		return temp->value;
	}

	bool sorted()
	{
		Node* temp = this->head;

		while(temp->next != nullptr)
		{
			if (temp->value < temp->next->value)
			{
				return false;
			}

			temp = temp->next;
		}

		return true;
	}

	friend std::ostream& operator<<(std::ostream& out, AssociateArray const& associateArray)
	{
		Node* temp = associateArray.head;
		
		if (temp == nullptr)
		{
			out << "Array is empty" << std::endl;
			return out;
		}

		while (temp->next != nullptr)
		{
			out << temp->key << ": " << temp->value << "  ";
			temp = temp->next;
		}
		out << temp->key << ": " << temp->value << std::endl;

		return out;
	}

	friend std::istream& operator>>(std::istream& is, AssociateArray& associateArray)
	{
		char key = ' ';
		int value = 0;
		for (int i = 0; i < 1; )
		{
			std::cin >> key;
			while (associateArray.keyExists(key) == true)
			{
				if (associateArray.keyExists(key) == true)
				{
					std::cout << "Key exists" << std::endl << std::endl;
				}
				std::cin >> key;
			}
			if (key == '0')
			{
				associateArray.sort();
				return is;
			}
			std::cin >> value;
			std::cout << std::endl;
			associateArray.add(key, value);
		}
	}

	AssociateArray operator=(AssociateArray a2)
	{
		Node* temp = this->head;
		Node* aTemp = a2.head;
		int length = a2.length();
		for (int i = 0; i < length; ++i)
		{
			temp->key = aTemp->key;
			temp->value = aTemp->value;
			temp->next = aTemp->next;
			temp->parent = aTemp->parent;
			temp = temp->next;
			aTemp = aTemp->next;
		}
		AssociateArray res;
		res.head = this->head;
		return res;
	}

	bool keyExists(char const key)
	{
		Node* temp = this->head;

		if (temp == nullptr)
		{
			return false;
		}

		while (temp->next != nullptr)
		{
			if (temp->key == key)
			{
				return true;
			}
			temp = temp->next;
		}

		if (temp->key == key)
		{
			return true;
		}

		return false;
	}

	int length()
	{
		Node* temp = this->head;
		int length = 1;
		while (temp->next != nullptr)
		{
			temp = temp->next;
			++length;
		}
		return length;
	}

	void sort()
	{
		Node* temp = this->head;
		Node* current = nullptr;
		Node* maxNodeValue = nullptr;
		int max = -1;
		int length = this->length();
		int t = length;
		for (int i = 0; i < length - 1; ++i)
		{
			temp = this->head;
			max = -1;

			for (int j = 0; j < (length - t); ++j)
			{
				temp = temp->next;
			}

			current = temp;
			maxNodeValue = temp;

			for (int j = 0; j < t; ++j)
			{
				if (temp->value > max)
				{
					max = temp->value;
					maxNodeValue = temp;
				}
				temp = temp->next;
			}

			char key = current->key;
			int value = current->value;
			current->key = maxNodeValue->key;
			current->value = maxNodeValue->value;
			maxNodeValue->key = key;
			maxNodeValue->value = value;
			--t;
		}

	}

	~AssociateArray()
	{
		Node* temp = this->head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		while (temp != this->head)
		{
			temp = temp->parent;
			delete temp->next;
		}
		delete temp;
	}
};

// a['h'] = 2;

