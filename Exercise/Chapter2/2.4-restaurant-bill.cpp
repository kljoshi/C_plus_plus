#include<iostream>
using namespace std;

int main(){
	double mealCharge = 88.67,
			 tax = 6.75/100,
			 tip = 20.0/100,
			 totalCharge = 0,
			 tipCal = 0;

	totalCharge = (mealCharge * tax) + mealCharge;
	tipCal = totalCharge * tip; 
	cout << "Total is " << totalCharge << endl;
	cout << "Tip should be " << tipCal << endl;

	
	// cout << mealcharge << " " << tax << " " << tip << endl;

return 0;
			 
}

