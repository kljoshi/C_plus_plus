/*

Array Expander
Write a function that accepts an int array and the array’s size as arguments. The function
should create a new array that is twice the size of the argument array. The function
should copy the contents of the argument array to the new array and initialize the
unused elements of the second array with 0. The function should return a pointer to
the new array.

*/

#include <iostream>

using namespace std;

int* expander(int array[],  int size);

int main(){
	const	int size = 5;
	int array[size] = {1,2,3,4,5};

	int* ptr = expander(array, 5);
	
	for (int i =0; i < (size*2); i++){
		cout << *(ptr+i) << endl;
	}
	
	return 0;
}

int* expander (int array[], int size){
	int newsize = size * 2;
	int* arrayCopy = new int [newsize];
	int counter = 0;
	
	for(int i = 0; i < newsize; i++){

		if(counter < size){
			arrayCopy[i] = array[counter++];
		}
		else{
			arrayCopy[i] = 0;
		}
	}
	
	return arrayCopy;
}
