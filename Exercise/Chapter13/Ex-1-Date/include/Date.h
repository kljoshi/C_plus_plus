#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date();
	void setMonth(int);
	void setDay(int);
	void setYear(int);

	int getMonth() const
	{ return month;}

	int getDay() const
	{ return day;}

	int getYear() const
	{ return year;}

	void formatOne (int,int,int);
	void formatTwo (int,int,int);
	void formatThree (int,int,int);
	string findMonth (int);
};
#endif

