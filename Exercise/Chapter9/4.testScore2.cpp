/*
4. Modify the program of Programming Challenge 2 to allow the user to enter name-score
pairs. For each student taking a test, the user types the student’s name followed by the
student’s integer test score. Modify the sorting function so it takes an array holding
the student names and an array holding the student test scores. When the sorted list
of scores is displayed, each student’s name should be displayed along with his or her
score. In stepping through the arrays, use pointers rather than array subscripts.
*/

#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>		//isdigit()
using namespace std;

int* allocateArray(int size);
void selectionSort(string nameArray[], int scoreArray[], int size);
void calculateAverage(int array[], int size);
void inputValue(string [],int [], int);
void printValue(string nameArray[], int scoreArray[], int size);

int main(){

	int* scoreArray = nullptr;
	string* nameArray = nullptr;
	int size;

	cout << "Please enter the size of array: ";
	cin >> size;

	// scoreArray = new int [size];

	scoreArray = allocateArray(size);
	nameArray = new string[size];

	inputValue(nameArray,scoreArray,size);

	selectionSort(nameArray,scoreArray, size);

	printValue(nameArray,scoreArray, size);

	// calculateAverage(scoreArray, size);

	delete[] scoreArray;
	scoreArray = nullptr;
	delete[] nameArray;
	nameArray = nullptr;

	return 0;
}

void inputValue(string nameArray[], int scoreArray[], int size){

	bool condition;

	for(int i = 0; i < size ; i ++ ){

		do{
			condition = false;
			cout << "Name " << i +1 << ": ";
			cin >> nameArray[i];

			cout << "Score " << i +1 << ": ";
			cin >> scoreArray[i]; 

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

void selectionSort(string nameArray[], int scoreArray[], int size){
	
	int startScan, minIndex;
	int minValue;
	string minName;
	
	for(startScan = 0; startScan < (size -1); startScan++){
		minIndex = startScan;
		minValue = *(scoreArray+startScan);
		minName = *(nameArray+startScan);
		for (int index = startScan + 1; index < size; index ++){
			if (*(scoreArray+index) < minValue){
				minValue = *(scoreArray+index);
				minName = *(nameArray+index);
				minIndex = index;
			}
		}

		*(scoreArray+minIndex) = *(scoreArray+startScan);
		*(nameArray+minIndex) = *(nameArray+startScan);
		
		*(scoreArray+startScan) = minValue;
		*(nameArray+startScan) = minName;
	}
}

void printValue(string nameArray[], int scoreArray[], int size){

	for(int i = 0; i < size ; i ++ ){
		cout << scoreArray[i] << " ---> " << nameArray[i]<< endl;
	}
}
