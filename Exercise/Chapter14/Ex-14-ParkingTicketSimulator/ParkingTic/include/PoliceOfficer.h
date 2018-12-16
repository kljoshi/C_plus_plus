#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

class PoliceOfficer
{
    private:
        string name;
        string badgeNum;

    public:

        PoliceOfficer(){
            name = "";
            badgeNum = " ";
        }

        PoliceOfficer(string n, string b){
            name = n;
            badgeNum = b;
        }

        void setName(string *n){
            name = *n;
        }

        void setName(string n){
            name = n;
        }

        void setBadgeNum(string b){
            badgeNum = b;
        }

        string getName(){
            return name;
        }

        string getBadgeNum(){
            return badgeNum;
        }

        void examine(ParkedCar pcObj, ParkingMeter pmObj){


            if(pmObj.getMinPurchased() < pcObj.getMin()){
                cout << "Car timer expired !" << endl;
            }
            else
                cout << " everything is ok" << endl;

        }

        void issueTicket(ParkedCar pcObj,ParkingMeter pmObj){
            ParkingTicket pt(pcObj, pmObj);
            getOfficerInfo();
        }

        void getOfficerInfo(){
            cout << endl;
            cout << "Officer Info :" << endl;
            cout << "Officer :" << name << endl;
            cout << "Badge Num :" << badgeNum << endl;
        }

};

#endif // POLICEOFFICER_H
