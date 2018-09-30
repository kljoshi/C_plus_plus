#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car{

private:
	int yearModel;
	string make;
	int speed;

public:
	Car(int year, string brand, int accelerate){
		yearModel = year;
		make = brand;
		speed = accelerate;
	}

	int getYearModel();
	string getMake();
	int getSpeed();

	void accelerate();
	void brake();

};

#endif
