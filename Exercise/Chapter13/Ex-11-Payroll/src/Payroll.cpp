#include "Payroll.h"

Payroll::Payroll(){
	hourlyRate = 0.0;
	hoursWorked = 0.0;
	totalPay = 0.0;
}

Payroll::~Payroll(){

}

float Payroll::calculateTotal(){
	totalPay = hourlyRate * hoursWorked;
	return totalPay;
}

