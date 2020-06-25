#include <iostream>
#include "HaffmanTree.h"

using namespace std;

int main()
{
	HaffmanTree ooh("aaqbqaccc");
	cout << "aaqbqaccc" << endl << endl;
	cout << ooh << endl << endl;
	ooh.printEncodingTable();
	ooh.printFrequencyTable();

	cout << ooh.getDecodedText() << endl << endl;
	return 0;
}