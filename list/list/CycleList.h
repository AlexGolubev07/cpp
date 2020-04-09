#pragma once
#include <iostream>

namespace CycleLists
{
	class Node
	{
	public:
		Node* next;
		int data;

		Node(int data);
	};

	class CycleList
	{
	public:
		// fields
		Node* head;
		int length;

		// constructors, destructor, output 
		CycleList();
		~CycleList();

		// output
		friend std::ostream& operator<< (std::ostream& out, CycleList const& c);

		// others
		void add(int const data);
		void removeId(int const id);
		// int& operator[](int const index);
	};
}

