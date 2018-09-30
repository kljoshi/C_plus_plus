/*
File encryption is the science of writing the contents of a file in a secret code. Your
encryption program should work like a filter, reading the contents of one file, modifying
the data into a code, and then writing the coded contents out to a second file. The
second file will be a version of the first file, but written in a secret code.

Although there are complex encryption techniques, you should come up with a
simple one of your own. For example, you could read the first file one character at
a time, and add 10 to the ASCII code of each character before it is written to the
second file. 
*/

#include <iostream>
#include <fstream>

using namespace std;
int main(){

	ifstream inFile;
	ofstream outFile;
	string line;
	char ch;

	inFile.open("originalFile.txt");
	outFile.open("encrypted.txt");

	if(!inFile){
		cout << "Could not open the file." << endl;
	}

	while(inFile.good()){
	
		inFile.get(ch);
		int value = int(ch)+10;
	
		cout << ch << " = " << char(value)<< endl;

		outFile<< char(value); 
			
	}
	
	cout << "Encryption complete ! " << endl;
	
	inFile.close();
	outFile.close();


	return 0;
}