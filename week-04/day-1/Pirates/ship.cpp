#include "ship.h"

Ship::Ship(std::vector<Pirates> ship)
{
    _ship = ship;
}

std::string Ship::getPoorPirates() {

    std::string listOfPoorPirates = "";

    for (int i = 0; i < _ship.size(); ++i) {
        if (_ship[i].getLegType() && _ship[i].getGoldAmount() < 15) {
            if (i < _ship.size() - 1) {
                listOfPoorPirates += _ship[i].getName() + ", ";
            } else {
                listOfPoorPirates += _ship[i].getName();
            }
        }
    }
    return listOfPoorPirates;
}

int Ship::getGold()
{
    int sum = 0;

    for (int i = 0; i < _ship.size(); ++i) {
        sum += _ship[i].getGoldAmount();
    }
    return sum;
}