#include <iostream>
using namespace std; 

int main() {
	float startM,
			endM,
			gallonUsed,
			MPG;

	cout << " Please enter the starting mileage: ";
	cin >> startM;

	cout << " Please enter the ending mileage: ";
	cin >> endM;

	cout << " Please enter Gallon used: ";
	cin >> gallonUsed;

	MPG = (endM - startM) / gallonUsed;

	cout << " Your Car milage is: " << MPG << " mpg" << endl;

}
