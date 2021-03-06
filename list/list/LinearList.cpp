#include "LinearList.h"
#include <iostream>
#include <cassert>

using namespace std;

namespace LinearList
{
	Node::Node(int data)
	{
		this->data = data;
		this->next = nullptr;
	}

	List::List()
	{
		head = nullptr;
		length = 0;
	}

	void List::add(int data)
	{
		if (head == nullptr)
		{
			head = new Node(data);
			++length;
			return;
		}
		Node* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = new Node(data);
		++length;
	}

	void List::removeId(int index)
	{
		Node* temp = head;
		int i = 0;
		while (i != index - 2)
		{
			++i;
			temp = temp->next;
		}
		Node* p = temp->next;
		temp->next = temp->next->next;
		delete p;
		--length;
	}

	std::ostream& operator<< (std::ostream& out, List const& l)
	{
		if (l.head == nullptr)
		{
			out << "List is empty";
			return out;
		}
		Node* temp = l.head;
		while (temp->next != nullptr)
		{
			out << temp->data << " ";
			temp = temp->next;
		}
		out << temp->data;
		out << endl;
		return out;
	}

	bool operator==(List const& l1, List const& l2)
	{
		if (l1.length != l2.length)
		{
			return false;
		}
		Node* temp1 = l1.head;
		Node* temp2 = l2.head;
		while (temp1->next != nullptr)
		{
			if (temp1->data != temp2->data)
			{
				return false;
			}
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		return true;
	}

	int& List::operator[](int const j)
	{
		assert(j <= length);

		Node* temp = head;

		for (int i = 0; i < j - 1; ++i)
		{
			temp = temp->next;
		}

		return temp->data;
	}

	void List::index(int index, int data)
	{
		if (head == nullptr)
		{
			return;
		}
		Node* temp = head;
		int i = 0;
		while (temp->next != nullptr && i != index)
		{
			++i;
			temp = temp->next;
		}
		temp->data = data;
	}

	List::~List()
	{
		Node* temp = head;
		if (temp == nullptr)
		{
			return;
		}
		if (head->next == nullptr)
		{
			delete head;
			return;
		}
		while (head->next->next != nullptr)
		{
			while (temp->next->next != nullptr)
			{
				temp = temp->next;
			}
			delete temp->next;
			temp->next = nullptr;
			temp = head;
		}
		delete head->next;
		delete head;
	}
}