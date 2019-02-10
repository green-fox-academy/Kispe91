#include "reptile.h"

Reptile::Reptile(std::string name, int age)
{
    _name = name;
    _age = age;
}

std::string Reptile::breed()
{
    return "laying eggs.";
}

std::string Reptile::getName()
{
    return _name;
}