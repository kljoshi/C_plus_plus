#include "Car.h"
#include <string>

int Car::getYearModel(){
	return yearModel;
}

string Car::getMake(){
	return make;
}

int Car::getSpeed(){
	return speed;
}

void Car::accelerate(){
	speed = speed + 5;
}

void Car::brake(){
	speed = speed - 5;
}
