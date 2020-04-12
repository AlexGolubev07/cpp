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

	void List::removeId(int const id)
	{
		assert(id - 2 <= length);
		int i = 0;
		Node* temp = head;
		while (i + 2 < id)
		{
			++i;
			temp = temp->next;
		}
		temp = temp->next->next;
		delete temp->next;
		--length;
		return;
	}

	/*int& List::operator[](int const index)
	{

	}*/
}