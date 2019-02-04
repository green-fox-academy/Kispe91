#include <iostream>
#include "ship.h"

int main()
{
    Pirates pirates1("Black Jack", 30, 10, 0, 1);
    Pirates pirates2("Black Monkey", 40, 40, 1, 1);
    Pirates pirates3("White Drinker", 30, 10, 0, 0);
    Pirates pirates4("Silver Sword", 30, 10, 0, 1);
    Pirates pirates5("Red Ace", 30, 10, 0, 0);
    Pirates pirates6("White Wolf", 30, 10, 0, 1);
    Pirates pirates7("Black Bear", 30, 10, 0, 0);

    std::cout << pirates1.pirateIntroduction() << std::endl;
    std::cout << pirates3.pirateIntroduction() << std::endl;

    pirates1.work(1);
    pirates1.party();

    pirates1.getGoldAmount();
    pirates1.getHealthPoint();

    pirates2.work(1);
    pirates2.party();

    pirates2.getGoldAmount();
    pirates2.getHealthPoint();

    std::cout << pirates1.getLegType() << std::endl;

    std::vector<Pirates> ship1;

    ship1.push_back(pirates1);
    ship1.push_back(pirates2);
    ship1.push_back(pirates3);
    ship1.push_back(pirates4);
    ship1.push_back(pirates5);
    ship1.push_back(pirates6);
    ship1.push_back(pirates7);

    Ship blackHawk(ship1);

    std::cout << blackHawk.getPoorPirates() << std::endl;
    std::cout << std::to_string(blackHawk.getGold()) << std::endl;

    return 0;
}

