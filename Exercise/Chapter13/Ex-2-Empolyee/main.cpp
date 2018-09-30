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


