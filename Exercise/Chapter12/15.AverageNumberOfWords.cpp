/*

If you have downloaded this book’s source code from the companion Web site, you
will find a file named text.txt in the Chapter 12 folder. (The companion Web site is
at www.pearsonhighered.com/gaddis .) The text that is in the file is stored as one sentence
per line. Write a program that reads the file’s contents and calculates the average
number of words per sentence.

*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

	ifstream inFile;
	int wordCount = 0 ;
	int lineCount =0;
	string line;
	char ch;
	vector <int> wordPerLine;

	inFile.open("text.txt");
	while(!inFile.eof()){
		getline(inFile,line);
		lineCount++;
	}
	cout << lineCount << endl;
	
	inFile.seekg(0,ios::beg);	
	
	while (!inFile.eof()){
		inFile >> line;
		wordCount++;
	}
	cout << wordCount << endl;
	
	cout << "The average number of word count per line: " << wordCount / lineCount << endl;

	return 0;
}
