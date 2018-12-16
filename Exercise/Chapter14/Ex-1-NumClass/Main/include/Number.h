#ifndef NUMBER_H
#define NUMBER_H
#include <string>

using namespace std;
class Number
{
    private:
        int num;
        string oneD[20]    = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen", "fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
        string tys[10]      = {"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
        string hundred[1]  = {"hundred"};
        string thousand[1] = {"thousand"};

    public:
        Number();
        Number(int);
        virtual ~Number();
        void print();
};

#endif // NUMBER_H
