#pragma once
#include <string>
#include <cassert>
#include <iostream>

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
		public:
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
				temp->node.frequency = node.frequency;
				temp->node.letter = node.letter;
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
					temp->next->node.frequency = node.frequency;
					temp->next->node.letter = node.letter;
					return;
				}
			}
			temp = temp->previous;
			HaffmanTree::SortedList::Node* next = temp->next;
			temp->next = new HaffmanTree::SortedList::Node(node);
			temp->next->next = next;
			temp->next->previous = temp;
			temp->next->node.frequency = node.frequency;
			temp->next->node.letter = node.letter;
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
				this->letter = letter;
				this->frequency = frequency;
				this->next = nullptr;
				this->previous = nullptr;
			}
		};

	public:
		Node* head;

		FrequencyTable()
		{
			this->head = nullptr;
		}

		~FrequencyTable()
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

		void add(char const letter, int const frequency = 0)
		{
			Node* temp = this->head;

			if (temp == nullptr)
			{
				temp = new Node(letter, frequency);
				return;
			}

			while (temp->next != nullptr)
			{
				temp = temp->next;
			}

			temp->next = new Node(letter, frequency);
		}

		int& operator[](char const letter)
		{
			Node* temp = this->head;
			if (temp == nullptr)
			{
				std::cout << "Key doesn't exists" << std::endl;
				return;
			}

			while (temp->letter != letter)
			{
				if (temp->next != nullptr)
				{
					temp = temp->next;
				}
				else
				{
					std::cout << "Key doesn't exists" << std::endl;
					return;
				}
			}

			return temp->frequency;
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
				this->code = code;
				this->letter = letter;
				this->next = nullptr;
				this->previous = nullptr;
			}
		};

		Node* head;

		Node* addHelp(Node* temp, std::string code)
		{
			int length = code.length();
			for (int i = 0; i < length; ++i)
			{
				if (code[i] == '0' && temp->code[i] == '1')
				{
					return temp->previous;
				}

				if (code[i] == '1' && temp->code[i] == '0')
				{
					return temp;
				}

				temp = temp->next;
			}

			return temp->previous;
		}

	public:
		EncodingTable()
		{
			this->head = nullptr;
		}

		~EncodingTable()
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

		void add(char const letter, std::string const code)
		{
			Node* temp = this->head;
			if (temp == nullptr)
			{
				temp = new Node(letter, code);
				return;
			}

			if (temp->next == nullptr)
			{
				if (code.length() > this->head->code.length())
				{
					this->head->next = new Node(letter, code);
					this->head->next->previous = this->head;
					return;
				}

				if (code.length() < this->head->code.length())
				{
					Node* next = this->head;
					this->head = new Node(letter, code);
					this->head->next = next;
					this->head->next->previous = this->head;
					return;
				}

				int length = this->head->code.length();
				for (int i = 0; i < length; ++i)
				{
					if (this->head->code[i] == '1' && code[i] == '0')
					{
						Node* next = this->head;
						this->head = new Node(letter, code);
						this->head->next = next;
						this->head->next->previous = this->head;
						return;
					}

					if (this->head->code[i] == '0' && code[i] == '1')
					{
						this->head->next = new Node(letter, code);
						this->head->next->previous = this->head;
						return;
					}
				}
				this->head = new Node(letter, code);
			}

			while (true)
			{
				if (temp->code.length() == code.length())
				{
					temp = addHelp(temp, code);
					Node* next = temp->next;
					temp->next = new Node(letter, code);
					temp->next->previous = temp;
					temp->next->next = next;
					return;
				}

				if (temp->next != nullptr)
				{
					temp = temp->next;
				}
				else
				{
					temp->next = new Node(letter, code);
					temp->next->previous = temp;
					return;
				}
			}
		}

		std::string& operator[](char const letter)
		{
			Node* temp = this->head;

			if (temp == nullptr)
			{
				std::cout << "Code doesn't exists" << std::endl;
				return;
			}

			while (temp->letter != letter)
			{
				if (temp->next != nullptr)
				{
					temp = temp->next;
				}
				else
				{
					std::cout << "Code doesn't exists" << std::endl;
					return;
				}
			}
			return temp->code;
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