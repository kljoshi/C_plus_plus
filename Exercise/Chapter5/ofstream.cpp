#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	ofstream outputFile;
	string filename;

	cout << "Please enter a file name that you want to save your data in: ";
	cin >> filename;

	outputFile.open(filename);

	if (!outputFile.fail()){
		for (int i = 1; i <= 10; i++){
			for (int j = 1; j <= i; j++){
				outputFile << "*";
			}
			outputFile << endl;
		}
	}
	else {
		cout << "error in opening the file." << endl;
	}

	return 0;
}
