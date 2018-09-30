/*
String length

write a function that returns a integer and accepts a pointer to a C-string as an argument.
The function should count the number of characters in the string and return that number.
Demonstrate the function in a simple program that asks the user to input a string, passes
it to the function, and thn displays the function's return value. 

*/

#include <iostream>
#include <cctype>


using namespace std;

int characterCounter(char* ptr);

int main(){
	const int size= 20;
	char array[size];

	cout << "Please enter any characters: ";
	cin.getline(array,size);

	cout << characterCounter(array) << endl;

	return 0;
}

int characterCounter(char* ptr){

	int counter = 0;

	while(*ptr++ != '\0'){
		counter ++;
	}

	return counter;
}
