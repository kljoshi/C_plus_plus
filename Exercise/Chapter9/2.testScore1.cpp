/*
2. Write a program that dynamically allocates an array large enough to hold a userdefined
number of test scores. Once all the scores are entered, the array should be
passed to a function that sorts them in ascending order. Another function should be
called that calculates the average score. The program should display the sorted list of
scores and averages with appropriate headings. Use pointer notation rather than array
notation whenever possible.

Input Validation: Do not accept negative numbers for test scores.
*/

#include <iostream>
using namespace std;


int* allocateArray(int size);
void selectionSort(int array[], int size);
void calculateAverage(int array[], int size);
void inputValue(int array[], int size);
void printValue(int array[], int size);

int main(){

	int* ptrArray = nullptr;
	int size;

	cout << "Please enter the size of array: ";
	cin >> size;

	// ptrArray = new int [size];

	ptrArray = allocateArray(size);

	inputValue(ptrArray,size );

	selectionSort(ptrArray, size);

	printValue(ptrArray, size);

	calculateAverage(ptrArray, size);

	return 0;
}

void inputValue(int array[], int size){

	bool condition;

	for(int i = 0; i < size ; i ++ ){

		do{
			condition = false;
			cout << "input " << i +1 << ": ";
			cin >> array[i];

			if(array[i] < 0){
				cout <<"input should not be less than 0. Please try again." << endl;
				condition = true;
			}
		}while(condition);
	}

}

void calculateAverage(int array[], int size){
	int total = 0;

	for(int i = 0; i< size; i++){
		total += array[i];
	}

	cout << "The average value is " << (total/size) << endl;
}

int* allocateArray(int size){
	int * array = new int [size];
	return array; 
} 

void selectionSort(int array[], int size){
	
	int startScan, minIndex;
	int minValue;
	
	for(startScan = 0; startScan < (size -1); startScan++){
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index ++){
			if (array[index] < minValue){
				minValue = array[index];
				minIndex = index;
			}
		}

		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

void printValue(int array[], int size){

	for(int i = 0; i < size ; i ++ ){
		cout << array[i] << endl;
	}
}
