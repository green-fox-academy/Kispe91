#include "manager.h"

Manager::Manager(std::string name, int experience) : Employee(name, experience)
{
}

void Manager::work()
{
    _experience++;
    havaAMeeting();
}

void Manager::havaAMeeting()
{
    _moodLevel -= _experience;
}

