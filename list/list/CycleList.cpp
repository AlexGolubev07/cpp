#include "CycleList.h"
#include <cassert>

using namespace std;

namespace CycleList
{
	Node::Node(int const data)
	{
		this->data = data;
		this->next = nullptr;
		this->previous = nullptr;
	}

	// constructors, destructor, output 
	List::List()
	{
		head = nullptr;
		length = 0;
	}

	/*List::~List()
	{
		Node* temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		while (temp->previous != head)
		{
			delete temp;
			temp = temp->previous;
		}
		delete head;
	}*/

	// output
	std::ostream& operator<< (std::ostream& out, List const& c)
	{
		if (c.head == nullptr)
		{
			out << "List is empty";
			return out;
		}

		if (c.head->next == c.head)
		{
			out << c.head->data << " ";
		}

		Node* temp = c.head;
		while (temp->next != c.head)
		{
			out << temp->data << " ";
			temp = temp->next;
		}
		out << temp->data << endl;
		return out;
	}

	// others
	void List::add(int const data)
	{
		if (head == nullptr)
		{
			head = new Node(data);
			head->next = head; 
			head->previous = head;
			++length;
			return;
		}

		Node* temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = nullptr;
		temp->next = new Node(data);
		temp->next->previous = temp;
		temp->next->next = head;
		head->previous = temp->next;
		++length;
		return;
	}

	void List::removeId(int id)
	{
		assert(id >= 1);

		if (id > length)
		{
			id = id % length;
		}
		
		if (id == 1)
		{
			Node* newHead = head->next;
			Node* tail = head->previous;
			delete head;
			head = newHead;
			head->previous = tail;
			tail->next = head;
			--length;

			return;
		}

		int i = 0;
		Node* temp = head;
		while (i + 2 < id)
		{
			++i;
			temp = temp->next;
		}
		Node* toDelete = temp->next;
		temp->next = temp->next->next;
		temp->next->previous = temp;
		delete toDelete;
		--length;
	}

	Node* List::pointerId(int id)
	{
		assert(id >= 1);
		if (id > length)
		{
			id = id % length;
		}
		int i = 0;
		Node* temp = head;
		while (i != id)
		{
			++i;
			temp = temp->next;
		}
		return temp->previous;
	}

	int List::Joseph(int n)
	{
		assert(n >= 1);
		Node* temp = head;
		while (length != 1)
		{
			if (n > length)
			{
				n = n % length;
			}
			
			removeId(n);
			head = pointerId(n);
		}
		return head->data;
	}
	
	List::~List()
	{
		Node* temp = head->previous;
		while (temp != head)
		{
			temp = temp->previous;
			delete temp->next;
		}
		delete head;
	}
}