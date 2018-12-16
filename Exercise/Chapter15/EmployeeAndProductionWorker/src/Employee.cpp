#include "Employee.h"

Employee::Employee()
{
    eName = "";
    eNum = "";
    hireDate = "";
}

Employee::Employee(string n, string num, string date){
    eName = n;
    eNum = num;
    hireDate = date;
}

Employee::~Employee()
{
    //dtor
}
