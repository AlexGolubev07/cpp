#pragma once
#include <iostream>
#include <cassert>
#include <ctime>
#include <string>

using namespace std;



template <class type>
class arr
{
public:
	type* data;
	int length;

	arr(int const length)
	{
		this->length = length;
		this->data = new type[length];
	}

	friend istream& operator>>(istream& in, arr array)
	{
		for (int i = 0; i < array.length; ++i)
		{
			in >> array.data[i];
		}
		return in;
	}

	friend ostream& operator<<(ostream& out, arr array)
	{
		for (int i = 0; i < array.length; ++i)
		{
			out << array.data[i] << " ";
		}
		out << endl;
		return out;
	}

	type& operator[](int index)
	{
		return this->data[index];
	}

	void popFront()
	{
		for (int i = 0; i < this->length - 1; ++i)
		{
			this->data[i] = this->data[i + 1];
		}
		--this->length;
	}

	void popBack()
	{
		--this->length;
	}

	void del(int index)
	{
		for (int i = index; i < this->length - 1; ++i)
		{
			this->data[i] = this->data[i + 1];
		}
		--this->length;
	}

	void out()
	{
		cout << endl;
		for (int i = 0; i < this->length; ++i)
		{
			cout << this->data[i] << " ";
		}
		cout << endl;
	}

	void swap(int firstIndex, int secondIndex)
	{
		int help = this->data[firstIndex];
		this->data[firstIndex] = this->data[secondIndex];
		this->data[secondIndex] = help;
	}

	void quickSort(int fi, int si)
	{
		if (fi - si == 1)
			return;
		if (fi - si == 2)
		{
			if (this[fi] > this[si - 1])
				swap(fi, si - 1);
			return;
		}
		if (fi - si == 3)
		{
			if (this[fi] > this[si - 1])
				swap(fi, si - 1);
			if (this[fi] > this[fi + 1])
				swap(fi, fi + 1);
			if (this[fi + 1] > this[si - 1])
				swap(fi + 1, si - 1);
			return;
		}
		int pivot = this->data[si - 1];
		int i = 0;
		for (i = 0; fi + i < si - i; ++i)
		{
			if (this[fi + i] > pivot && this[si - i] < pivot)
				swap(fi + i, si - i);
		}
		if (fi + i == si - i)
		{
			this->quickSort(fi, fi + i);
			this->quickSort(fi + i, si);
		}
		else
		{
			this->quickSort(fi, fi + i - 1);
			this->quickSort(fi + i, si);
		}
		return;
	}
};

namespace tasks
{
	namespace A
	{
		int task1(int n, int m, int a);

		string task4(int w);
	}

	namespace B
	{

	}

	namespace C
	{

	}

	namespace D
	{

	}

	namespace E
	{
		int* task1392();

		int task1400();
	}

	namespace F
	{
		namespace task1394
		{
			int* replace(int* array, int k, int x);

			int* reverse(int* array, int k, int length);

			int* swap(int* array, int k, int length);

			int sum(int* array, int s, int e);

			void out(int* array, int length);

			void decision();
		}
		class Task1401
		{

		};
	}

	namespace G
	{

	}
}

namespace work
{
	int wall(int n, int m);

	int sweets(int n);

	int toys(int n);

	void line(int first, int n, int m);

	void boringLesson(int n, int m);

	void E(int x, int y);

	class List
	{
	private:
		class Node
		{
		public:
			int data;
			Node* next;
			Node* previous;

			Node(int data, Node* previous = nullptr, Node* next = nullptr);
		};

		void delNode(Node* toDel, Node* toPaste);

		Node* head;
		int length;
	public:

		List(int n);

		void decision();
	};
}