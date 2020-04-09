#include <iostream>
#include "List.h"

using namespace std;

struct Node
{
	Node* next;
	int data;

	Node(int data)
	{
		this->data = data;
		this->next = nullptr;
	}
};

struct List
{
	Node* head;
	int length;
	bool cycl = 0;
	List()
	{
		head = nullptr;
		length = 0;
	}
	void cycle(int length)
	{
		this->length = length;
		cycl = 1;
		if (head == nullptr)
		{
			head = new Node(0);
		}
		Node* temp = head;
		for (int i = 0; i < length; ++i)
		{
			add(0);
		}
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = head;
	}

	void add(int data)
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
	void removeId(int index)
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
	void print()
	{
		if (head == nullptr)
		{
			cout << "List is empty";
			return;
		}
		Node* temp = head;
		int i = 0;
		while (temp->next != nullptr && i != length / 2)
		{
			++i;
			cout << temp->data << " ";
			temp = temp->next;
		}
		if (cycl != 1)
		{
			cout << temp->data << " " << endl;
		}
		cout << endl;
	}
	void index(int index, int data)
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
	~List()
	{
		Node* temp = head;
		if (temp == nullptr)
		{
			return;
		}
		for (int i = 0; i < length; ++i)
		{
			while (temp->next != nullptr && temp->next != head)
			{
				temp = temp->next;
			}
			delete temp;
			temp = nullptr;
			temp = head;
		}
	}
};

int main()
{
	
	return 0;
}