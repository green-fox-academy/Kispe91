#include "reptile.h"

Reptile::Reptile(std::string name, int age) : Animal(name, age)
{
}

std::string Reptile::breed()
{
    return "laying eggs.";
}

std::string Reptile::getName()
{
    return _name;
}