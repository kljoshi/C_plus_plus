#include "ProductionWorker.h"

ProductionWorker::ProductionWorker():Employee()
{
    shift = 0;
    rate = 0.0;
}

ProductionWorker::ProductionWorker(int s, double r, string n, string num, string date):Employee(n, num, date){
    shift = s;
    rate = r;
}

ProductionWorker::~ProductionWorker()
{
    //dtor
}
