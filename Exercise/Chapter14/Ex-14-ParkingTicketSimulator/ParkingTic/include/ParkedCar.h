#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <string>


using namespace std;
class ParkedCar
{
    private:
        string make;
        string model;
        string color;
        string license;
        double min;

    public:
        ParkedCar(){
            make = " ";
            model = " ";
            color = " ";
            license = " ";
            min = 0.0;
        }

        ParkedCar(string mk, string mo, string co, string li, double mi){
            make =  mk;
            model = mo;
            color = co;
            license = li;
            min = mi;
        }

        void setMake(string mk){
            make = mk;
        }
        void setModel(string mo){
            model = mo;
        }
        void setColor(string co){
            color = co;
        }
        void setLicense(string li){
            license = li;
        }
        void setMin(double mi){
            license = mi;
        }

        string getMake(){
            return make;
        }
        string getModel(){
            return model;
        }
        string getColor(){
            return color;
        }
        string getLicense(){
            return license;
        }
        double getMin(){
            return min;
        }


};
#endif // PARKEDCAR_H
