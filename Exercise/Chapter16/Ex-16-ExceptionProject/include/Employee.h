#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    protected:
        string eName;
        int eNum;
        string hireDate;

    public:
        class InvalidEmployeeNumber
        {};

        Employee();
        Employee(string, int, string);
        virtual ~Employee();

        void setEName(string n){
            eName = n;
        }

        void setENum(int num){
            if((num < 0) || (num > 9999)){
                throw InvalidEmployeeNumber();
            }
            else
                eNum = num;
        }

        void setHireDate(string d){
            hireDate = d;
        }

        string getName(){
            return eName;
        }

        int getNum(){
            return eNum;
        }

        string getDate(){
            return hireDate;
        }
};

#endif // EMPLOYEE_H
