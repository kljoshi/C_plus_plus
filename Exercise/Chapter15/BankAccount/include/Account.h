
/* This is the header file of the base class. All of the protype of the function is declared here.
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{

    public:
        double balance;
        int numOfDeposit;
        int numOfWithdrawal;
        double annualRate;
        double monthlyServiceCharge;

    public:


        Account();

        Account(double);

        Account(double, double);

        // virtual function so that derived class with the same function name and parameter can be
        // override on the derived classes.

        /*
            Destructor
            @param:
            @return:
        */
        virtual ~Account();

        virtual void deposit(double);

        virtual void withdraw(double);

        virtual void calcInt(double);

        virtual void monthlyProc();

        /*
            Will set the amount of monthly service charge which needs to be subracted from
            the account.
            @param: amount that needs to be charged.
            @return: sets the member variable monthlyServiceCharge.
        */
        void setMonthlyServiceCharge(double i){
            monthlyServiceCharge += i;
        }

        /*
            Will set the balance member variable.
            @param: amount to set the balance.
            @return: set the balance amount provided to the function.
        */
        void setBalance(double b){
            balance = b;
        }

        /*
            Will get the balance amount from the member variable.
            @param: none
            @return: amount of balance currently present
        */
        double getBalance(){
            return balance;
        }

        /*
            Will return number of withdrawal made
            @param: none
            @return: number of withdrawal made
        */
        int getNumOfWithdrawal(){
            return numOfWithdrawal;
        }

        int getNumOfDeposit(){
            return numOfDeposit;
        }

        /*
            Will return the total amount of monthly service charge.
            @param: none
            @return: amount of service charge to add
        */
        double getMonthlyServiceCharge(){
            return monthlyServiceCharge;
        }

        /*
            Will return the total percent(converted into decimal) of annual rate to add
            @param: none
            @return: converted decimal percentage value
        */
        double getAnnualRate(){
            return annualRate;
        }

};

#endif // ACCOUNT_H
