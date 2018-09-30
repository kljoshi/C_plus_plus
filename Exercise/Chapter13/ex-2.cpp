/*
Employee Class
Write a class named Employee that has the following member variables:
	• name. A string that holds the employee’s name.
	• idNumber. An int variable that holds the employee’s ID number.
	• department. A string that holds the name of the department where the employee
		works.
	• position. A string that holds the employee’s job title.
The class should have the following constructors:
	• A constructor that accepts the following values as arguments and assigns them to
		the appropriate member variables: employee’s name, employee’s ID number, department,
		and position.
	• A constructor that accepts the following values as arguments and assigns them to the
		appropriate member variables: employee’s name and ID number. The department
		and position fields should be assigned an empty string ( "" ).
	• A default constructor that assigns empty strings ( "" ) to the name , department , and
		position member variables, and 0 to the idNumber member variable.

Write appropriate mutator functions that store values in these member variables and
accessor functions that return the values in these member variables. Once you have
written the class, write a separate program that creates three Employee objects to hold
the following data.

-------------------------------------------------------------------------------
name 			idNum 			department 			position
-------------------------------------------------------------------------------
susan meyer 	47899 			Accounting 			Vice president
mark jones 		39119 			IT 					Programmer
Joy Rogers 		81774 			Manufacturing 		Engineer
-------------------------------------------------------------------------------

The program should store this data in the three objects and then display the data for
each employee on the screen.

*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
private:
	int idNumber;
	string department;
	string name;
	string position;

public:
	// to assign empty strings to all string member variable and 0 to integer variable
	Employee(){
		idNumber = 0;
		name = " ";
		department = "";
		position = "";
	}

	// to assign value to all the member variables
	Employee(int, string, string, string);
	
	// to assign value to just name and id number.
	// assign empty string "" to position and department
	Employee(int, string);

	// Mutator
	void setID(int idNum);
	void setName(string n);

	// inline
	void setDepartment(string d)
	{department = d;}

	void setPosition(string p)
	{position = p;}

	// Accessor
	int getID() const;
	string getName() const;

	// inline
	string getDepartment() const
	{return department;}

	string getPosition() const
	{return position;}


};
#endif

// Employee.cpp
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

int Employee::getID(){
	return idNumber;
}

string Employee::getName(){
	return name;
}


// main.cpp
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

int main(){

	Employee e1(47899, "Susan Meyer", "Accounting", "Vice president");
	Employee e2(39119, "Mark Jones", "IT", "Programmer");
	Employee e3(81774, "Joy Rogers", "Manufacturing", "Engineer");

	int id;
	string name;
	string department;
	string position;

	// cout << "Please enter ID number: ";
	// cin >> id;
	// e1.setID(id);

	// cout << "Enter name: ";
	// cin >> name;
	// e1.setName(name);

	// cout << "Enter department: ";
	// cin >> department;
	// e1.setDepartment(department);

	// cout << "Enter position: ";
	// cin >> position;
	// e1.setPosition(position);

	// cout << "Please enter department: ";
	// cin >> department;
	// e3.setDepartment(department);

	// cout << "Enter position: ";
	// cin >> position;
	// e3.setPosition(position);

	cout << "Name" << "       " << "ID Number" << "       " << "Department" << "       " << "Position" << endl;
	cout << e1.getName(); cout << "       " << e1.getID(); cout << "       " << e1.getDepartment(); cout << "       " << e1.getPosition() << endl;
	cout << e2.getName(); cout << "       " << e2.getID(); cout << "       " << e2.getDepartment(); cout << "       " << e2.getPosition() << endl;
	cout << e3.getName(); cout << "       " << e3.getID(); cout << "       " << e3.getDepartment(); cout << "       " << e3.getPosition() << endl;

	return 0;
}


