#ifndef ANIMALSINTHEZOO_BIRD_H
#define ANIMALSINTHEZOO_BIRD_H

#include "animal.h"

class Bird : public Animal
{

public:

    Bird(std::string name, int age);

    std::string breed();
    std::string getName();
};


#endif //ANIMALSINTHEZOO_BIRD_H
