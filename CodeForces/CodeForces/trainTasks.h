#pragma once
#include <iostream>
#include <cassert>
#include <ctime>
#include <string>
#include <ctime>

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

	void kidToys(int n);

	void line(int n, int m, int plus, int first, int line);

	void boringLesson(int n, int m);

	void water(int n);

	void mathGame();

	void E();

	void Ee();

	void F(int n);

	string haker();

	string hatsker();

	class List
	{
	private:
		class Node
		{
		public:
			int data;
			Node* next;
			Node* previous;

			Node(int data, Node* previous = nullptr, Node* next = nullptr)
			{
				this->data = data;
				this->next = next;
				this->previous = previous;
			}
		};

		void delNode(Node* toDel, Node* toPaste)
		{
			Node* previous = toDel->previous;
			previous->next = toPaste;
			toPaste->previous = previous;
			delete toDel;
		}

		Node* head;
		int length;
	public:

		List()
		{
			int n = 100000;
			//cin >> n;
			this->length = n;
			int num = 5;
			//cin >> num;
			this->head = new Node(num);
			Node* current = this->head;
			for (int i = 0; i < n - 1; ++i)
			{
				//cin >> num;
				current->next = new Node(num, current);
				current = current->next->previous = current;
				current = current->next;
			}
			current->next = this->head;
			this->head->previous = current;
		}

		void decision()
		{
			Node* current = this->head;
			bool cycle = true;
			bool inCycle = false;
			while (cycle == true)
			{
				if (current->next != this->head && current->data > 0 && current->next->data < 0)
				{
					inCycle = true;
					if (current->data == abs(current->next->data))
					{
						if (this->length == 2)
						{
							cout << 0;
							return;
						}
						current = current->next->next;
						delNode(current->previous->previous, current->previous);
						delNode(current->previous, current);
						this->length -= 2;
					}
					else
					{
						if (current->data > abs(current->next->data))
						{
							delNode(current->next, current->next->next);
							current = current->next;
							--this->length;

						}
						else
						{
							current = current->next;
							delNode(current->previous, current);
							--this->length;
						}
					}
				}
				else
				{
					current = current->next;
				}

				if (inCycle == false && current == this->head)
				{
					cycle = false;
				}

				if (current == this->head)
				{
					inCycle = false;
				}
			}
			current = this->head;
			cout << this->length << endl;
			while (current->next != this->head)
			{
				cout << current->data << " ";
				current = current->next;
			}
			cout << current->data;
		}
	};

	void meteorites(int n);

	void meteor(int n);
}

namespace contest
{
	void numbers();

	int math();

	int fafa();

	int downWord();

	void boooks();

	int books();

	void magicStick();

	void last();
}
