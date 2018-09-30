#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void selectionSortString(string array[], int size);

int main(){

	const int NUM_NAMES = 20;
 	string names[NUM_NAMES];
 	ifstream inFile;
	string value;
	
	inFile.open("name.txt");

	int i=0;
 	while(!inFile.eof()){
 		getline(inFile, value);
 		names[i++] = value;
 	}
 	cout << "Value of i: "<< i << endl;
 	selectionSortString(names, NUM_NAMES);

 	for (int i =0; i< NUM_NAMES; i++){
		cout << names[i] << endl;
	}

	return 0;
}

void selectionSortString(string array[], int size){
	int startScan, minIndex;
	string minValue;
	for (startScan = 0; startScan < (size - 1); startScan++){
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < size; index++){
			if (array[index] < minValue){
				minValue = array[index];
				minIndex = index;
			}
		}
	
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
} 
