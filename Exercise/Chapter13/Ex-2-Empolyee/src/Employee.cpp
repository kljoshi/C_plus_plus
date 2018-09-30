#include "Employee.h"
#include <string>

Employee::Employee(int idNum, string n, string d, string p){
	idNumber = idNum;
	name = n;
	department = d;
	position = p;
}

Employee::Employee(int idNum, string n){
	idNumber = idNum;
	name = n;
}

void Employee::setID(int idNum){
	idNumber = idNum;
}

void Employee::setName(string n){
	name = n;
}

int Employee::getID()const{
	return idNumber;
}

string Employee::getName()const{
	return name;
}
