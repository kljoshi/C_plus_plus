/*
	This is the declaration file for Account.h.
	Most of the function for Account.h is defined here. Some of the inline function are defined
	in the header file.
*/

#include "Account.h"
#include <iostream>

using namespace std;


/*
    Default constructor which will initialized all the member variable into 0 at the
    beginning when its called.
    @param: none
    @return: set all member variable to zero
*/
Account::Account()
{
	balance = 0.0;
	numOfDeposit = 0;
	numOfWithdrawal = 0;
	annualRate = 0.0;
	monthlyServiceCharge = 0.0;
}


Account::~Account()
{
    //dtor
}

/*
    Will set the value of the balance member variable. This was used mainly as the
    default constructor for checking account because annual rate was not needed.
    @param: value for the variable balance
    @return: set value for all the member variable
*/
Account::Account(double bal){
    balance = bal;
    numOfDeposit = 0;
    numOfWithdrawal = 0;
    annualRate = 0.0;
    monthlyServiceCharge = 0.0;
}

/*
    Will set the value of balance and annual rate. Created for Saving account where
    annual rate was needed.
    @param: value for balance and annual rate
    @return: set value for all the member variable
*/
Account::Account(double bal, double interest)
{
	balance = bal;
	numOfDeposit = 0;
	numOfWithdrawal = 0;
    annualRate = interest;
	monthlyServiceCharge = 0.0;
}

/*
    Increments the value of the balance and also keeps track of number of deposits made.
    @param: amount to deposit in bank
    @return: none
*/
void Account::deposit(double d){
	balance += d;
	numOfDeposit += 1;
}

/*
    Deduct the value of the balance and also keeps track of the number of withdrawal made.
    @param: amount to withdraw
    @return: none
*/
void Account::withdraw(double w){
	balance -= w;
	numOfWithdrawal += 1;
}

/*
    Calculates the monthly interest earned and add the earning to the balance amount.
    @param: annualRate member variable to calculate the monthly interest earned.
    @return: none
*/
void Account::calcInt(double rate){
	double monthlyIntRate = rate /12;
	double monthlyInt = balance * monthlyIntRate;

	balance += monthlyInt;
}

/*
    Subtracts the amount of monthlyServiceCharge (member variable) from the balance and also
    calls the calcInt() function and sets the variable (numOfWithdrawal, numOfDeposit,
    monthlyServiceCharge) to zero.
    @param: none
    @return: none
*/
void Account::monthlyProc(){

	balance -= monthlyServiceCharge;
	calcInt(annualRate);
	numOfWithdrawal = 0;
	numOfDeposit = 0;
	monthlyServiceCharge = 0.0;
}


