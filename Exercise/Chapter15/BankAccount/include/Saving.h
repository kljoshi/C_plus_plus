#ifndef SAVING_H
#define SAVING_H
#include "Account.h"

class Saving : public Account
{
    public:
		bool status;

   public:
      Saving();
      Saving(double , double);
      virtual ~Saving();

      void setStatus(int s){
          status = s;
      }

      bool getStatus(){
          return status;
      }

      bool state(Saving *);

      void deposit(Saving *, double);

      void withdraw(Saving *, double);

      void monthlyProc(Saving *);



};

#endif // SAVING_H
