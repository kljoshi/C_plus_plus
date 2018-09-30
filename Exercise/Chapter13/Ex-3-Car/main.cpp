#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main (){

	Car m1(2001,"Honda", 25);
	Car m2(2014,"Hyundai",30);
	Car m3(2002, "Saturn", 40);

    cout << m1.getMake(); cout << endl;
    cout << "current speed: " << m1.getSpeed();
    cout << endl;
	for(int i=0; i <5; i++){
		cout << "accelerating.." << endl;
		m1.accelerate();
		cout << "current speed: " << m1.getSpeed();
		cout << endl;
	}

    for(int i=0; i <5; i++){
		cout << "braking.." << endl;
		m1.brake();
		cout << "current speed: " << m1.getSpeed();
		cout << endl;
	}



	return 0;
}
