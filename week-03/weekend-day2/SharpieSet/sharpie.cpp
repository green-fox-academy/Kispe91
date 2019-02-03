#include "sharpie.h"
#include <iostream>

Sharpie::Sharpie(std::string color, float width, float inkAmount)
{
    _color = color;
    _width = width;
    _inkAmount = inkAmount;
}

void Sharpie::useInk(int decreaseAmount)
{
    _decreaseAmount = decreaseAmount;
    _inkAmount -= _decreaseAmount;
}

int Sharpie::getInkAmount()
{
    return _inkAmount;
}

std::string Sharpie::getColor()
{
    return _color;
}