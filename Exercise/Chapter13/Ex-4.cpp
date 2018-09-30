/*

Personal Information Class
Design a class that holds the following personal data: name, address, age, and phone
number. Write appropriate accessor and mutator functions. Demonstrate the class by
writing a program that creates three instances of it. One instance should hold your information,
and the other two should hold your friends’ or family members’ information.

*/

// Personal.h

#ifndef PERSONAL_H
#define PERSONAL_H
#include <string>
using namespace std;

class Personal{
private:
	string name;
	string address;
	int age;
	int phone;

public:
	Personal();

	Personal(string n, string add, int a, int p){
		name = n;
		address = add;
		age = a;
		phone = p;
	}

	string getName(){
		return name;
	}

	string getAddress(){
		return address;
	}

	int getAge(){
		return age;
	}

	int getPhone(){
		return phone;
	}

}

// main.cpp

#include <iostream>
#include <string>
#include "Personal.h"

using namespace std;

int main(){
	Personal p1("Kapil", "University Dr SE", 23, 5713792341);
	Personal p2("Pritika", "1811 16th St SE", 23, 3202660952);
	Personal p3("Dad", "Kathmandu", 50, 9841346062);

	string name, address;
	int age, num;
	name = p1.getName();
	address = p1.getAddress();
	age = p1.getAge();
	num = p1.getPhone();

	cout << name << " " << age << " " << address << " " << num << endl; 
}