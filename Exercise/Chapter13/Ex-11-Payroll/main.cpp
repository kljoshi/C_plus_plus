// Payroll.cpp

#include <iostream>
#include "Payroll.h"
using namespace std;

int main(){
	int size = 7;
	float hours = 0;
	bool condition = false;
	Payroll p[size];

	// Get the hours worked from the user.
	for(int i=0; i<size; i++){

		do{
			cout << "Please enter the hours worked for worker " << i+1 << " :";
			cin >> hours;
			if(hours > 60){
				cout << " Can not accept more than 60 hours" << endl;
				condition = true;
			}
			else
				condition = false;
		}while(condition);

		p[i].setHoursWorked(hours);
		p[i].setHourlyRate(10.00);
	}

	// Display the amount earned.
	for(int j =0; j < size; j++){
		cout << "Worker " << j+1 << " earned : "<< p[j].calculateTotal();
		cout << endl;
	}

	return 0;
}
