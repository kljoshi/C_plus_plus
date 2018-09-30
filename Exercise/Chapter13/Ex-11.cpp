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
	Payroll p[size];


	p[0].setHoursWorked(40);
	p[0].setHourlyRate(50);

	float total = p[0].calculateTotal();

	cout << "Total : " << total << endl;



	return 0;
}
