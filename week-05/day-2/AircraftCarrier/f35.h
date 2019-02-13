#ifndef AIRCRAFTCARRIER_F35_H
#define AIRCRAFTCARRIER_F35_H

#include "aircraft.h"

class F35 : public Aircraft
{

public:

    F35();

    int fight() override;
    int refill(int fillAmount) override;
    std::string getType() override;
    std::string getStatus() override;
    bool isPriority() override;
    int getNecessaryAmmoAmountAircraft() override;
    int getDamageAircraft() override;

private:

    std::string _type = "F35";
    int _maxAmmoF35 = 12;
    int _baseDamageF35 = 50;
    int _ammoStoreF35 = 0;
    int _allDamageF35 = 0;
    int _necessaryAmmoAmountF35 = 0;
};

#endif
