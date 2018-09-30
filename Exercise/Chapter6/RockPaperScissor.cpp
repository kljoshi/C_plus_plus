
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

void askUser(int &);
void displayComputerOption(int);
void conditionToContinue(bool &value, int userValue, int randomValue);

int main()
{
   int randomValue;
   int userValue;
   bool value;

   srand(time(NULL));

   do{
   	value = false;
      
      // random num generator;
      randomValue = rand() % 3 + 1;  
      askUser(userValue);
      displayComputerOption(randomValue);
      conditionToContinue(value, userValue, randomValue);
      
   }while(value);
   
   return 0;
}

void askUser(int &userValue){
	string input;
   cout << "Please enter rock, paper, or sissor (r,p,s): " << endl;
      cin >> input;
      
      if (input == "rock" || input == "r"){
         cout << "\nYou chose: Rock" << endl; 
         userValue = 1;
      }
      else if (input == "paper" || input == "p"){
         cout << "\nYou chose: Paper" << endl; 
         userValue = 2;
      }
      else {
         cout << "\nYou chose: Sissor" << endl; 
         userValue = 3;
      }
}

void displayComputerOption (int randomValue){
	
      if (randomValue == 1){
         cout << "Computer chose: Rock\n" << endl;
      }
      else if (randomValue == 2){
         cout << "Computer chose: Paper\n" << endl;
      }
      else {
         cout << "Computer chose: Sissor\n" << endl;
      }
}

void conditionToContinue(bool &value, int userValue, int randomValue){
	char tryAgain;
	
   if (userValue == randomValue){
         value = true;
         cout << "\nIt was a draw please play again." << endl;
      }
      else if ((userValue == 1 && randomValue == 2) || (userValue == 2 && randomValue == 3) || (userValue == 3 && randomValue == 1)){
         cout << "Computer wins!" << endl;
            cout << "Do you want to play again? (y/n): "<<endl;
         cin >> tryAgain;
         
         if(tryAgain == 'y'){
            value = true;
         }
         else {
            value = false;
         }
      }
      else if ((randomValue == 1 && userValue == 2) || (randomValue == 2 && userValue == 3) || (randomValue == 3 && userValue == 1)) {
         cout << "You win !" << endl;
            cout << "Do you want to try again ?: "<<endl;
         cin >> tryAgain;
         
         if(tryAgain == 'y'){
            value = true;
         }
         else {
            value = false;
         }
      }
}
