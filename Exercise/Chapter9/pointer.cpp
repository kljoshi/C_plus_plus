#include <iostream>
using namespace std;

int main(){

	int SIZE = 5;
	int array[SIZE];

	for (int i = 0; i < SIZE; i++){
		cin >> *(array + i );
	}

	for (int i = 0; i < SIZE; i++){
		cout << *(array + i ) << endl;
	}

	return 0;
}
