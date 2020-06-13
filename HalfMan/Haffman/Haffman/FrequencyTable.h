#pragma once

class FrequencyTable
{
private:
	class Node
	{
	public:
		char key;
		int value;
		Node* next;
		Node* previous;

		Node(char const key = '\0', int value = 0)
		{
			this->key = key;
			this->value = value;
			this->next = nullptr;
			this->previous = nullptr;
		}

		~Node()
		{

		}

		void add(char const key, int const value)
		{
			// add without sotring
		}

		int& operator[](char const key)
		{
			// edit element
		}
	};
};