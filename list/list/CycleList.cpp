#include "CycleList.h"

namespace CycleLists
{
	Node::Node(int const data)
	{
		this->data = data;
	}

	// constructors, destructor, output 
	CycleList::CycleList()
	{
		head = nullptr;
		length = 0;
	}

	CycleList::~CycleList()
	{

	}

	// output
	std::ostream& operator<< (std::ostream& out, CycleList const& c)
	{
		Node* temp = c.head;
		while (temp->next != c.head)
		{
			out << temp->data << " ";
		}
		return out;
	}

	// others
	void CycleList::add(int const data)
	{
		Node* temp = head;
		if (temp == nullptr)
		{
			temp = new Node(data);
			temp->next = head;
			++length;
			return;
		}
		while (temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = nullptr;
		temp->next = new Node(data);
		temp->next->next = head;
		++length;
		return;
	}

	void CycleList::removeId(int const id)
	{

	}

	/*int& CycleList::operator[](int const index)
	{

	}*/
}