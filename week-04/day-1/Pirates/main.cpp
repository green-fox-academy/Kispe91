#include <iostream>
#include "ship.h"

int main()
{
    Pirates pirates1("Black Jack", 30, 30, 0, 1);
    Pirates pirates2("Black Monkey", 40, 40, 1, 1);
    Pirates pirates3("White Drinker", 30, 30, 0, 0);

    std::cout << pirates1.pirateIntroduction() << std::endl;
    std::cout << pirates3.pirateIntroduction() << std::endl;

    pirates1.work();
    pirates1.party();

    pirates1.getGoldAmount();
    pirates1.getHealthPoint();

    pirates2.work();
    pirates2.party();

    pirates2.getGoldAmount();
    pirates2.getHealthPoint();

    return 0;
}

