#include <iostream>
#include <vector>

using namespace std;

void inputValue(vector<int> &accountNum);
void displayValue(vector<int> accountNum);
int linearSearch(const vector<int>list, int numElems, int value);
void selectionSort(vector<int> &array, int size);
int binarySearch(const vector<int> array, int numElems, int value);


int main(){

	int searchNum;
	vector<int> accountNum;
	int PositionReturn;

	inputValue(accountNum);
	displayValue(accountNum);
	
	cout << "Using linear Search" << endl;
	cout << "Enter number to search: ";
	cin >> searchNum;
	
	PositionReturn = linearSearch(accountNum, accountNum.size(), searchNum);

	if(PositionReturn == -1){
		cout << "Sorry couldnot find the number you are looking for. ";
	}
	else{
		cout << "The value you are looking for is in position "<< PositionReturn <<" in the array.";
	}

	cout << "Using Selection sort algorithm and Binary Search" << endl;
	selectionSort(accountNum,accountNum.size());
	displayValue(accountNum);
	
	cout << "Enter number to search: ";
	cin >> searchNum;

	PositionReturn = binarySearch(accountNum, accountNum.size(), searchNum);
	
	if(PositionReturn == -1){
		cout << "Sorry couldnot find the number you are looking for. ";
	}
	else{
		cout << "The value you are looking for is in position "<< PositionReturn <<" in the array.";
	}

	return 0;
}

void inputValue(vector<int> &accountNum){

	accountNum.push_back(5658845);
	accountNum.push_back(8080152);
	accountNum.push_back(1005231);
	accountNum.push_back(4520125);
	accountNum.push_back(4562555);
	accountNum.push_back(6545231);
	accountNum.push_back(7895122);
	accountNum.push_back(5552012);
	accountNum.push_back(3852085);
	accountNum.push_back(8777541);
	accountNum.push_back(5050552);
	accountNum.push_back(7576651);
	accountNum.push_back(8451277);
	accountNum.push_back(7825877);
	accountNum.push_back(7881200);
	accountNum.push_back(1302850);
	accountNum.push_back(1250255);
	accountNum.push_back(4581002);
}  

void displayValue(vector<int> accountNum){
	for (int i =0; i< accountNum.size(); i++){
		cout << accountNum[i] << endl;
	}
}

int linearSearch(const vector<int> list, int numElems, int value){

	int index = 0;
	int position = -1; 
	bool found = false;

	while (index < numElems && !found){
		if (list[index] == value){
			found = true; 
			position = index;
		}
		
		index++; 
	}

 	return position;
} 


void selectionSort(vector<int> &array, int size){
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (size - 1); startScan++){
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < size; index++){
			if (array[index] < minValue){
				minValue = array[index];
				minIndex = index;
			}
		}
	
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
} 




int binarySearch(const vector<int> array, int numElems, int value){
	int first = 0, 
		 last = numElems - 1, 
		 middle, 
		 position = -1; 
	bool found = false; 
	
	while (!found && first <= last){
		middle = (first + last) / 2; // Calculate midpoint
		if (array[middle] == value){ // If value is found at mid{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1; // If value is in upper half
	}
	return position;
} 
