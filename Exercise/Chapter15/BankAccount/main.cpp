/*
Bank Accounts
This program should be designed and written by a team of students. Here are some suggestions:
   • One or more students may work on a single class.
   • The requirements of the program should be analyzed so each student is given about the same
      work load.
   • The parameters and return types of each function and class member function should be decided
      in advance.
   • The program will be best implemented as a multi-file program.

   Design a generic class to hold the following information about a bank account:
      Balance
      Number of deposits this month
      Number of withdrawals
      Annual interest rate
      Monthly service charges

   The class should have the following member functions:
      Constructor : Accepts arguments for the balance and annual interest rate.
      deposit : A virtual function that accepts an argument for the amount of the deposit.
               The function should add the argument to the account balance. It should also
               increment the variable holding the number of deposits.

      withdraw : A virtual function that accepts an argument for the amount of the withdrawal. The
               function should subtract the argument from the balance. It should also increment the
               variable holding the number of withdrawals.

      calcInt : A virtual function that updates the balance by calculating the monthly interest
               earned by the account, and adding this interest to the balance.

               This is performed by the following formulas:
                  Monthly Interest Rate = (Annual Interest Rate / 12)
                  Monthly Interest = Balance * Monthly Interest Rate
                  Balance = Balance + Monthly Interest

      monthlyProc : A virtual function that subtracts the monthly service charges from the balance,
                  calls the calcInt function, and then sets the variables that hold the number of
                  withdrawals, number of deposits, and monthly service charges to zero.

      Next, design a savings account class, derived from the generic account class. The savings
      account class should have the following additional member:

         status (to represent an active or inactive account)

      If the balance of a savings account falls below $25, it becomes inactive. (The status
      member could be a flag variable.) No more withdrawals may be made until the balance
      is raised above $25, at which time the account becomes active again. The savings
      account class should have the following member functions:

      withdraw : A function that checks to see if the account is inactive before a withdrawal
               is made. (No withdrawal will be allowed if the account is not active.) A withdrawal
               is then made by calling the base class version of the function.

      deposit : A function that checks to see if the account is inactive before a deposit is made.
               If the account is inactive and the deposit brings the balance above $25, the account
               becomes active again. The deposit is then made by calling the base class version of
               the function.

      monthlyProc : Before the base class function is called, this function checks the number of
                  withdrawals. If the number of withdrawals for the month is more than 4, a service
                  charge of $1 for each withdrawal above 4 is added to the base class variable that
                  holds the monthly service charges. (Don’t forget to check the account balance
                  after the service charge is taken. If the balance falls below $25, the account
                  becomes inactive.)

      Next, design a checking account class, also derived from the generic account class. It
      should have the following member functions:

      withdraw : Before the base class function is called, this function will determine if a
               withdrawal (a check written) will cause the balance to go below $0. If
               the balance goes below $0, a service charge of $15 will be taken from
               the account. (The withdrawal will not be made.) If there isn’t enough
               in the account to pay the service charge, the balance will become negative
               and the customer will owe the negative amount to the bank.

      monthlyProc : Before the base class function is called, this function adds the monthly
                  fee of $5 plus $0.10 per withdrawal (check written) to the base class
                  variable that holds the monthly service charges.

Write a complete program that demonstrates these classes by asking the user to enter the amounts of
deposits and withdrawals for a savings account and checking account. The program should display
statistics for the month, including beginning balance, total amount of deposits, total amount of
withdrawals, service charges, and ending balance.

*/

#include <iostream>
#include <string>
#include "Saving.h"
#include "Checking.h"

using namespace std;

//prototype
void inputMenuSaving(double &, double &);
void inputMenuChecking(double &);
void mainMenu();
void savingMenu();
void checkingMenu();

int main()
{
    double balance = 0.0;
    double annualInterest = 0.0;
    double deposit = 0.0;
    double withdraw = 0.0;
    bool condition = true;

    cout << "Bank account simulator: " << endl;

    inputMenuSaving(balance, annualInterest);
    Saving s(balance,annualInterest);

    inputMenuChecking(balance);
    Checking c(balance);

    string option;
    string option1;

    do{
      condition = true;

      mainMenu();
      cin >> option;

      if(option == "1"){

        do{

          savingMenu();
          cin >> option1;

          if(option1 == "1"){
            cout << "\n---- Deposit money ----" << endl;
            cout << "Enter amount: ";
            cin >> deposit;

            s.deposit(&s, deposit);
          }

          else if(option1 == "2"){
            cout << "\n---- Withdraw money ----" << endl;
            cout << "Enter amount: ";
            cin >> withdraw;

            s.withdraw(&s, withdraw);
          }

          else if(option1 == "3"){
            cout << "\n---- Calculate monthly earning and fees ---- " << endl;
            s.monthlyProc(&s);
          }

          else if(option1 == "4"){
            cout << "\n---- Saving Account detail ----" << endl;
            s.displayInfo(&s);
          }
          else if(option1 == "5"){
            cout << "\nBack to main menu." <<endl;
          }
          else {
            cout << "\nInvalid option. Please select number between (1 - 5)." << endl;
          }

        }while(option1 != "5");

      }

      else if(option == "2"){
        do{

          checkingMenu();
          cin >> option1;

          if(option1 == "1"){
            cout << "\n---- Deposit money ----" << endl;
            cout << "Enter amount: ";
            cin >> deposit;

            c.deposit(&c, deposit);
          }

          else if(option1 == "2"){
            cout << "\n---- Withdraw money ----" << endl;
            cout << "Enter amount: ";
            cin >> withdraw;

            c.withdraw(&c, withdraw);
          }

          else if(option1 == "3"){
            cout << "\n---- Calculate monthly earning and fees ---- " << endl;
            c.monthlyProc(&c);
          }

          else if(option1 == "4"){
            cout << "\n---- Saving Account detail ----" << endl;
            c.displayInfo(&c);
          }

          else if(option1 == "5"){
            cout << "\nBack to main menu." <<endl;
          }
          else {
            cout << "\nInvalid option. Please select number between (1 - 5)." << endl;
          }

        }while(option1 != "5");


      }

      else if(option == "3"){
        condition = false;
        cout << " Thank you for using the simulator." << endl;
      }

      else{
        cout << "Invalid option please try again. select number between 1 - 3." <<endl;
        condition = true;
      }

    }while(condition);

    return 0;
}

void inputMenuSaving(double &balance, double &annualInterest){
    cout << "Enter the balance amount in Saving account : ";
    cin >>  balance;

    cout << "Enter the annual interest rate for Saving account (convert into decimal): ";
    cin >> annualInterest;
}

void inputMenuChecking(double &balance){
  cout << "Enter the balance amount in Checking account : ";
  cin >> balance;
}

void mainMenu(){
  cout <<"\nSelect an option from menu below: " << endl;
  cout <<"1. Saving account " << endl;
  cout <<"2. Checking account " << endl;
  cout <<"3. Exit " << endl;
  cout <<"Please select a number(1,2,or 3): ";
}

void savingMenu(){
  cout << "\nSaving Account menu: " << endl;
  cout << "1. Deposit money" << endl;
  cout << "2. Withdraw money" << endl;
  cout << "3. Calculate and add monthly earning and fees." << endl;
  cout << "Note for option 3: selecting this option will mark end of a monthly period. Counter value will be set to zero." << endl;
  cout << "4. View account detail. " <<endl;
  cout << "5. Go back to main menu." <<endl;
  cout <<"Please select a number(1,2,3,4,or 5): ";
}

void checkingMenu(){
  cout << "\nChecking Account menu: " <<endl;
  cout << "1. Deposit money" << endl;
  cout << "2. Withdraw money" << endl;
  cout << "3. Calculate monthly fees." <<endl;
  cout << "4. View account detail. " <<endl;
  cout << "5. Go back to main menu." <<endl;
  cout <<"Please select a number(1,2,3,4,or 5): ";
}
