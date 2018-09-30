#include <iostream>
#include "Date.h"
using namespace std;

int main(){
	Date d;
	int month, day, year;
	bool condition,condition2;

	do{
		cout << "Please enter month in number: ";
		cin >> month;
		if (month > 12 || month < 1){
			cout << "Month doesnot exist. try again" << endl;
			condition = true;
		}
		else{
			d.setMonth(month);
			condition = false;
		}
	}while(condition);

	do{
		cout << "Please enter day in number: ";
		cin >> day;
		if (day > 31 || day < 1){
			cout << "Day doesnot exist. try again" << endl;
			condition2 = true;
		}
		else{
			d.setDay(day);
			condition2 = false;
		}
	}while(condition2);

	cout << "Please enter year in number: ";
	cin >> year;

    cout << endl;
	cout << "Display: " << endl;
	cout << "Format One: ";
    d.formatOne(month,day,year);

	cout << "Format Two: ";
	d.formatTwo(month,day,year);

	cout << "Format Three: ";
	d.formatThree(month,day,year);
	cout << endl;

	return 0;
}
