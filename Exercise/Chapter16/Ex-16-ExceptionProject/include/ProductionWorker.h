#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include"Employee.h"
#include<iostream>

using namespace std;

// Derived Class
class ProductionWorker : public Employee
{
    protected:
        int shift;
        double rate;

    public:

        // Exception handler
        class InvalidPayRate
        {};

        // Exception handler
        class InvalidShift
        {};

        ProductionWorker();
        ProductionWorker(int, double, string, int, string);
        virtual ~ProductionWorker();

        void setShift(int s){
            if(s == 1 || s == 2){
                shift = s;
            }
            else
                throw InvalidShift();
        }

        void setRate(double r){
            if(r < 0){
                throw InvalidPayRate();
            }
            else
                rate = r;
        }

        int getShift(){
            return shift;
        }

        double getRate (){
            return rate;
        }


};

#endif // PRODUCTIONWORKER_H
