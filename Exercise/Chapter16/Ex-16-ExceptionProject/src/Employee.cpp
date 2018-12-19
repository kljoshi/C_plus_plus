#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee()
{
    eName = "";
    eNum = 0;
    hireDate = "";
}

Employee::Employee(string n, int num, string date){
    eName = n;
    int InvalidEmployeeNumber;
    try{
        if((num < 0) || (num > 9999)){
            InvalidEmployeeNumber = num;
            throw InvalidEmployeeNumber;
        }
        eNum = num;
    }
    catch(int InvalidEmployeeNumber){
        cout << "Number " << InvalidEmployeeNumber << " is Invalid. Try number between 0 - 9999" <<endl;
    }

    hireDate = date;
}

Employee::~Employee()
{
    //dtor
}

