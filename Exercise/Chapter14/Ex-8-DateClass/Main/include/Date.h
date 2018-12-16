#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>
using namespace std;

class Date; // Forward Declaration

// Function Prototype for Overloaded Stream Operators
ostream &operator << (ostream &, const Date &);
istream &operator >> (istream &, Date &);

class Date
{
    private:
        int month;
        int day;
        int year;

    public:
        Date();
        Date(int, int, int);
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

        // Leap year calculate
        int countLeapYears(int);


        // ++ Prefix and postfix increment operators. These operators should increment the object's day member.
        Date operator ++ (); // Prefix ++
        Date operator ++ (int); // Postfix ++

        // -- Prefix and postfix decrement operators. These operators should decrement the object's day member.
        Date operator -- (); // Prefix --
        Date operator -- (int); // Postfix --

        // - Subtraction operator. If one Date object is subtracted from another, the operator should give the number of days between the two dates.
        int operator - (Date &);

        // friends
        friend ostream &operator << (ostream & ,const Date &);
        friend istream &operator >> (istream & , Date &);
};

#endif // DATE_H

