/*
In statistics, the mode of a set of values is the value that occurs most often or with the
greatest frequency. Write a function that accepts as arguments the following:

A) An array of integers
B) An integer that indicates the number of elements in the array

The function should determine the mode of the array. That is, it should determine
which value in the array occurs most often. The mode is the value the function should
return. If the array has no mode (none of the values occur more than once), the function
should return −1. (Assume the array will always contain nonnegative values.)
Demonstrate your pointer prowess by using pointer notation instead of array notation
in this function. 
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int modeFunction(int array[], int size);
bool binarySearch(vector<int> array, int numElems, int value);

int main(){
	int array[5] = {1,5,2,7,8};
	
	int mode = modeFunction(array,5);
	if (mode != -1){
		cout << "Mode :" << mode << endl;
	}
	else{
		cout << "No mode" << endl;
	}
	
	return 0;
}

int modeFunction(int array[], int size){

	vector<int> uniqueValue;
	vector<int> countUniqueValue;
	bool found = false;
	int value;
	int counter =0;

	
	uniqueValue.push_back(array[0]);
	for(int i = 0; i < size; i++){
		value = array[i];
		found = binarySearch(uniqueValue,uniqueValue.size(),array[i]);
		if(!found){
			uniqueValue.push_back(array[i]);
		}
	}
	
	for(int i=0; i<uniqueValue.size(); i++){
		for(int j =0; j<size; j++){
			if(uniqueValue[i] == array[j]){
				counter++;
			}
		}
		countUniqueValue.push_back(counter);
		counter = 0;
	}
	
	
	// max_element will return iterator use * to dereference value
	auto max = max_element(begin(countUniqueValue),end(countUniqueValue));
//	cout << "Max " << *max << endl;
	
	if (*max <= 1){
		return -1;
	}
	
	// distance() will return the position of the max 
	auto position = distance(begin(countUniqueValue),max);
//	cout << "Position " << position << endl;

	return uniqueValue[position];
}

bool binarySearch(vector<int> array, int numElems, int value){
	int first = 0, // First array element
		last = numElems - 1, // Last array element
		middle, // Midpoint of search
		position = -1; // Position of search value
	bool found = false; // Flag
	
	while (!found && first <= last){
		middle = (first + last) / 2; // Calculate midpoint
		if (array[middle] == value){
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1; // If value is in upper half
	}
	return found;
}
