#include "mammal.h"

Mammal::Mammal(std::string name, int age) : Animal(name, age)
{
}


std::string Mammal::breed()
{
    return "pushing miniature versions out.";
}

std::string Mammal::getName()
{
    return _name;
}
