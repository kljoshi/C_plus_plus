#include <iostream>

using namespace std;

int main(){
	
	int value;
	
	cout << " enter value: " << endl;
	cin >> value;
	
	
	if (isdigit(value)){
		cout << "Digit" << endl;
	}
	else
	cout << "Not digit " << endl; 
	return 0;
}
