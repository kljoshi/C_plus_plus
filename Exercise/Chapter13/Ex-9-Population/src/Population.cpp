#include "Population.h"
#include <string>

Population::Population(){
	population = 0.00;
	numBirth = 0.00;
	numDeath = 0.00;
}

void Population::setPop(double pop){
	population = pop;
}

void Population::setBirth(double birth ){
	numBirth = birth;
}

void Population::setDeath(double death){
	numDeath = death;
}

double Population::getBirthRate(){
	double rate = numBirth / population;
	return rate;
}

double Population::getDeathRate(){
	double rate = numDeath / population;
	return rate;
}
