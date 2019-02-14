#ifndef TRIALTRIALRESTAURANT_CHEF_H
#define TRIALTRIALRESTAURANT_CHEF_H

#include <map>
#include "employee.h"

class Chef : public Employee
{

public:

    Chef(std::string name, int experience);

    void work() override;
    void cook (std::string foodName);


private:

    std::map<std::string, int> _cookedFoods;

};

#endif //TRIALTRIALRESTAURANT_CHEF_H
