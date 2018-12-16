#ifndef PARKINGMETER_H
#define PARKINGMETER_H


class ParkingMeter
{
    private:
        double minPurchased;

    public:
        ParkingMeter(){
            minPurchased = 0.0;
        }
        ParkingMeter(double miP){
            minPurchased = miP;
        }

        void setMinPurchased(double miP){
            minPurchased = miP;
        }

        double getMinPurchased(){
            return minPurchased;
        }

};

#endif // PARKINGMETER_H
