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

};


#endif // PERSONAL_H
