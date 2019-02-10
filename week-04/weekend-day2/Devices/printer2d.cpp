#include "printer2d.h"

Printer2d::Printer2d(int sizeX, int sizeY)
{
    _sizeX = sizeX;
    _sizeY = sizeY;
}

std::string Printer2d::getSize()
{
   return std::to_string(_sizeX) + " X " + std::to_string(_sizeY);
}