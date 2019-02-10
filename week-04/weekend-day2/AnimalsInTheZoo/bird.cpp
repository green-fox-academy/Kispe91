#include "bird.h"

Bird::Bird(std::string name, int age) : Animal(name, age)
{
}

std::string Bird::breed()
{
    return "laying eggs.";
}

std::string Bird::getName()
{
    return _name;
}
