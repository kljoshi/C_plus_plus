/*
Write a program that asks the user for a file name and a string to search for. The
program should search the file for every occurrence of a specified string. When the
string is found, the line that contains it should be displayed. After all the occurrences
have been located, the program should report the number of times the string appeared
in the file. 

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream inFile;
	ifstream inFile2;
	string filename;
	string searchFor;
		
//	vector <long> arrayPosition;
	
	int count = 0;
	string line;

	inFile.open("note.txt");
	inFile2.open("note.txt");

	if(!inFile){
		cout << "could not open the file. " << endl;
		return 0;
	}

	// cout << "Enter the name of the file: ";
	// cin >> filename;

	cout << "Enter the string to find: ";
	cin >> searchFor;
	string word;
	long position;
	char ch;
	string display;
	
	while(!inFile.eof()){
	
		inFile >> word;
		
		if(word == searchFor){
			cout << "The lines in the text file: " << endl;
			long pos = inFile.tellg();
			inFile.seekg(pos,ios::beg);
			inFile.get(ch);
			while(ch != '\n'){
				inFile.seekg(pos--,ios::beg);
				inFile.get(ch);
			}
			getline(inFile,line);
			cout << line << endl;
			count++;
		}
	}
	
	cout << "Count: " << count << endl;
	
	
//	cout << count << endl;
	

	return 0;
}
