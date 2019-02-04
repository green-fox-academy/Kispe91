#include <string>
#include <iostream>

#ifndef PIRATES_PIRATES_H
#define PIRATES_PIRATES_H

class Pirates {

public:

    Pirates(std::string nameOfPirates, int healthPoint, int gold, bool isCaptain, bool isWoodenLeg);

    void work();
    void party();
    std::string pirateIntroduction();
    void getHealthPoint();
    void getGoldAmount();

private:

    std::string _nameOfPirates;
    int _healthPoint = 10;
    int _gold = 10;
    bool _isCaptain = 0;
    bool _isWoodenleg = 0;

};

#endif //PIRATES_PIRATES_H
