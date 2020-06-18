#include <iostream>
#include "HaffmanTree.h"

using namespace std;

int main()
{
	HaffmanTree ooh("aaqbqaccc");
	cout << ooh;
	ooh.printFrequencyTable();
	ooh.printEncodingTable();
	return 0;
}