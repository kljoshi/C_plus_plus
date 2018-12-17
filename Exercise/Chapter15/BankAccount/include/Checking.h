#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"

class Checking : public Account
{
    public:
      double beginBal;
      double totalDeposit;
      double totalWithdrawal;
      double totalServiceCharge;

    	/*
   		Default constructor which will initialize all the member variable in Account into 0 by
   		calling the Account class default constructor.
   		@param: none
   		@return: none
		*/
		Checking();

		/*
   		Constructor to set the balance using the function of the base class.
   		@param: amount for starting balance.
   		@return: none
		*/
      Checking(double);

      virtual ~Checking();

      void setBeginBal(double b){
         beginBal = b;
      }

      void setTotalDeposit(double d){
         totalDeposit += d;
      }

      void setTotalWithdrawal(double w){
         totalWithdrawal += w;
      }

      void setTotalServiceCharge(double c){
         totalServiceCharge += c;
      }

      double getBeginBal(){
         return beginBal;
      }

      double getTotalDeposit(){
         return totalDeposit;
      }

      double getTotalWithdrawal(){
         return totalWithdrawal;
      }

      double getTotalServiceCharge(){
         return totalServiceCharge;
      }

      void deposit(Checking *, double);

      void withdraw(Checking *, double );

      void monthlyProc(Checking *);

      void displayInfo(Checking *);
};

#endif // CHECKING_H
