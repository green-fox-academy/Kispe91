#ifndef ANIMALSINTHEZOO_MAMMAL_H
#define ANIMALSINTHEZOO_MAMMAL_H

#include "animal.h"

class Mammal : public Animal
{

public:

    Mammal(std::string name, int age);

    std::string breed();
    std::string getName();

};


#endif //ANIMALSINTHEZOO_MAMMAL_H
