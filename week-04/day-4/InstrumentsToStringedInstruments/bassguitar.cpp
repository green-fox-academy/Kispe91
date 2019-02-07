#include "bassguitar.h"

BassGuitar::BassGuitar()
{
    _name = "Bass Guitar";
    _numberOfStrings = 4;
}

BassGuitar::BassGuitar(int numberOfStrings)
{
    _name = "Bass Guitar";
    _numberOfStrings = numberOfStrings;
}

std::string BassGuitar::sound()
{
    return "Duum-duum-duum";
}