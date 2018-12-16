#include "Saving.h"
#include <iostream>

using namespace std;
Saving::Saving():Account()
{
    status = false;
}

Saving::Saving(double bal, double interest):Account(bal, interest){
    if (bal > 25){
        status = true;
    }
    else {
        status = false;
    }
}

Saving::~Saving()
{
    //dtor
}

bool Saving::state(Saving* s){

    if(s->balance > 25){
    // the account is active if 1
        status = true;
        cout << "Active " << endl;
        return status;
    }
    else{
        status = false;
        cout << "Inactive" << endl;
        return status;
    }
}

void Saving::withdraw(Saving *s, double w){

    double remaining = 0.0;

    if(s->getStatus()){

        remaining = s->balance - w;
        if(remaining < 25){
            cout << "Sorry but your account should have minimum balance of $25" << endl;
            cout << "Withdrawal of $"<< w - 25 << " can be made." << endl;
        }
        else {
            cout << "Withdrawal of $"<< w << " can be made." << endl;
            s->Account::withdraw(w);
        }
    }
}



void Saving::deposit(Saving *s, double d){

    // check status of the account before deposit
    if(s->state(s))
        cout << "Account : Active." << endl;
    else
        cout << "Account : Inactive." << endl;

    s->Account::deposit(d);

    // check status of the account after deposit.
    state(s);

}

void Saving::monthlyProc(Saving *s){

    if(s->numOfWithdrawal > 4){
        s->setMonthlyServiceCharge(s->numOfWithdrawal - 4);
    }

    s->Account::monthlyProc(s->monthlyServiceCharge);

}
