/*
 Multipurpose Payroll
Write a program that calculates pay for either an hourly paid worker or a salaried
worker. Hourly paid workers are paid their hourly pay rate times the number of hours
worked. Salaried workers are paid their regular salary plus any bonus they may have
earned. The program should declare two structures for the following data:

	Hourly Paid:
	HoursWorked
 	HourlyRate
 	
 	Salaried:
 	Salary
 	Bonus

The program should also declare a union with two members. Each member should be a
structure variable: one for the hourly paid worker and another for the salaried worker.
The program should ask the user whether he or she is calculating the pay for an hourly
paid worker or a salaried worker. Regardless of which the user selects, the appropriate
members of the union will be used to store the data that will be used to calculate
the pay.
Input Validation: Do not accept negative numbers. Do not accept values greater than
80 for HoursWorked

*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

struct HourlyPaid{
	float HoursWorked;
	float HourlyRate;
};

struct SalaryPaid{
	float Salary;
	float Bonus;
};

union PayMethod {
	HourlyPaid hourly;
	SalaryPaid salary;
};

void hourCalulator(PayMethod option);
void SalaryCalculator(PayMethod option);
bool conditionChecker(float value);

int main(){

	PayMethod option;
	char choice;

	cout <<"Are you calculating hourly pay or salary pay ?:" <<endl;
	cout <<"Please enter h or s: ";
	cin >> choice;


	if (toupper(choice) == 'H'){
		hourCalulator(option);
	}
	else if (toupper(choice) == 'S'){
		SalaryCalculator(option);
	}
	else{
		cout <<"No such input please try again ! " << endl;
	}
	return 0;
}

void hourCalulator(PayMethod option){

	float hourWorked;
	float hourlyRate;
	bool condition = false;
	do{
		cout <<"Please input hours worked: ";
		cin >> option.hourly.HoursWorked;
		hourWorked = option.hourly.HoursWorked;

		if (hourWorked < 0 || hourWorked > 80){
			condition = true;
			cout <<"number should be greater than 0 and less than or equal to 80" << endl;
		}
		else {
			condition = false;
		}
	}while(condition);

	do {
		cout << "Please input hourly rate: ";
		cin >> option.hourly.HourlyRate;
		hourlyRate = option.hourly.HourlyRate;

		condition = conditionChecker(hourlyRate);
	}while(condition);
	
		
	cout << "Amount: " << hourWorked * hourlyRate;
}

void SalaryCalculator(PayMethod option){
	float salary;
	float bonus;
	bool condition = false;
	do {
		cout <<"Please input salary: ";
		cin >> option.salary.Salary;
		salary = option.salary.Salary;

		condition = conditionChecker(salary);
	}while(condition);		
	
	do {
		cout << "Please input bonus: ";
		cin >> option.salary.Bonus;
		bonus = option.salary.Bonus;
		
		condition = conditionChecker(bonus);
	}while(condition);		
	
	cout << "Amount: " << salary + bonus;
}

bool conditionChecker(float value){
	if (value < 0){
		cout <<"number should be greater than 0" << endl;
		return true;
	}
	else {
		return false;
	}
}
