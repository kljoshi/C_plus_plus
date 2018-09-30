/*
	
	Car class
	Write a class named Car that has the following member variables. 

	- yearModel. An int that holds the car's year model.
	- make. A string that holds the make of the car.
	- speed . An int that holds the car's current speed.

	In addition, the class should have the following construtor and other member functions.

	- Constructor. The constructor should accept the car's year model and make as argument.
	               These values should be assigned to the object’s yearModel and make member
				   variables. The constructor should also assign 0 to the speed member variables.

	- Accesor. Appropriate accessor functions to get the values stored in an object’s
				yearModel , make , and speed member variables.

	- accelerate . The accelerate function should add 5 to the speed member variable
					each time it is called.

	- brake . The brake function should subtract 5 from the speed member variable each
			time it is called.

	Demonstrate the class in a program that creates a Car object, and then calls the
	accelerate function five times. After each call to the accelerate function, get
	the current speed of the car and display it. Then, call the brake function five times.
	After each call to the brake function, get the current speed of the car and display it.

*/

// Car Class

#ifndef CAR_H
#define CAR_H
#include <string>

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


// Car .cpp

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


// Main.cpp

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main (){

	Car m1(2001,"Honda", 25);
	Car m2(2014,"Hyundai",30);
	Car m3(2002, "Saturn", 40);

	for(int i=0; i <5; i++){
		m1.accelerate();
		cout << m1.getSpeed();
	}
	
	for(int j=0; j <5; j++){
		m1.brake();
		cout << m1.getSpeed();
	}

	return 0;
}