#include "chef.h"

Chef::Chef(std::string name, int experience) :  Employee(name, experience)
{

}

void Chef::work()
{
    _experience++;
}

void Chef::cook(std::string foodName)
{
    _cookedFoods[foodName]++;
}
