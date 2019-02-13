#ifndef AIRCRAFTCARRIER_F16_H
#define AIRCRAFTCARRIER_F16_H

#include "aircraft.h"

class F16 : public Aircraft
{

public:

    F16();

    int fight() override;
    int refill(int fillAmount) override;
    std::string getType() override;
    std::string getStatus() override;
    bool isPriority() override;
    int getNecessaryAmmoAmountAircraft() override;
    int getDamageAircraft() override;


private:

    std::string _type = "F16";
    int _maxAmmoF16 = 8;
    int _baseDamageF16 = 30;
    int _ammoStoreF16 = 0;
    int _allDamageF16 = 0;
    int _necessaryAmmoAmountF16 = 0;

};


#endif //AIRCRAFTCARRIER_F16_H
