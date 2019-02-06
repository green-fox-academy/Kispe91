#include "carrier.h"

Carrier::Carrier(std::vector<Aircraft*> carrier, int storeAmmoAmount, int healthPoint)
{
    _carrier = carrier;
    _storeAmmoAmount = storeAmmoAmount;
    _healthPoint = healthPoint
    _necessaryAmmoAmount = 0;
    _necessaryPriorityAmmoAmount = 0;
    _totalDamage = 0;
}

void Carrier::add(Aircraft* aircraft)
{
    _carrier.push_back(aircraft);
}

void Carrier::fill() {
    for (int i = 0; i < _carrier.size(); ++i) {
        _necessaryAmmoAmount += _carrier[i]->getNecessaryAmmo();
    }
    for (int j = 0; j < _carrier.size(); ++j) {
        if (_carrier[j]->isPriority()) {
            _necessaryPriorityAmmoAmount += _carrier[j]->getNecessaryAmmo();
        }
    }
    for (int i = 0; i < _carrier.size(); ++i) {
        if (_storeAmmoAmount == 0) {
            throw "Your carrier ammo amount is 0, you cannot fill your aircraft";
        } else if (_storeAmmoAmount < _necessaryPriorityAmmoAmount &&
                   _carrier[i]->isPriority() && _storeAmmoAmount > _carrier[i]->getNecessaryAmmo()) {
            _carrier[i]->refill();
        } else if (_storeAmmoAmount > _necessaryPriorityAmmoAmount && _storeAmmoAmount < _necessaryAmmoAmount &&
                   _storeAmmoAmount > _carrier[i]->getNecessaryAmmo()) {
            _carrier[i]->refill();
        } else {
            _carrier[i]->refill();
        }
    }
}

void Carrier::fight(Carrier &carrier1, Carrier &carrier2)
{
    if(carrier1._totalDamage >= carrier2._healthPoint && carrier2._totalDamage >= carrier1._healthPoint) {
        carrier1._healthPoint = 0;
        carrier2._healthPoint = 0;
    } else if (carrier1._totalDamage < carrier2._healthPoint && carrier2._totalDamage >= carrier1._healthPoint) {
        carrier1._healthPoint = 0;
        carrier2._healthPoint -= carrier1._totalDamage;
    } else if (carrier1._totalDamage >= carrier2._healthPoint && carrier2._totalDamage < carrier1._healthPoint) {
        carrier1._healthPoint -= carrier2._totalDamage;
        carrier2._healthPoint = 0;
    } else {
        carrier1._healthPoint -= carrier2._totalDamage;
        carrier2._healthPoint -= carrier1._totalDamage;
    }
}

void Carrier::totalDamage()
{
    for (int i = 0; i < _carrier.size(); ++i) {
        _totalDamage += _carrier[i]->getDamage();
    }
}

std::string Carrier::getStatus()
{
    if(_healthPoint > 0) {
        for (int i = 0; i < _carrier.size(); ++i) {
            return "HP: " + std::to_string(_healthPoint) + ", Aircraft count: " + std::to_string(_carrier.size()) +
                   ", Ammo Storage: " + std::to_string(_storeAmmoAmount) + ", Total damage: " +
                   std::to_string(_totalDamage) + "\n" + _carrier[i]->getStatus() + "\n";
        }
    } else {
        return "It's dead Jim :(";
    }
}