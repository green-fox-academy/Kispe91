#include "mammal.h"

Mammal::Mammal(std::string name, int age)
{
    _name = name;
    _age = age;
}

std::string Mammal::breed()
{
    return "pushing miniature versions out.";
}

std::string Mammal::getName()
{
    return _name;
}
