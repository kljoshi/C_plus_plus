#include "Saving.h"
#include <iostream>

using namespace std;

/*
   Default constructor which will initialize all the member variable in Account into 0 by
   calling the Account class default constructor and the boolean variable for Saving class to
   false.
   @param: none
   @return: none
*/
Saving::Saving():Account()
{
    status = false;
    beginBal = 0.0;
    totalDeposit = 0.0;
    totalWithdrawal = 0.0;
    totalServiceCharge = 0.0;
}

/*
   Constructor to set the balance and annual rate from Account. Will set the status variable
   from saving object to true or false depending on the amount of balance present.
   @param: balance amount and annual rate amount
   @return: none
*/
Saving::Saving(double bal, double interest):Account(bal, interest){
    if (bal > 25){
        status = true;
    }
    else {
        status = false;
    }
    beginBal = bal;
    totalDeposit = 0.0;
    totalWithdrawal = 0.0;
    totalServiceCharge = 0.0;
}


Saving::~Saving()
{
    //dtor
}

/*
   Calculate the status of the account depending on the balance amount if above 25 is true
   else its false.
   @param: Pointer to Saving object
   @return: true for active account and false for inactive account
*/
bool Saving::state(Saving* s){

    if(s->balance > 25){
    // the account is active if 1
        status = true;
        return status;
    }
    else{
        status = false;
        return status;
    }
}

/*
   Check to see if the account is active or inactive before the withdrawal. If account is
   inactive no withdrawal will be made. The withdrawal is than made by calling the bas class
   version of the function.
   @param: Pointer to Saving Object and value being withdraw
   @return: none
*/
void Saving::withdraw(Saving *s, double w){

    double remaining = 0.0;

    if(s->getStatus()){

        s->setTotalWithdrawal(w);
        s->Account::withdraw(w);
        cout << "\nWithdrawal of $"<< w << " has been made." << endl;
        if(s->state(s))
            cout << "Account : Active." << endl;
        else
            cout << "Account : Inactive." << endl;
        cout << "Number of withdrawal: " << s->getNumOfWithdrawal() <<endl;
        cout << "Total balance: " << s->getBalance() << endl;

    }
    else {
        cout << "Withdrawal can not be made. Account is inactive" << endl;
    }
}


/*
   Will check if the account is active or inactive before making the deposit. And deposit the
   money by calling the base class version of the function. If the account is inactive and the
   deposit bring the balance above $25 the status of the account is changed to active.
   @param: Pointer to Saving Object and value being deposit
   @return: none
*/
void Saving::deposit(Saving *s, double d){

    // check status of the account before deposit
    if(s->state(s))
        cout << "Account : Active." << endl;
    else
        cout << "Account : Inactive." << endl;

    s->setTotalDeposit(d);
    s->Account::deposit(d);
    cout << "\nDeposit of "<<d << " has been made." <<endl;
    cout << "Number of deposit: " << s->getNumOfDeposit() << endl;
    cout << "Total balance: " << s->getBalance() << endl;

    // check status of the account after deposit.
    state(s);



}

/*
   Check number of withdrawals made and if the number is more than 4, a service charge of $1
   for each withdrawal about 4 is added to the base class variable that holds the monthly
   service charge.
   @param: Pointer to Saving object
   @return: none
*/
void Saving::monthlyProc(Saving *s){
    cout << "\nFor every withdrawal above 4, a service charge of $1 is added." << endl;
    cout << "Number of withdrawal made: "<<s->getNumOfWithdrawal() << endl;
    if((s->getNumOfWithdrawal()) > 4){
        s->setMonthlyServiceCharge((s->getNumOfWithdrawal() - 4));
    }

    cout << "Monthly service charge  " << s->getMonthlyServiceCharge() << endl;
    s->setTotalServiceCharge(s->getMonthlyServiceCharge());
    s->Account::monthlyProc();

    state(s);
}


void Saving::displayInfo(Saving * s){

   cout << "\n---- Monthly statistics ---- " << endl;
   cout << "Account: " << s->getStatus()<< endl;
   cout << "Begining Balance: " << s->getBeginBal() << endl;
   cout << "Total amount of deposits: " << s->getTotalDeposit()<< endl;
   cout << "Total amount of withdrawals: " << s->getTotalWithdrawal()<< endl;
   cout << "Total Service charges: " << s->getTotalServiceCharge()<<endl;
   cout << "Ending Balance: " << s->getBalance()<< endl;
}

