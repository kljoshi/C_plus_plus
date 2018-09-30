#include <iostream>

using namespace std;

float getMaxElement(float [],int);
bool isValid(int position);

int main(){
	int size = 5;
	float numbers[size] = {2,8,1,10,9};
//	float max;
//	max = getMaxElement(numbers, size);	
//	
//	cout << "Max Value ="<< max << endl;
	int pos = 0;
	
	cout << isValid(5) << endl;
	
//	if(isValid(5)){
//		cout << "its working" << endl;
//	}
	return 0;
}


float getMaxElement(float numbers[], int numSize){
	float max;

	max = numbers[0];
	for(int i=0; i<numSize; i++){
		if(numbers[i] > max){
			max = numbers[i];
		}
	}
	
	return max;
}

bool isValid(int position){
	bool condition;
	int numSize = 5;

	if ((position < 5) && (position >= 0)){
		condition = true;
		cout << " i am in here " << endl;
		return condition;
	}
	else {
		condition = false;
		return condition;
	}
}

