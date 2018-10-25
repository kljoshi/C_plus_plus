/*

Payroll
Design a PayRoll class that has data members for an employee’s hourly pay rate,
number of hours worked, and total pay for the week. Write a program with an array of
seven PayRoll objects. The program should ask the user for the number of hours each
employee has worked and will then display the amount of gross pay each has earned.
Input Validation: Do not accept values greater than 60 for the number of hours
worked.

*/

// Payroll.h

#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll{

private:
	float hourlyRate;
	float hoursWorked;
	float totalPay;

public:

	Payroll();
	~Payroll();

	void setHourlyRate(float rate){
		hourlyRate = rate;
	}

	void setHoursWorked(float hoursW){
		hoursWorked = hoursW;
	}

	float getHourlyRate(){
		return hourlyRate;
	}

	float getHoursWorked(){
		return hoursWorked;
	}

	float calculateTotal();

};
#endif

// Payroll.cpp

Payroll::Payroll(){
	hourlyRate = 0.0;
	hoursWorked = 0.0;
	totalPay = 0.0;
}

float Payroll::calculateTotal(){
	totalPay = hourlyRate * hoursWorked;
	return totalPay;
}



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
		
		p[i].hoursWorked(hours);
		p[i].hourlyRate(10.00);
	}

	// Display the amount earned.
	for(int j =0; j < size; j++){
		cout << "Worker " << i+1 << " earned : "<< p[i].calculateTotal();
	}

	return 0;
}
