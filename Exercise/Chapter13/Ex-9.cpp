/*

Population
In a population, the birth rate and death rate are calculated as follows:
Birth Rate = Number of Births ÷ Population
Death Rate = Number of Deaths ÷ Population

For example, in a population of 100,000 that has 8,000 births and 6,000 deaths per
year, the birth rate and death rate are:

Birth Rate = 8,000 ÷ 100,000 = 0.08
Death Rate = 6,000 ÷ 100,000 = 0.06

Design a Population class that stores a population, number of births, and number of
deaths for a period of time. Member functions should return the birth rate and death
rate. Implement the class in a program.

Input Validation: Do not accept population figures less than 1, or birth or death numbers
less than 0.

*/

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

// Population.cpp

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


// main.cpp

#include <iostream>
#include "Population.h"

using namespace std;

int main(){

	Population p1;
	double pop,birth,death;

	cout << "Please enter population: ";
	cin >> pop;
	p1.setPop(pop);

	cout << "Please enter total num of birth: ";
	cin >> birth;
	p1.setBirth(birth);

	cout << "Please enter total num of death: ";
	cin >> death;
	p1.setDeath(death);

	cout << "Total birth rate = " << p1.getBirthRate;
	cout << endl;
	cout << "Total death rate = " << p1.getDeathRate;
	cout << endl;

	return 0;
}