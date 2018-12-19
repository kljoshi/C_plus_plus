/*

Exception Project
This assignment assumes you have completed Programming Challenge 1 of Chapter 15
( Employee and ProductionWorker Classes). Modify the Employee and
ProductionWorker classes so they throw exceptions when the following errors occur:

• The Employee class should throw an exception named InvalidEmployeeNumber
when it receives an employee number that is less than 0 or greater than 9999.

• The ProductionWorker class should throw an exception named InvalidShift
when it receives an invalid shift.

• The ProductionWorker class should throw an exception named InvalidPayRate
when it receives a negative number for the hourly pay rate.

Write a driver program that demonstrates how each of these exception conditions
works.

*/
#include <iostream>
#include "ProductionWorker.h"

using namespace std;

// Prototype
string whichShift(int s);
void displayMenu(ProductionWorker *p);
template <typename T>
void exceptionHandler(ProductionWorker *p, int i, T value);

int main()
{
  ProductionWorker p1;
  int shift;
  double rate;
  string name;
  int employeeNum;
  string hireDate;

  cout <<"Enter name: ";
  cin >> name;

  p1.setEName(name);

  cout << "Enter employee Number: ";
  cin >> employeeNum;

  exceptionHandler(&p1,1,employeeNum);

  cout << "Enter hire date: ";
  cin >> hireDate;

  p1.setHireDate(hireDate);

  cout << "Enter shift (1= day shift, 2= night shift): ";
  cin >> shift;
  exceptionHandler(&p1,2,shift);

  cout << "Enter pay rate (> 0): ";
  cin >> rate;
  exceptionHandler(&p1,3,rate);

   displayMenu(&p1);
   return 0;
}

string whichShift(int s){
    if(s == 1){
       return "Day Shift.";
    }
    else if(s == 2){
        return "Night Shift.";
    }
    else {
       return "";
    }
}

template <typename T>
void exceptionHandler(ProductionWorker *p, int i, T value){

    try{
        if( i == 1){
            p->setENum(value);
        }
        else if(i == 2){
            p->setShift(value);
        }
        else if(i == 3){
            p->setRate(value);
        }
    }
    catch(ProductionWorker::InvalidShift){
        cout << "\nError: invalid shift." << endl;
    }
    catch(ProductionWorker::InvalidPayRate){
        cout << "\nError: invalid rate." << endl;
    }
    catch(Employee::InvalidEmployeeNumber){
        cout << "\nError: invalid employee number." << endl;
    }

}
void displayMenu(ProductionWorker *p){

   cout << "\nDisplay information of the workers: " << endl;
   cout << "Name: " << p->getName() << endl;
   cout << "ID: " << p->getNum() << endl;
   cout << "Hire Date: " << p->getDate() << endl;
   cout << "Shift: " <<  whichShift(p->getShift()) << endl;
   cout << "Pay Rate: " << p->getRate() << endl;
}

