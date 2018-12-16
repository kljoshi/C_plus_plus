#include "Number.h"
#include <iostream>

using namespace std;

Number::Number(){
    num = 0;
}

Number::Number(int n)
{
    if(n >= 0 && n <= 9999){
        num = n;
    }
    else{
        cout << "Enter number between 0 and 9999 !" <<endl;
    }
}

Number::~Number()
{
    //dtor
}

void Number::print(){

    if((num/1000)%10){
        cout << oneD[(num/1000)%10] << " thousand ";
    }

    if((num/100)%10){
        cout << oneD[(num/100)%10] << " hundred ";
    }


    if(num%10 == 0){
        if((num/10)%10){
            cout << tys[(num/10)%10];
        }
    }
    else if((num/10)%10 > 1){
        cout << tys[(num/10)%10] << " " << oneD[(num%10)] << endl;
    }
    else{
        int f = ((num/10)%10) * 10;
        int s = (num%10);
        cout << oneD[f+s] << endl;
    }


}
