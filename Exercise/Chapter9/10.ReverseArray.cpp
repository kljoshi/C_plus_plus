/*
Reverse Array
	Write a function that accepts an int array and the array’s size as arguments. The function
	should create a copy of the array, except that the element values should be reversed
	in the copy. The function should return a pointer to the new array. Demonstrate the
	function in a complete program. 

*/
#include <iostream>
using namespace std;

int* reverse(int array[],  int size);

int main(){

	int array[5] = {1,2,3,4,5};

	int* ptr = reverse(array, 5);
	
	for (int i =0; i < 5; i++){
		cout << *(ptr+i) << endl;
	}
	
	return 0;
}

int* reverse (int array[], int size){

	int* arrayCopy = new int [size];
	int counter = 0;
	
	for (int i = (size-1); i >= 0; i--){
		arrayCopy[i] = array[counter++];
	}
	
	return arrayCopy;
}
