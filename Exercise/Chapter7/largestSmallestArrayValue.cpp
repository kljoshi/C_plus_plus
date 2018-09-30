#include <iostream>
using namespace std;

int main(){

	const int SIZE = 10;

	int value[SIZE];
	int high;
	int low;
	
	for(int i =0; i < SIZE; i++){
		cout << "Please enter "<< i+1 <<" value: ";
		cin >> value[i]; 
	}
	
	low = high = value[0];

	for (int i=0; i< SIZE; i++){
		if(value[i] > high){
			high = value[i];
		}	
	}

	for (int i=0; i< SIZE; i++){
		if(value[i] < low){
			low = value[i];
		}	
	}

	cout << "Highest value: "<< high << endl;
	cout << "Lowest value: " << low << endl; 

	
	return 0;
}
