#include "pirates.h"


Pirates::Pirates(std::string nameOfPirates, int healthPoint, int gold, bool isCaptain, bool isWoodenLeg) {
    _nameOfPirates = nameOfPirates;
    _healthPoint = healthPoint;
    _gold = gold;
    _isCaptain = isCaptain;
    _isWoodenleg = isWoodenLeg;
}

void Pirates::work(int howManyTimes) {
    if (_isCaptain) {
        _gold += 10 * howManyTimes;
        _healthPoint -= 5 * howManyTimes;;
    } else {
        _gold += howManyTimes;
        _healthPoint -= howManyTimes;
    }
}

void Pirates::party() {
    if (_isCaptain) {
        _healthPoint += 10;
    } else {
        _healthPoint++;
    }
}

std::string Pirates::pirateIntroduction() {
    if (_isWoodenleg) {
        return std::string("Hello, I'm ") + _nameOfPirates + std::string(". I have a wooden leg and ") +
               std::to_string(_gold) + std::string(" golds.");
    } else {
        return std::string("Hello, I'm ") + _nameOfPirates + std::string(". I still have my real legs and ") +
               std::to_string(_gold) + std::string(" golds.");
    }
}

int Pirates::getHealthPoint() {
    return _healthPoint;
}

int Pirates::getGoldAmount() {
    return _gold;
}

bool Pirates::getLegType()
{
    return _isWoodenleg;
}

std::string Pirates::getName()
{
    return _nameOfPirates;
}