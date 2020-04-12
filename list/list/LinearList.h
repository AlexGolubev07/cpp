#pragma once
#include <iostream>

namespace LinearList
{
	struct Node
	{
		Node* next;
		int data;

		Node(int data);
	};

	struct List
	{
		Node* head;
		int length;

		List();

		void add(int data);

		void removeId(int index);

		void index(int index, int data);

		int& operator[](int const i);

		friend bool operator==(List const& l1, List const& l2);

		friend std::ostream& operator<< (std::ostream& out, List const& l);

		~List();
	};
}