#ifndef SAVING_H
#define SAVING_H
#include "Account.h"

class Saving : public Account
{
    public:
		bool status; // stores the status of the account where it is active or inactive.
      double beginBal;
      double totalDeposit;
      double totalWithdrawal;
      double totalServiceCharge;

   public:

      Saving();

      Saving(double , double);

      /*
         Destructor
         @param:
         @return:
      */
      virtual ~Saving();

      /*
         Set the the status of the account to true for active and false for inactive
         @param: true or false value
         @return: none
      */
      void setStatus(bool s){
          status = s;
      }

      /*
         Return the state of the account status
         @param: none
         @return: true for active and false for inactive
      */
      bool getStatus(){
          return status;
      }

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

      bool state(Saving *);

      void deposit(Saving *, double);

      void withdraw(Saving *, double);

      void monthlyProc(Saving *);

      void displayInfo(Saving *);

};

#endif // SAVING_H
