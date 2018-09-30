/*
Write a program that uses a structure to store the following data on a company division:

Division Name (such as East, West, North, or South)
Quarter (1, 2, 3, or 4)
Quarterly Sales

The user should be asked for the four quarters’ sales figures for the East, West, North,
and South divisions. The data for each quarter for each division should be written to
a file.

Input Validation: Do not accept negative numbers for any sales figures.
*/

#include <iostream>
#include <fstream>

using namespace std;

struct Data {
	string divisionName;
	int quarter;
	double quarterlySales;
};


int main(){

	ofstream outFile;
	Data value;

	outFile.open("exercise11.txt");

	for(int i=0; i <4; i++){
		cout << "Division name: ";
		cin >> value.divisionName;
		outFile << "Division name: ";
		outFile << value.divisionName << endl;

		cout << "Quarter: ";
		cin >> value.quarter;
		outFile << "Quarter: ";
		outFile << value.quarter << endl;

		cout << "Quarterly Sales: ";
		cin >> value.quarterlySales;
		outFile << "Quarterly Sales: ";
		outFile << value.quarterlySales << endl;

	}
	
	outFile.close();

	return 0;
}
