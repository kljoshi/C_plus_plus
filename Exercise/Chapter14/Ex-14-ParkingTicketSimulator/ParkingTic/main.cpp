#include <iostream>
#include <ParkedCar.h>
#include <PoliceOfficer.h>
#include <ParkingMeter.h>

using namespace std;

int main()
{
    // make, model, color, license
    ParkedCar pc1("honda","civic","blue","123JCE",90);
    ParkingMeter pm1(15);

    PoliceOfficer po("God", "123kj3");
    po.examine(pc1,pm1);
    po.issueTicket(pc1,pm1);

}
