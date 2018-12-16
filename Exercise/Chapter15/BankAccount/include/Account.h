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
        Account(double, double);
        // Account(double,int,int,double,double);
        virtual ~Account();
        virtual void deposit(double);
        virtual void withdraw(double);
        virtual void calcInt(double);
        virtual void monthlyProc(double);

        void setMonthlyServiceCharge(double i){
            monthlyServiceCharge = i;
        }

        void setBalance(double b){
            balance = b;
        }

        double getBalance(){
            return balance;
        }

};

#endif // ACCOUNT_H
