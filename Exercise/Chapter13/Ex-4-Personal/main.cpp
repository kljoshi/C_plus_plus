
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
