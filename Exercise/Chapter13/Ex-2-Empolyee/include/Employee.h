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
