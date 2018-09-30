#include <iostream>
#include "Array.h"

using namespace std;

int main (){

	int size = 5;
	Array a1(size);

	a1.setElement(0,3);
	a1.setElement(1,2);
	a1.setElement(2,50);
	a1.setElement(3,10);
	a1.setElement(4,8);

	a1.getElement(0);

	a1.getMaxElement();
	a1.getMinElement();

	a1.getAveValue();



	return 0;
}
