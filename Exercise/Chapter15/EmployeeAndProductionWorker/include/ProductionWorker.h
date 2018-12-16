#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include"Employee.h"
// Derived Class
class ProductionWorker : public Employee
{
    protected:
        int shift;
        double rate;

    public:
        ProductionWorker();
        ProductionWorker(int, double, string, string, string);
        virtual ~ProductionWorker();

        int getShift(){
            return shift;
        }

        double getRate (){
            return rate;
        }


};

#endif // PRODUCTIONWORKER_H
