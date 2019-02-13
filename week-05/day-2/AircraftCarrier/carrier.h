#ifndef AIRCRAFTCARRIER_CARRIER_H
#define AIRCRAFTCARRIER_CARRIER_H

#include "aircraft.h"

#include <iostream>
#include <string>
#include <vector>

class Carrier
{
public:

    Carrier(std::vector<Aircraft *> vectorAircraft, int ammoStoreCarrier, int healthPointCarrier);

    void add(Aircraft *aircraft);
    void fill();
    void fight(Carrier &carrier);
    std::string getStatusCarrier();
    int getAllDamageCarrier();
    int getNecessaryAmmoAmountCarrier();

private:

    std::vector<Aircraft *> _vectorAircraft;
    int _ammoStoreCarrier = 0;
    int _healthPointCarrier = 0;
    int _necessaryAmmoAmountCarrier = 0;
    int _allDamageCarrier = 0;

};


#endif //AIRCRAFTCARRIER_CARRIER_H
