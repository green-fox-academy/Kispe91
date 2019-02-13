#include "carrier.h"

Carrier::Carrier(std::vector<Aircraft *> vectorAircraft, int ammoStoreCarrier, int healthPointCarrier) {
    _vectorAircraft = vectorAircraft;
    _ammoStoreCarrier = ammoStoreCarrier;
    _healthPointCarrier = healthPointCarrier;
}

void Carrier::add(Aircraft *aircraft) {
    _vectorAircraft.push_back(aircraft);
}

void Carrier::fill() {

    if (_ammoStoreCarrier >= getNecessaryAmmoAmountCarrier()) {
        for (int i = 0; i < _vectorAircraft.size(); ++i) {
            _necessaryAmmoAmountCarrier -= _vectorAircraft[i]->getNecessaryAmmoAmountAircraft();
            _ammoStoreCarrier = _vectorAircraft[i]->refill(_ammoStoreCarrier);
        }
    } else {
        for (int i = 0; i < _vectorAircraft.size(); ++i) {
            if (_vectorAircraft[i]->isPriority() && _ammoStoreCarrier > 0) {
                _necessaryAmmoAmountCarrier -= _vectorAircraft[i]->getNecessaryAmmoAmountAircraft();
                _ammoStoreCarrier = _vectorAircraft[i]->refill(_ammoStoreCarrier);
            }
        }

        for (int j = 0; j <  _vectorAircraft.size(); ++j) {
            if (!_vectorAircraft[j]->isPriority() && _ammoStoreCarrier > 0) {
                _necessaryAmmoAmountCarrier -= _vectorAircraft[j]->getNecessaryAmmoAmountAircraft();
                _ammoStoreCarrier = _vectorAircraft[j]->refill(_ammoStoreCarrier);
            }
        }

    }
 }

void Carrier::fight(Carrier &carrier) {
    for (int i = 0; i < _vectorAircraft.size(); ++i) {
        carrier._healthPointCarrier -= _vectorAircraft[i]->fight();
    }

    for (int i = 0; i < carrier._vectorAircraft.size(); ++i) {
        _healthPointCarrier -= carrier._vectorAircraft[i]->fight();
    }

    if(_healthPointCarrier < 0) {
        _healthPointCarrier = 0;
    }

    if(carrier._healthPointCarrier < 0) {
        carrier._healthPointCarrier = 0;
    }

}

std::string Carrier::getStatusCarrier()
{
    if(_healthPointCarrier == 0) {
        return "It's dead Jim :(";
    } else {
        std::string allAirCrafts;
        for (int i = 0; i < _vectorAircraft.size(); ++i) {
            allAirCrafts += _vectorAircraft[i]->getStatus();
        }
        return "HP: " + std::to_string(_healthPointCarrier) + ", Aircraft count: " + std::to_string(_vectorAircraft.size()) +
        ", Ammo storage: " + std::to_string(_ammoStoreCarrier) + ", Total damage: " +
        std::to_string(getAllDamageCarrier()) + "\n" + "Aircrafts: " +
        "\n" + allAirCrafts;
    }
}

int Carrier::getAllDamageCarrier() {
    _allDamageCarrier = 0;
    for (int i = 0; i < _vectorAircraft.size(); ++i) {
        _allDamageCarrier += _vectorAircraft[i]->getDamageAircraft();
    }
    return _allDamageCarrier;
}

int Carrier::getNecessaryAmmoAmountCarrier() {
    _necessaryAmmoAmountCarrier = 0;
    for (int i = 0; i < _vectorAircraft.size(); ++i) {

        _necessaryAmmoAmountCarrier += _vectorAircraft[i]->getNecessaryAmmoAmountAircraft();
    }
    return _necessaryAmmoAmountCarrier;
}
