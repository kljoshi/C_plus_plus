#include "ProductionWorker.h"
#include <iostream>
using namespace std;
ProductionWorker::ProductionWorker():Employee()
{
    shift = 0;
    rate = 0.0;
}


ProductionWorker::ProductionWorker(int s, double r, string n, int num, string date):Employee(n, num, date){

    shift = s;
    rate = r;
}

ProductionWorker::~ProductionWorker()
{
    //dtor
}
