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

Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
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

string findMonth (int m){

	if( m == 1){
		return "Jan";
	}
	else if (m == 2){
        return "Feb";
	}
	else if (m == 3){
		return "March";
	}
	else if (m == 4){
		return "April";
	}
	else if (m == 5){
		return "May";
	}
	else if (m == 6){
		return "June";
	}
	else if (m == 7){
		return "July";
	}
	else if (m == 8){
		return "August";
	}
	else if (m == 9){
		return "Sep";
	}
	else if (m == 10){
		return "Oct";
	}
	else if (m == 11){
		return "Nov";
	}
	else{
		return "Dec";
	}
}

//void Date::formatTwo(int m, int d, int y)
//{
//	string month = findMonth(m);
//	cout << month << " " << d << "," << y << endl;
//}

//void Date::formatThree(int m, int d, int y){
//	string month = findMonth(m);
//	cout << d << " " << month << " " << y << endl;
//}

// prefix operator ++
Date Date::operator++(){
    ++day;
    return *this;
}

// postfix operator ++
Date Date::operator++(int ){
    Date temp;
    temp.setDay(day);
    day++;
    return temp;
}

// prefix operator --
Date Date::operator--(){

    --day;

    // return object
    return *this;
}

// postfix operator --
Date Date::operator--(int){
    Date temp;
    temp.setDay(day);
    day--;
    return temp;
}

int Date::countLeapYears(int year){

    int y = year;

    //Check if the current year needs to be considered
    //for the count of leap years or not

    if (month <= 2)
        year--;

    //An year is a leap year if it is a multiple of 4,
    // multiple of 400 and not a multiple of 100.
    return y/4 - y/100 + y /400;

}
// - operator
int Date::operator-(Date &right){
    int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    long int n1 = year*365 + day;

    for(int i=0; i< month - 1; i++){
        n1 += monthDay[i];
    }

    n1 += countLeapYears(year);

    long int n2 = right.year*365 + right.day;
    for (int i=0 ; i<right.month - 1; i++)
        n2 += monthDay[i];
    n2 += countLeapYears(right.year);

    return (n2 - n1);
}

// << overloading operator

ostream& operator << (ostream &strm,const Date &obj){
    strm << findMonth(obj.month) << " " << obj.day << ", " << obj.year;
    return strm;
}

istream& operator >> (istream &strm, Date &obj){

    cout << "Month: ";
    strm >> obj.month;

    cout << "Day: ";
    strm >> obj.day;

    cout << "Year: ";
    strm >> obj.year;

    return strm;
}
