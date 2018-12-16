/*
Design a class named Employee . The class should keep the following information in
• Employee name
• Employee number
• Hire date
Write one or more constructors and the appropriate accessor and mutator functions
for the class.
*/
#include <iostream>
#include "ProductionWorker.h"

using namespace std;

// Prototype
string whichShift(ProductionWorker p);
void displayMenu(ProductionWorker );


int main()
{
   // Using base class called ProductionWorker
   ProductionWorker p1(1,13,"Alex","1234","01/05/2010");
   ProductionWorker p2(2,10,"Jack","4321","05/08/2017");

    // function to know which shift the worker works in.

    displayMenu(p1);
    displayMenu(p2);

   return 0;
}

string whichShift(ProductionWorker p){
    if(p.getShift() == 1){
       return "Day Shift.";
    }
    else if(p.getShift() == 2){
        return "Night Shift.";
    }
    else {
       return "Shift is wrong can not find any match.";
    }
}


void displayMenu(ProductionWorker p){

   cout << "\nDisplay information of the workers: " << endl;
   cout << "Name: " << p.getName() << endl;
   cout << "ID: " << p.getNum() << endl;
   cout << "Hire Date: " << p.getDate() << endl;
   cout << "Shift: " <<  whichShift(p) << endl;
   cout << "Pay Rate: " << p.getRate() << endl;
}

