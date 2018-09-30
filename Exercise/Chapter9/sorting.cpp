#include <iostream>
using namespace std;

void selectionsort(int* array, int size);

int main(){

	int array[5] = {2,5,1,7,3};
	int* ptr = nullptr;

	ptr = array;



	// sorted array
	selectionsort(ptr,5);

	cout <<"Sorted ptr: "<< endl;
	for(int i =0; i <5 ; i++){
		cout << ptr[i] << endl;
	}


	// Original array

	cout << "Original array: " << endl;
	for(int i =0; i <5 ; i++){
		cout << array[i] << endl;
	}

	return 0;
}

void selectionsort(int* array, int size){
	int startScan, minIndex;
	int* minValue;
	
	for(startScan=0; startScan <(size -1); startScan++){
		minIndex = startScan;
		minValue = array[startScan];
		
		cout << "*minValue: " << *minValue << endl;
		cout << "*(array[index]): " << *(array[0]) << endl;
		for(int index = startScan + 1; index < size; index++){
			
			if (*(array[index]) < *minValue){
				minElem = array[index];
				minIndex = index;
			} 
			
		}
		
		array [minIndex] = array[startScan];
		array [startScan] = minElem;
	}
}
