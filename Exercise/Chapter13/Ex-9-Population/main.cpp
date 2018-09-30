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

	cout << "Total birth rate = " << p1.getBirthRate();
	cout << endl;
	cout << "Total death rate = " << p1.getDeathRate();
	cout << endl;

	return 0;
}
