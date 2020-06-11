#pragma once
#include <string>

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
			// type your code here
		}
	};

	class List
	{
	private:
		class Node
		{
			Node* next;
			Node* previous;
			HaffmanTree::Node node;
		};

		Node* head;

	public:
		List()
		{
			// type your code here
		}

		~List()
		{
			// type your code here
		}

		void sortedAdd(HaffmanTree::Node node)
		{
			// type your code here
		}

		int length()
		{
			// type your code here
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