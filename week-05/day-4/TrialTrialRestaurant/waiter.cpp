#include "waiter.h"

Waiter::Waiter(std::string name, int experience) : Employee(name, experience)
{
}

void Waiter::work()
{
    _tips++;
    _experience++;
}


