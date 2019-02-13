#include "f16.h"

F16::F16() : Aircraft()
{

}

int F16::fight()
{
    _ammoStoreF16 = 0;
    return _allDamageF16;
}

int F16::refill(int fillAmount)
{

   if (fillAmount < getNecessaryAmmoAmountAircraft()) {
        _necessaryAmmoAmountF16 = fillAmount;
        _ammoStoreF16 += fillAmount;
        return 0;
    } else {
        _ammoStoreF16 = _maxAmmoF16;
        return fillAmount - (_necessaryAmmoAmountF16);
    }
}

std::string F16::getType()
{
   return _type;
}

std::string F16::getStatus() {
    return "Type " + getType() + ", Ammo: " + std::to_string(_ammoStoreF16) + ", Base Damage: " +
    std::to_string(_baseDamageF16) + ", All Damage: " + std::to_string(getDamageAircraft()) + "\n";
}

bool F16::isPriority() {
    return false;
}

int F16::getNecessaryAmmoAmountAircraft() {
    _necessaryAmmoAmountF16 = _maxAmmoF16 - _ammoStoreF16;
    return _necessaryAmmoAmountF16;
}

int F16::getDamageAircraft() {
    _allDamageF16 = _ammoStoreF16 * _baseDamageF16;
    return _allDamageF16;
}
