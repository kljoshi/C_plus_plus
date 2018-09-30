// Population.h
#ifndef POPULATION_H
#define POPULATION_H
#include <string>
using namespace std;

class Population {
private:
	double population;
	double numBirth;
	double numDeath;

public:
	Population();
	void setPop(double);
	void setBirth(double);
	void setDeath(double);
	double getBirthRate();
	double getDeathRate();

};
#endif
