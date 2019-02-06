#include <string>

#ifndef AIRCRAFTCARRIER_AIRCRAFTS_H
#define AIRCRAFTCARRIER_AIRCRAFTS_H


class Aircraft
{

public:

    Aircraft(std::string type, int maxAmmo, int baseDamage);

    int fight();
    int refill();
    std::string getType();
    std::string getStatus();
    bool isPriority();
    int getNecessaryAmmo();
    int getDamage();


private:

    std::string _type;
    int _maxAmmo;
    int _ammoAmountBeforeFight;
    int _ammoAmountAfterFight;
    int _currentAmmo;
    int _refillAmount;
    int _baseDamage;
    int _oneAirCraftDamage;

};


#endif //AIRCRAFTCARRIER_AIRCRAFTS_H
