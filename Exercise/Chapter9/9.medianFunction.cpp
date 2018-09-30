/*
Median Function
In statistics, when a set of values is sorted in ascending or descending order, its median
is the middle value. If the set contains an even number of values, the median is the
mean, or average, of the two middle values. Write a function that accepts as arguments
the following:

A) An array of integers
B) An integer that indicates the number of elements in the array

The function should determine the median of the array. This value should be returned
as a double. (Assume the values in the array are already sorted.)
Demonstrate your pointer prowess by using pointer notation instead of array notation
in this function. 
*/


#include <iostream>

using namespace std;

double median(int array[], int size);


int main(){ 


	int OddArray[5] = {1,2,3,4,5};
	int EvenArray[6] = {1,2,3,4,5,6};


	cout <<"Median of odd array is " << median(OddArray, 5) << endl;
	cout <<"Median of even array is "<<  median(EvenArray, 6) << endl;
	


	return 0;
}

double median(int array[], int size){

	int position;
	double median;
	position = ((size +1) / 2) - 1;
	
	if (size % 2 == 0 ){
		 median = (*(array+position) + *(array+(position+1)))/ 2.0;
	}
	else {
		median = *(array+position) + 0.0;
	}
	
	return median;
}
