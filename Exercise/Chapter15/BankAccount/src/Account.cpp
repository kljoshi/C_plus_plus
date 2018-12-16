#include "Account.h"

Account::Account()
{
	balance = 0.0;
	numOfDeposit = 0;
	numOfWithdrawal = 0;
	annualRate = 0.0;
	monthlyServiceCharge = 0.0;
}

Account::Account(double bal, double interest)
{
	balance = bal;
	annualRate = interest;
}


void Account::deposit(double d){
	balance += d;
	numOfDeposit += 1;
}

void Account::withdraw(double w){
	balance -= w;
	numOfWithdrawal += 1;
}

void Account::calcInt(double interest){
	double monthlyIntRate = interest /12;
	double monthlyInt = balance * monthlyIntRate;

	balance += monthlyInt;
}

void Account::monthlyProc(double interest){
	balance -= monthlyServiceCharge;
	calcInt(interest);
	numOfWithdrawal = 0;
	numOfDeposit = 0;
	monthlyServiceCharge = 0.0;
}

Account::~Account()
{
    //dtor
}
