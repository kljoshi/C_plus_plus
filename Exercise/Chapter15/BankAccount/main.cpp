#include <iostream>
#include "Saving.h"

using namespace std;

int main()
{
    Saving s(10,0.013);
//    cout << s.getStatus() << endl;
//    s.Saving::withdraw(&s, 25);
    s.Saving::deposit(&s, 20);
    cout << s.getBalance() << endl;
    s.Saving::withdraw(&s, 10);
//    cout << s.getBalance() << endl;
    cout << s.getBalance();
    return 0;
}


