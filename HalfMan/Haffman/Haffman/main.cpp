#include "AssociateArray.h"
#include <iostream>

using namespace std;

int main()
{
	AssociateArray a;
	// cin >> a;
	a.add('a', 2);
	a.add('b', 1);
	a.add('c', 3);
	a.add('d', 5);
	cout << a;
	AssociateArray b = a; // (b == a) = true
	cout << b;
	return 0; // error with second, "b"
}