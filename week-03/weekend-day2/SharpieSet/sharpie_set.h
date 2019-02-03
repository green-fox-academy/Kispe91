#include "sharpie.h"
#include <vector>

#ifndef SHARPIESET_SHARPIE_SET_H
#define SHARPIESET_SHARPIE_SET_H

class SharpieSet
{
public:

    SharpieSet(std::vector<Sharpie> &sharpie);

    void countUsable();
    void removeEmptyInk();
    void usableInk();

private:

    std::vector<Sharpie> _sharpieSet;
    int _sum = 0;

};

#endif //SHARPIESET_SHARPIE_SET_H
