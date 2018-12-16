#include <iostream>
#include "Number.h"

using namespace std;

int main()
{
    int n = 0;

    cout << "Please enter number between 0 - 9999: ";
    cin >> n;

    Number num(n);

    num.print();
}
