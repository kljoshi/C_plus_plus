/*

Number Array Class
Design a class that has an array of floating-point numbers. The constructor should
accept an integer argument and dynamically allocate the array to hold that many
numbers. The destructor should free the memory held by the array. In addition, there
should be member functions to perform the following operations:

	• Store a number in any element of the array
	• Retrieve a number from any element of the array
	• Return the highest value stored in the array
	• Return the lowest value stored in the array
	• Return the average of all the numbers stored in the array

Demonstrate the class in a program.

*/

// Array.h
#ifndef ARRAY_H
#define ARRAY_H

class Array{

private:
	float *numbers;
	int numSize;

public:
	Array(int size);
	~Array();
	bool isValid(int position);
	void setElement(int position, float value);
	float getElement(int position);
	float getMaxElement();
	float getMinElement();
	float getAveValue();

};
#endif


//Array.cpp
#include <iostream>
#include "Array.h"
#include <cstdlib>

using namespace std;

Array::Array(int size){
    numSize = size;
	numbers = new float [numSize];
	for(int i =0 ; i< numSize; i++){
		numbers[i] = 0;
	}
}

Array::~Array(){
	delete [] numbers;
}

bool Array::isValid(int position){
	bool condition;

	if (position > numSize && position < 0){
		condition = false;
		return condition;
	}
	else {
		condition = true;
		return condition;
	}
}

void Array::setElement(int pos, float value){

	if (isValid(pos)){
		numbers[pos] = value;
	}
	else{
		cout << "Error: Invalid subscript \n";
		exit (EXIT_FAILURE);
	}
}

float Array::getElement(int pos){

	if (isValid(pos)){
		cout << "Element in " << pos << " is " << numbers[pos]<< endl;
		return numbers[pos];
	}
	else{
		cout << "Error: Invalid subscript get element \n";
		exit (EXIT_FAILURE);
	}
}

float Array::getMaxElement(){
	float max;

	max = numbers[0];
	for(int i=0; i<numSize; i++){
		if(numbers[i] > max){
			max = numbers[i];
		}
	}
    cout << "Max :" << max << endl;
	return max;
}

float Array::getMinElement(){
	float min;

	min = numbers[0];
	for(int i=0; i<numSize; i++){
		if(numbers[i] < min){
			min = numbers[i];
		}
	}
     cout << "Min :" << min << endl;
	return min;
}

float Array::getAveValue(){

	float ave;
	float total = 0;
	for(int i=0; i<numSize; i++){
		total = total + numbers[i];
	}

	ave = total/numSize;

    cout << "Average :" << ave << endl;
	return ave;
}



// Main.cpp

#include <iostream>
#include "Array.h"

using namespace std;

int main (){

	int size = 5;
	Array a1(size);

	a1.setElement(0,3);
	a1.setElement(1,2);
	a1.setElement(2,50);
	a1.setElement(3,10);
	a1.setElement(4,8);

	a1.getElement(0);

	a1.getMaxElement();
	a1.getMinElement();

	a1.getAveValue();



	return 0;
}
