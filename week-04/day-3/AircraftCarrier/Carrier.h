#include "aircraft.h"
#include <iostream>
#include <vector>

#ifndef AIRCRAFTCARRIER_CARRIER_H
#define AIRCRAFTCARRIER_CARRIER_H


class Carrier
{

public:

    Carrier(std::vector<Aircraft*> aircraft, int storeAmmoAmount, int healthPoint);

    void add(Aircraft* aircraft);
    void fill();
    void fight(Carrier &carrier1, Carrier &carrier2);
    std::string getStatus();
    void totalDamage();

private:

    std::vector<Aircraft*> _carrier;
    int _storeAmmoAmount;
    int _healthPoint;
    int _necessaryAmmoAmount; //necessary ammo for all aircraft
    int _necessaryPriorityAmmoAmount = 0; //necessary ammo for all F35
    int _totalDamage;

};


#endif //AIRCRAFTCARRIER_CARRIER_H
