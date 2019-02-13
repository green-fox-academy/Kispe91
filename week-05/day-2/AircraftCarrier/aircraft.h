#ifndef AIRCRAFTCARRIER_AIRCRAFT_H
#define AIRCRAFTCARRIER_AIRCRAFT_H

#include <string>
#include <iostream>

class Aircraft
{

public:

    virtual int fight() = 0;
    virtual int refill(int fillAmount) = 0;
    virtual std::string getType() = 0;
    virtual std::string getStatus() = 0;
    virtual bool isPriority() = 0;
    virtual int getNecessaryAmmoAmountAircraft() = 0;
    virtual int getDamageAircraft() = 0;

};


#endif //AIRCRAFTCARRIER_AIRCRAFT_H
