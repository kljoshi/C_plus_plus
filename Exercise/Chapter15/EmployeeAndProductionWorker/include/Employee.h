#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    protected:
        string eName;
        string eNum;
        string hireDate;

    public:
        Employee();
        Employee(string, string, string);
        virtual ~Employee();
        string getName(){
            return eName;
        }

        string getNum(){
            return eNum;
        }

        string getDate(){
            return hireDate;
        }
};

#endif // EMPLOYEE_H
