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
