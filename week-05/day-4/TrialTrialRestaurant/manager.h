#ifndef TRIALTRIALRESTAURANT_MANAGER_H
#define TRIALTRIALRESTAURANT_MANAGER_H

#include "employee.h"

class Manager : public Employee
{

public:

    Manager(std::string name, int experience);

    void work() override;
    void havaAMeeting();

private:

    int _moodLevel = 400;

};


#endif //TRIALTRIALRESTAURANT_MANAGER_H
