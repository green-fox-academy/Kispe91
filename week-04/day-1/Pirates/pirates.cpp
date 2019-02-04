#include "pirates.h"


Pirates::Pirates(std::string nameOfPirates, int healthPoint, int gold, bool isCaptain, bool isWoodenLeg) {
    _nameOfPirates = nameOfPirates;
    _healthPoint = healthPoint;
    _gold = gold;
    _isCaptain = isCaptain;
    _isWoodenleg = isWoodenLeg;
}

void Pirates::work() {
    if (_isCaptain) {
        _gold += 10;
        _healthPoint -= 5;
    } else {
        _gold++;
        _healthPoint--;
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

void Pirates::getHealthPoint() {
    std::cout << _healthPoint << std::endl;
}

void Pirates::getGoldAmount() {
    std::cout << _gold << std::endl;
}
