#include "violin.h"

Violin::Violin()
{
    _name = "Violin";
    _numberOfStrings = 4;
}

Violin::Violin(int numberOfStrings)
{
    _name = "Violin";
    _numberOfStrings = numberOfStrings;
}

std::string Violin::sound()
{
    return "Screech";
}