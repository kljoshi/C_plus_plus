/* 

Backward String
Write a function that accepts a pointer to a C-string as an argument and displays its
contents backward. For instance, if the string argument is “ Gravity” the function
should display “ ytivarG”. Demonstrate the function in a program that asks the user
to input a string and then passes it to the function

*/

#include <iostream>
#include <cctype>
#include <string.h>


using namespace std;

void BackwardString(char* ptr);

int main(){
	const int size= 20;
	char array[size];

	cout << "Please enter a word: ";
	cin.getline(array,size);

	BackwardString(array);


	return 0;
}

void BackwardString(char* ptr){

	int size = strlen(ptr);

	for(int i =size-1; i >= 0; i--){
		cout << *(ptr+i);
	}

}
