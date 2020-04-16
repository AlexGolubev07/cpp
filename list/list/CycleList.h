#pragma once
#include <iostream>

namespace CycleList
{
	class Node
	{
	public:
		Node* next;
		Node* previous;
		int data;

		Node(int data);
	};

	class List
	{
	public:
		// fields
		Node* head;
		int length;

		// constructors, destructor, output 
		List();
		~List();

		// output
		friend std::ostream& operator<< (std::ostream& out, List const& c);

		//friend std::ostream& operator[] (std::ostream& out, List const& c);
		// others
		void add(int const data);
		void removeId(int id);
		Node* pointerId(int id);
		int Joseph(int n);
	};
}

