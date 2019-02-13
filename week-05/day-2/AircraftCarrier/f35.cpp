#include "f35.h"

F35::F35() : Aircraft()
{

}

int F35::fight()
{
    _allDamageF35 = _ammoStoreF35 * _baseDamageF35;
    _ammoStoreF35 = 0;
    return _allDamageF35;
}

int F35::refill(int fillAmount)
{

    if (fillAmount < getNecessaryAmmoAmountAircraft()) {
        _necessaryAmmoAmountF35 = fillAmount;
        _ammoStoreF35 += fillAmount;
        return 0;
    } else {
        _ammoStoreF35 = _maxAmmoF35;
        return fillAmount - (_necessaryAmmoAmountF35);
    }
}

std::string F35::getType()
{
    return _type;
}

std::string F35::getStatus() {
    return "Type " + getType() + ", Ammo: " + std::to_string(_ammoStoreF35) + ", Base Damage: " +
           std::to_string(_baseDamageF35) + ", All Damage: " + std::to_string(getDamageAircraft()) + "\n";
}

bool F35::isPriority() {
    return false;
}

int F35::getNecessaryAmmoAmountAircraft() {
    _necessaryAmmoAmountF35 = _maxAmmoF35 - _ammoStoreF35;
    return _necessaryAmmoAmountF35;
}

int F35::getDamageAircraft() {
    _allDamageF35 = _ammoStoreF35 * _baseDamageF35;
    return _allDamageF35;
}
