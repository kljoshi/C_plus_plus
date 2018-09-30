#include <iostream>

using namespace std;

void selectionSort(int* array[], int size);

int main(){

	int array[5] = {1,8,3,4,7};

	int * ptr[5] = {nullptr,nullptr,nullptr,nullptr,nullptr};


	for(int i= 0; i < 5; i++){
		ptr[i] = &array[i];
	}

	selectionSort(ptr, 5);
	
	cout << "Original Value: " << endl;
	for(int i= 0; i < 5; i++){
		cout << array[i] << endl;
	}

	cout << "Sorted Value: " << endl;
	for(int i= 0; i < 5; i++){
		cout << *(ptr[i]) << endl;
	}

	return 0;
}

void selectionSort(int* array[], int size){
	
	int startScan, minIndex;
	int* minValue;
	
	for(startScan = 0; startScan < (size -1); startScan++){
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index ++){
			if (*(array[index]) < *minValue){
				minValue = array[index];
				minIndex = index;
			}
		}

		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
	
}
