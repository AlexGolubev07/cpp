#pragma once
#include <string>
#include <cassert>

class HaffmanTree
{
private:
	class Node
	{
	public:
		char letter;
		int frequency;
		Node* left;
		Node* right;
		Node* parent;

		Node(char const letter = '\0', int const frequency = 0)
		{
			this->letter = letter;
			this->frequency = frequency;
			this->left = nullptr;
			this->right = nullptr;
			this->parent = nullptr;
		}
	};

	class SortedList
	{
	private:
		class Node
		{
			Node* next;
			Node* previous;
			HaffmanTree::Node node;

			Node(HaffmanTree::Node node)
			{
				this->next = nullptr;
				this->previous = nullptr;
				this->node.letter = node.letter;
				this->node.frequency = node.frequency;
			}
		};

		Node* head;

	public:

		SortedList()
		{
			this->head = nullptr;
		}

		~SortedList()
		{
			Node* temp = this->head;
			assert(temp != nullptr);

			while (temp->next != nullptr)
			{
				temp = temp->next;
			}

			while (temp != this->head)
			{
				temp = temp->previous;
				delete temp->next;
			}
			delete temp;
		}

		void add(HaffmanTree::Node node)
		{
			Node* temp = this->head;
			if (temp == nullptr)
			{
				temp = new HaffmanTree::SortedList::Node(node);
				temp.frequency = node.frequency;
				temp.letter = node.letter;
				return;
			}
			while (temp->node.frequency < node.frequency)
			{
				if (temp->next != nullptr)
				{
					temp = temp->next;
				}
				else
				{
					temp->next = new HaffmanTree::SortedList::Node(node);
					temp->next->previous = temp;
					temp->next.frequency = node.frequency;
					temp->next.letter = node.letter;
					return;
				}
			}
			temp = temp->previous;
			HaffmanTree::SortedList::Node* next = temp->next;
			temp->next = new HaffmanTree::SortedList::Node(node);
			temp->next->next = next;
			temp->next->previous = temp;
			temp->next.frequency = node.frequency;
			temp->next.letter = node.letter;
		}

		int length()
		{
			HaffmanTree::SortedList::Node* temp = this->head;
			int length = 0;

			if (temp == nullptr)
			{
				return length;
			}

			while (temp->next != nullptr)
			{
				temp = temp->next;
				++length;
			}

			return length;
		}
	};

	Node* root;

	class FrequencyTable
	{
	private:
		class Node
		{
		public:
			char letter;
			int frequency;
			Node* next;
			Node* previous;

			Node(char const letter = '\0', int const frequency = 0)
			{
				// type your code here
			}
		};

	public:
		Node* head;

		FrequencyTable()
		{
			// type your code here
		}

		~FrequencyTable()
		{
			// type your code here
		}

		void add(char const letter, int const frequency = 0)
		{
			// add without sorting
		}

		int& operator[](char const letter)
		{
			// read or edit frequency by letter
		}
	};

	class EncodingTable
	{
	private:
		class Node
		{
		public:
			char letter;
			std::string code;
			Node* next;
			Node* previous;

			Node(char const letter, std::string const code)
			{
				// type your code here
			}
		};

		Node* root;

	public:
		EncodingTable()
		{
			// type your code here
		}

		~EncodingTable()
		{
			// type your code here
		}

		void add(char const letter, std::string const code)
		{
			// type your code here
		}

		std::string& operator[](char const code)
		{
			// type your code here
		}
	};

public:
	HaffmanTree(std::string const text)
	{
		// type your code here
	}

	void printFrequencyTable()
	{
		// type your code here
	}

	void printEncodingTable()
	{
		// type your code here
	}

	std::string getEncodedText()
	{
		// type your code here
	}

	std::string getDecodedText(std::string encodedText)
	{
		// type your code here
	}
};