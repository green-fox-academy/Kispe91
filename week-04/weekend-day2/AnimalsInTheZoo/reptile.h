#ifndef ANIMALSINTHEZOO_REPTILE_H
#define ANIMALSINTHEZOO_REPTILE_H

#include "animal.h"

class Reptile : public Animal
{

public:

    Reptile(std::string name, int age);

    std::string breed();
    std::string getName();

};


#endif //ANIMALSINTHEZOO_REPTILE_H
