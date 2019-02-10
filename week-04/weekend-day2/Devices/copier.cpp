#include "copier.h"

Copier::Copier(int sizeX, int sizeY, int speed) : Printer2d(sizeX, sizeY), Scanner(speed)
{
    _sizeX = sizeX;
    _sizeY = sizeY;
    _speed = speed;
}

std::string Copier::copy()
{
    return scan() + " and " + print();
}