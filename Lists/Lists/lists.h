#pragma once

template <class Type = int>
class myList
{
public:
	class Node
	{
	public:
		Type value;
		Node* next = nullptr;
		Node* previous = nullptr;

		Node(Type const& value)
		{
			this->value = value;
		}
	};

	Node* head;

	myList()
	{
		this->head = nullptr;
	}

	~myList()
	{
		Node* temp = this->head;

		if (temp == nullptr)
		{
			return;
		}

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

	void pushFront(Node const& node)
	{
		if (this->head == nullptr)
		{
			this->head = new Node(node.value);
			return;
		}

		Node* next = this->head;
		this->head = new Node(node.value);
		this->head->next = next;
		this->head->next->previous = this->head;
	}

	void pushBack(Node const& node)
	{
		Node* temp = this->head;

		if (temp == nullptr)
		{
			this->head = new Node(node.value);
			return;
		}

		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		temp->next = new Node(node.value);
	}

	void popFront()
	{
		if (this == nullptr)
		{
			return;
		}

		Node* next = this->head->next;

		delete this->head;
		this->head = next;
		this->head->previous = nullptr;
	}

	void popBack()
	{
		Node* temp = this->head;

		if (temp == nullptr)
		{
			return;
		}

		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		if (temp->previous != nullptr)
		{
			temp = temp->previous;

			delete temp->next;

			temp->next = nullptr;

			return;
		}
		temp = nullptr;
	}
};