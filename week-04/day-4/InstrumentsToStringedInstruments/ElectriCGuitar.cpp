#include "electricguitar.h"

ElectricGuitar::ElectricGuitar()
{
    _name = "Electric guitar";
    _numberOfStrings = 6;
};
ElectricGuitar::ElectricGuitar(int numberOfStrings)
{
    _name = "Electric guitar";
    _numberOfStrings = numberOfStrings;
};
std::string ElectricGuitar::sound()
{
    return "Twang";
}