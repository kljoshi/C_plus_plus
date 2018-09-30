#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){

	ifstream inputFile;
	string filename;
	double data,
		 total = 0,
		 counter = 0;

	cout << "Please enter name of file: ";
	cin >> filename;
	inputFile.open(filename);

	if (inputFile.fail()){
		cout << " There was an error ! ";
	}
	else{

		while (!inputFile.eof()){
			inputFile >> data;
			cout << data << endl;
			total += data;
			counter++;
		}
	}
	
	inputFile.close();
	
	cout << " Total is " << total;
	cout << " Average is " << round(total / counter);
}
