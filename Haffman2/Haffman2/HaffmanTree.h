#pragma once
#include <string>
#include <cassert>
#include <iostream>

class HaffmanTree
{
private:
#pragma region Private
#pragma region classes
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

		int height()
		{
			if (this->left != nullptr && this->right != nullptr)
			{
				int left = this->left->height();
				int right = this->right->height();
				return left > right ? left + 1 : right + 1;
			}

			if (this->left != nullptr && this->right == nullptr)
			{
				return this->left->height() + 1;
			}

			if (this->left == nullptr && this->right != nullptr)
			{
				return this->right->height() + 1;
			}

			return 1;
		}

		int elementMaxSize()
		{
			int currentSize = std::to_string(this->frequency).length();

			if (this->left != nullptr && this->right != nullptr)
			{
				int left = this->left->elementMaxSize();
				int right = this->right->elementMaxSize();
				int maxLR = left > right ? left : right;
				return maxLR > currentSize ? maxLR : currentSize;
			}

			if (this->left != nullptr && this->right == nullptr)
			{
				int left = this->left->elementMaxSize();
				return left > currentSize ? left : currentSize;
			}

			if (this->left == nullptr && this->right != nullptr)
			{
				int right = this->right->elementMaxSize();
				return right > currentSize ? right : currentSize;
			}

			return currentSize;
		}

		void printFrequencyTable()
		{
			if (this->left == nullptr && this->right == nullptr)
			{
				if (this->frequency <= 10)
				{
					std::cout << this->letter << ": " << this->frequency << std::endl;
				}
				else
				{
					std::cout << this->letter << ":" << this->frequency << std::endl;
				}
				return;
			}
			this->left->printFrequencyTable();
			this->right->printFrequencyTable();
		}

		void helpPrintEncodingTable(std::string code)
		{
			if (this->left == nullptr && this->right == nullptr)
			{
				std::cout << this->letter << ": " << code << std::endl;
				return;
			}

			this->left->helpPrintEncodingTable(code + "0");
			this->right->helpPrintEncodingTable(code + "1");
		}

		std::string getNodeCode(char letter, std::string code)
		{
			if (this->letter == letter)
			{
				return code;
			}

			if (this->left != nullptr && this->right != nullptr)
			{
				if (this->left->getNodeCode(letter, code + "0") == " ")
				{
					return this->right->getNodeCode(letter, code + "1");
				}
				return this->left->getNodeCode(letter, code + "0");
			}

			return " ";
		}

		Node* getNode(int const frequency)
		{
			if (this->frequency == frequency)
			{
				return this;
			}

			if (this->left != nullptr && this->right != nullptr)
			{
				if (this->left->getNode(frequency) == nullptr)
				{
					return this->right->getNode(frequency);
				}
				return this->left->getNode(frequency);
			}

			if (this->left == nullptr && this->right != nullptr)
			{
				return this->right->getNode(frequency);
			}

			if (this->left != nullptr && this->right == nullptr)
			{
				return this->right->getNode(frequency);
			}

			return nullptr;
		}
	};

	class SortedList
	{
	public:
		class Node
		{
		public:
			Node* next;
			Node* previous;
			HaffmanTree::Node* node;

			Node(HaffmanTree::Node* node)
			{
				this->next = nullptr;
				this->previous = nullptr;
				this->node = node;
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

		void add(HaffmanTree::Node* node)
		{
			Node* temp = this->head;
			if (temp == nullptr)
			{
				this->head = new HaffmanTree::SortedList::Node(node);
				this->head->node->frequency = node->frequency;
				this->head->node->letter = node->letter;
				return;
			}
			while (temp->node->frequency < node->frequency)
			{
				if (temp->next != nullptr)
				{
					temp = temp->next;
				}
				else
				{
					temp->next = new HaffmanTree::SortedList::Node(node);
					temp->next->previous = temp;
					temp->next->node->frequency = node->frequency;
					temp->next->node->letter = node->letter;
					return;
				}
			}

			if (temp == this->head)
			{
				Node* next = this->head;
				this->head = new HaffmanTree::SortedList::Node(node);
				this->head->next = next;
				this->head->next->previous = this->head;
				return;
			}
			temp = temp->previous;
			HaffmanTree::SortedList::Node* next = temp->next;
			temp->next = new HaffmanTree::SortedList::Node(node);
			temp->next->next = next;
			temp->next->next->previous = temp->next;
			temp->next->previous = temp;
			temp->next->node->frequency = node->frequency;
			temp->next->node->letter = node->letter;
		}

		int length()
		{
			Node* temp = this->head;
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

			return length + 1;
		}

		HaffmanTree::Node* executioner()
		{
			if (this->length() == 1)
			{
				Node* head = this->head;
				this->head = nullptr;
				return head->node;
			}
			Node* next = this->head->next;
			Node* head = this->head;
			this->head = next;
			this->head->previous = nullptr;

			return head->node;
		}
	};

	class FrequencyTable
	{
	public:
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

		void add(char const letter, int const frequency = 1)
		{
			Node* temp = this->head;

			if (temp == nullptr)
			{
				this->head = new Node(letter, frequency);
				return;
			}

			while (temp->next != nullptr)
			{
				temp = temp->next;
			}

			temp->next = new Node(letter, frequency);
			temp->next->previous = temp;
		}

		bool letterExists(char const letter)
		{
			Node* temp = this->head;
			
			if (temp == nullptr)
			{
				return false;
			}

			while (temp->letter != letter)
			{
				if (temp->next != nullptr)
				{
					temp = temp->next;
				}
				else
				{
					return false;
				}
			}

			return true;
		}

		int& operator[](char const letter)
		{
			Node* temp = this->head;
			if (temp == nullptr)
			{
				std::cout << "Key doesn't exists" << std::endl;
				assert(0 == 1);
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
					assert(0 == 1);
				}
			}

			return temp->frequency;
		}

		friend std::ostream& operator<<(std::ostream out, FrequencyTable const& frequencyTable)
		{
			Node* temp = frequencyTable.head;

			if (temp == nullptr)
			{
				out << "Table is empty";
				return out;
			}

			while (temp->next != nullptr)
			{
				out << temp->letter << ": " << temp->frequency;
				temp = temp->next;
			}
			out << temp->letter << ": " << temp->frequency;

			return out;
		}

		std::string toString()
		{
			std::string s = "";

			Node* temp = this->head;

			if (temp == nullptr)
			{
				s += "Table is empty";
				return s;
			}

			while (temp->next != nullptr)
			{
				s += std::to_string(temp->letter) + ": " + std::to_string(temp->frequency) + " ";
				temp = temp->next;
			}
			s += std::to_string(temp->letter) + ": " + std::to_string(temp->frequency) + " ";

			return s;
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
				assert(0 == 1);
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
					assert(0 == 1);
				}
			}
			return temp->code;
		}
	};
#pragma endregion classes
	Node* root;
	std::string decodedText;
	
	int elementMaxSize() const
	{
		return this->root->elementMaxSize();
	}

	int height() const
	{
		if (this->root == nullptr)
		{
			return 0;
		}

		return this->root->height();
	}

	std::string operator[](char const letter)
	{
		return this->root->getNodeCode(letter, "");
	}

	std::string getEncodedText(std::string text)
	{
		int length = text.length();
		std::string encodedText = "";

		for (int i = 0; i < length; ++i)
		{
			encodedText += this->operator[](text[i]);
		}

		return encodedText;
	}

	std::string getDecodedText()
	{
		Node* temp = this->root;
		std::string encodedText = this->encodedText;
		std::string decodedText = "";
		int length = encodedText.length();

		for (int i = 0; i < length; ++i)
		{
			if (encodedText[i] == '0')
			{
				temp = temp->left;
			}
			else
			{
				temp = temp->right;
			}
			if (temp->left == nullptr && temp->right == nullptr)
			{
				decodedText += std::string(1, temp->letter);
				temp = this->root;
			}
		}
		//от греха подальше
		return decodedText;
	}

	Node* getNode(int frequency)
	{
		return this->root->getNode(frequency);
	}

	Node* getNode(int level, int position) const
	{
		Node* t = this->root;

		if (this->height() == 1)
		{
			return t;
		}

		int dvoika = pow(2, level - 1);

		/*
		обработка исключений
		*/

		for (int i = 0; i < level - 1; ++i)
		{
			if (position <= dvoika / 2)
			{
				if (t->left == nullptr)
				{
					return nullptr;
				}

				t = t->left;
			}
			else
			{
				if (t->right == nullptr)
				{
					return nullptr;
				}

				t = t->right;
				position -= dvoika / 2;
			}
			dvoika /= 2;
		}

		return t;
	}

	Node** getLevel(int const level) const
	{
		int positions = pow(2, level - 1);

		Node** a = new Node * [positions];

		if (level == 1)
		{
			positions = 1;

			a[0] = this->root;
			return a;
		}

		for (int i = 0; i < positions; ++i)
		{
			a[i] = this->getNode(level, i + 1);
		}

		return a;
	}

#pragma region out
	std::string levelToStringFrequency(int const level, int const amountOfSpacesBefore, int const amountOfSpacesInside,
		int const amountOfElements, int const elementMaxSize) const
	{
		std::string s = "";
		Node** currentLevel = this->getLevel(level);
		int const levelSize = pow(2, level - 1);

		std::string spacesBefore = std::string(amountOfSpacesBefore * elementMaxSize, ' ');
		s += spacesBefore;

		std::string element = "";
		if (this->getLevel(level)[0] != nullptr)
		{
			element += std::to_string(this->getLevel(level)[0]->frequency);
		}
		else
		{
			element = " ";
		}
		element = std::string(elementMaxSize - element.length(), ' ') + element;
		s += element;

		std::string spacesInside = std::string(amountOfSpacesInside * elementMaxSize, ' ');
		for (int i = 1; i < levelSize; ++i)
		{
			if (this->getLevel(level)[i] != nullptr)
			{
				element = std::to_string(this->getLevel(level)[i]->frequency);
			}
			else
			{
				element = " ";
			}
			element = std::string(elementMaxSize - element.length(), ' ') + element;
			s += spacesInside + element;
		}
		s += spacesBefore;

		return s;
	}

	std::string levelToStringLetter(int const level, int const amountOfSpacesBefore, int const amountOfSpacesInside,
		int const amountOfElements, int const elementMaxSize) const
	{
		std::string s = "";
		Node** currentLevel = this->getLevel(level);
		int const levelSize = pow(2, level - 1);

		std::string spacesBefore = std::string(amountOfSpacesBefore * elementMaxSize, ' ');
		s += spacesBefore;

		std::string element = "";
		if (this->getLevel(level)[0] != nullptr)
		{
			if (this->getLevel(level)[0]->letter != '\0')
			{
				element = std::string(1, this->getLevel(level)[0]->letter);
			}
			else
			{
				element = std::string(1, '0');
			}
		}
		else
		{
			element = " ";
		}
		element = std::string(elementMaxSize - element.length(), ' ') + element;
		s += element;

		std::string spacesInside = std::string(amountOfSpacesInside * elementMaxSize, ' ');
		for (int i = 1; i < levelSize; ++i)
		{
			if (this->getLevel(level)[i] != nullptr)
			{
				if (this->getLevel(level)[i]->letter != '\0')
				{
					element = std::string(1, this->getLevel(level)[i]->letter);
				}
				else
				{
					element = std::string(1, '0');
				}
			}
			else
			{
				element = " ";
			}
			element = std::string(elementMaxSize - element.length(), ' ') + element;
			s += spacesInside + element;
		}
		s += spacesBefore;

		return s;
	}

	std::string toStringFrequency() const
	{
		std::string s = "";
		int const h = this->height();
		int dvoika = pow(2, h);
		int amountOfElements = 1;
		int const elementMaxSize = 1; // this->elementMaxSize();

		for (int level = 1; level <= h; ++level)
		{
			int const amountOfSpacesBefore = dvoika / 2 - 1;
			int const amountOfSpacesInside = dvoika - 1;

			s += this->levelToStringFrequency(level, amountOfSpacesBefore, amountOfSpacesInside, amountOfElements, elementMaxSize) + "\n";

			amountOfElements *= 2;
			dvoika /= 2;
		}

		return s;
	}

	std::string toStringLetters() const
	{
		std::string s = "";
		int const h = this->height();
		int dvoika = pow(2, h);
		int amountOfElements = 1;
		int const elementMaxSize = 1; // this->elementMaxSize();

		for (int level = 1; level <= h; ++level)
		{
			int const amountOfSpacesBefore = dvoika / 2 - 1;
			int const amountOfSpacesInside = dvoika - 1;

			s += this->levelToStringLetter(level, amountOfSpacesBefore, amountOfSpacesInside, amountOfElements, elementMaxSize) + "\n";

			amountOfElements *= 2;
			dvoika /= 2;
		}

		return s;
	}
#pragma endregion out

#pragma endregion private

public:
	std::string encodedText;

	HaffmanTree(std::string const text)
	{
		FrequencyTable frequencyTable;
		int length = text.length();
		for (int i = 0; i < length; ++i)
		{
			if (frequencyTable.letterExists(text[i]))
			{
				++frequencyTable[text[i]];
			}
			else
			{
				frequencyTable.add(text[i]);
			}
		}
		
		SortedList sortedList;
		HaffmanTree::FrequencyTable::Node* temp = frequencyTable.head;

		while (temp->next != nullptr)
		{
			sortedList.add(new HaffmanTree::Node(temp->letter, temp->frequency));
			temp = temp->next;
		}
		sortedList.add(new HaffmanTree::Node(temp->letter, temp->frequency));

		while (sortedList.length() != 1)
		{
			Node* left = sortedList.executioner();
			Node* right = sortedList.executioner();
			HaffmanTree::Node* parent = new HaffmanTree::Node('\0', left->frequency + right->frequency);
			parent->left = left;
			parent->right = right;
			left->parent = parent;
			right->parent = parent;
			sortedList.add(parent);
		}

		this->root = sortedList.head->node;
		this->decodedText = text;
		this->encodedText = this->getEncodedText(text);
	}

	void printFrequencyTable()
	{
		if (this->root == nullptr)
		{
			std::cout << "Tree is empty" << std::endl;
			return;
		}

		this->root->printFrequencyTable();
		std::cout << std::endl << std::endl;
	}

	void printEncodingTable()
	{
		if (this->root == nullptr)
		{
			std::cout << "Tree is empty" << std::endl;
			return;
		}

		this->root->helpPrintEncodingTable("");
		std::cout << std::endl << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& out, HaffmanTree const& tree)
	{
		 out << tree.toStringFrequency();
		 out << std::endl;
		 out << tree.toStringLetters();
		 out << std::endl;

		return out;
	}
};





































// ebooy