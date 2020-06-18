#include <iostream>
#include "HaffmanTree.h"

using namespace std;

int main()
{
	HaffmanTree ooh("aaqbqaccc");
	cout << ooh;
	cout << ooh.encodedText << endl << endl << "aaqbqaccc" << endl << endl;
	cout << ooh.getDecodedText() << endl << endl;
	ooh.printEncodingTable();
	ooh.printFrequencyTable();
	return 0;
}