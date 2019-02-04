#include "pirates.h"
#include <vector>
#include <string>

#ifndef PIRATES_SHIP_H
#define PIRATES_SHIP_H

class Ship {

public:

    Ship(std::vector<Pirates> ship);

    // pirateRecruitment();
    std::string getPoorPirates();
    int getGold();
    void lastDayOnTheShip();
    void prepareForBattle();

private:

    std::vector<Pirates> _ship;

};
#endif //PIRATES_SHIP_H
