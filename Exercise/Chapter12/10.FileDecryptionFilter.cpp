/*
Write a program that decrypts the file produced by the program in Programming
Challenge 9. The decryption program should read the contents of the coded file, restore
the data to its original state, and write it to another file.

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream inFile;
	ofstream outFile;
	string line;
	char ch;

	inFile.open("encrypted.txt");
	outFile.open("decrypted.txt");

	if(!inFile){
		cout << "Could not open the file." << endl;
	}

	while(inFile.good()){

		inFile.get(ch);
		int value = int(ch)-10;
		
		cout << ch << " = " << char(value) << endl;
		
		
		outFile<< char(value); 
			
	}
	
	inFile.close();
	outFile.close();


	return 0;
}
