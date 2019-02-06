#include "aircraft.h"

Aircraft::Aircraft(std::string type, int maxAmmo, int baseDamage)
{
    _type = type;
    _maxAmmo = maxAmmo;
    _ammoAmountBeforeFight = 0;  // _ammoAmountBeforeFight means amount before next battle or after refill
    _ammoAmountAfterFight = 0;
    _currentAmmo = 0;
    _baseDamage = baseDamage;
    _oneAirCraftDamage = 0;
}

int Aircraft::fight()
{
        _ammoAmountAfterFight = 0;
        _currentAmmo = _ammoAmountAfterFight;
        return _oneAirCraftDamage = _ammoAmountBeforeFight * _baseDamage;
}

int Aircraft::refill()
{
    _ammoAmountBeforeFight = _maxAmmo;
    return _refillAmount = _maxAmmo - _ammoAmountAfterFight;
}

std::string Aircraft::getType()
{
    return _type;
}

std::string Aircraft::getStatus()
{
    return "Type " + _type + ", Ammo amount after fight: " + std::to_string(_currentAmmo) + ", Base Damage: " +
           std::to_string(_baseDamage) + ", All Damage: " + std::to_string(_maxAmmo * _baseDamage);
}

bool Aircraft::isPriority()
{
    return _type == "F35";
}

int Aircraft::getNecessaryAmmo()
{
    return _refillAmount;
}

int Aircraft::getDamage()
{
    return _oneAirCraftDamage;
}
