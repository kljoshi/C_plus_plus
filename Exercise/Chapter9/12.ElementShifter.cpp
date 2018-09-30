/*
Element Shifter
Write a function that accepts an int array and the array’s size as arguments. The
function should create a new array that is one element larger than the argument array.
The first element of the new array should be set to 0. Element 0 of the argument array
should be copied to element 1 of the new array, element 1 of the argument array should
be copied to element 2 of the new array, and so forth. The function should return a
pointer to the new array. 

*/

#include <iostream>

using namespace std;

int* Shifter(int array[],  int size);

int main(){
	const	int size = 8;
	int array[size] = {21,1,2,3,4,5,3,24,};

	int* ptr = Shifter(array, size);
	
	for (int i =0; i < (size+1); i++){
		cout << *(ptr+i) << endl;
	}
	
	return 0;
}

int* Shifter (int array[], int size){
	int newsize = size + 1 ;
	int* arrayCopy = new int [newsize];
	int counter = 0;
	bool condition = true;
	
	for(int i = 0; i < newsize; i++){

		if(condition == 1){
			arrayCopy[i] = 0;
			condition = 0;
		}
		else{
			arrayCopy[i] = array[counter++];
		}
	
	}
	
	return arrayCopy;
}
