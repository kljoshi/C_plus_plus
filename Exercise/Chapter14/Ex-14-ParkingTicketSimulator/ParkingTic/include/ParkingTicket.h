#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class PoliceOfficer;
class ParkingTicket
{

    private:
        ParkedCar pc;
        ParkingMeter pm;
        double fine;

    public:
        ParkingTicket(){
            fine = 0.0;
        }

        ParkingTicket(ParkedCar c, ParkingMeter m){
            pc = c;
            pm = m;
            displayIllegallyParkedCarInfo(c);
            totalFine();
        }


        void displayIllegallyParkedCarInfo(ParkedCar pcObj){
            pc = pcObj;

            cout << endl;
            cout << "Illegally Parked Car Info: " << endl;
            cout << "Make : " << pc.getMake() << endl;
            cout << "Model : " << pc.getModel() << endl;
            cout << "Color : " << pc.getColor() << endl;
            cout << "License : " << pc.getLicense() << endl;
        }

        void totalFine(){
            double penalty = 0.0;

            penalty = pc.getMin() - pm.getMinPurchased();

            if(penalty > 0){
                if(penalty > 0){
                    fine += 25;
                    penalty -= 60;
                }

                while(penalty > 0){
                    fine += 10;
                    penalty -= 60;
                }

                cout << endl;
                cout << "total fine: " << endl;
                cout << "Fine : $"<< fine << endl;
            }
            else
            cout << "The car still has "<< fabs(penalty) << " min left." <<endl;
        }

        void setFine(double f){
            fine = f;
        }

        double getFine(){
            return fine;
        }

        void operator= (ParkedCar &pcobj){
            pc.setMake(pcobj.getMake());
            pc.setModel(pcobj.getModel());
            pc.setColor(pcobj.getColor());
            pc.setLicense(pcobj.getLicense());
            pc.setMin(pcobj.getMin());
        }

        void operator=(ParkingMeter &pmobj){
            pm.setMinPurchased(pmobj.getMinPurchased());
        }

};

#endif // PARKINGTICKET_H
