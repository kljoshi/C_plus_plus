#include <iostream>
using namespace std;

int main(){
	
	int *ptr = NULL;
	
	ptr = new int[5];
	
	*ptr[1]= 6;
	
		cout << *ptr(1) << endl;	
		return 0;
}
