#include <iostream>
#include <cmath>
#include "Checking.h"

using namespace std;

/*
   Default constructor which will initialize all the member variable in Account into 0 by
   calling the Account class default constructor.
   @param: none
   @return: none
*/
Checking::Checking():Account(){

   beginBal = 0.0;
   totalDeposit = 0.0;
   totalWithdrawal = 0.0;
   totalServiceCharge = 0.0;
}

/*
   Constructor to set the balance using the function of the base class.
   @param: amount for starting balance.
   @return: none
*/
Checking::Checking(double bal):Account(bal){

   beginBal = bal;
   totalDeposit = 0.0;
   totalWithdrawal = 0.0;
   totalServiceCharge = 0.0;
}

Checking::~Checking()
{
    //dtor
}

void Checking::deposit(Checking *c, double d){
   c->setTotalDeposit(d);
   c->Account::deposit(d);
}

/*
   Check to see if the balance will go below $0 and if the balance goes below $0 a service
   charge of $15 will be taken from the account. Also, no withdrawal will be made. The
   balance will become negative if there is not enough money in account. the negative balance
   means the customer owe the negative balance to the bank.
   @param: Pointer to Checking Object and value being withdraw
   @return: none
*/
void Checking::withdraw(Checking *c, double w){
    double checkBal = c->getBalance() - w;
    if(checkBal < 0){
        cout << "Insufficient amount in the account." << endl;
        cout << "Check bounced. " << endl;
        cout << "Service charge of $15 will be charged to you. " << endl;
        c->Account::setMonthlyServiceCharge(15);
        c->Account::setBalance(c->Account::getBalance() - c->Account::getMonthlyServiceCharge());
        if(c->Account::getBalance() < 0){
            cout << "You still own the bank $" << abs(c->Account::getBalance()) << endl;
        }
    }
    else {
         c->setTotalWithdrawal(w);
         c->Account::withdraw(w);
    }
}

/*
   this function will add the monthly fee of $5 plus $0.10 per withdrawal to the base class
   variable that holds the monthly service charge.
   @param: Pointer to Checking object
   @return: none
*/
void Checking::monthlyProc(Checking *c){
    c->setMonthlyServiceCharge(5);
    c->setMonthlyServiceCharge(c->numOfWithdrawal * 0.10);
    c->setTotalServiceCharge(c->getMonthlyServiceCharge());
    c->Account::monthlyProc();
}

void Checking::displayInfo(Checking *c){
   cout << "\n---- Monthly statistics ---- " << endl;
   cout << "Begining Balance: " << c->getBeginBal() << endl;
   cout << "Total amount of deposits: " << c->getTotalDeposit()<< endl;
   cout << "Total amount of withdrawals: " << c->getTotalWithdrawal()<< endl;
   cout << "Total Service charges: " << c->getTotalServiceCharge()<<endl;
   cout << "Ending Balace: " << c->getBalance()<< endl;
}

