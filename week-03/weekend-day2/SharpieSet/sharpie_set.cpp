#include "sharpie_set.h"
#include <iostream>
#include <vector>


SharpieSet::SharpieSet(std::vector<Sharpie> &sharpie)
{
    _sharpieSet = sharpie;
    }

void SharpieSet::countUsable()
{
    for (int i = 0; i <_sharpieSet.size(); ++i) {
        if(_sharpieSet[i].getInkAmount() > 0) {
            _sum++;
        }
    }
    std::cout << _sum << std::endl;
}

void SharpieSet::removeEmptyInk()
{
    for (int i = _sharpieSet.size() - 1; i >= 0; --i) {
        if(_sharpieSet[i].getInkAmount() <= 0)
            _sharpieSet.erase(_sharpieSet.begin() + i);
    }
}

void SharpieSet::usableInk()
{
    for (int i = 0; i < _sharpieSet.size(); ++i) {
       std::cout << _sharpieSet[i].getColor() << std::endl;
    }
}