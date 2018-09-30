#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}

void Date::setMonth(int m){
	month = m;
}

void Date::setDay(int d){
	day = d;
}

void Date::setYear(int y){
	year = y;
}

void Date::formatOne(int m, int d, int y)
{
	cout << m << "/" << d << "/" <<y << endl;
}

string Date::findMonth (int m){
	string month;
	if( m = 1){
		month = "Jan";
	}
	else if (m = 2){
		month = "Feb";
	}
	else if (m = 3){
		month = "March";
	}
	else if (m = 4){
		month = "April";
	}
	else if (m = 5){
		month = "May";
	}
	else if (m = 6){
		month = "June";
	}
	else if (m = 7){
		month = "July";
	}
	else if (m = 8){
		month = "August";
	}
	else if (m = 9){
		month = "Sep";
	}
	else if (m = 10){
		month = "Oct";
	}
	else if (m = 11){
		month = "Nov";
	}
	else{
		month = "Dec";
	}

	return month;
}

void Date::formatTwo(int m, int d, int y)
{
	string month = findMonth(m);
	cout << month << " " << d << "," << y << endl;
}

void Date::formatThree(int m, int d, int y){
	string month = findMonth(m);
	cout << d << " " << month << " " << y << endl;
}
