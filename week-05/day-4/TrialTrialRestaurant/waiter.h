#ifndef TRIALTRIALRESTAURANT_WAITER_H
#define TRIALTRIALRESTAURANT_WAITER_H

#include "employee.h"

class Waiter : public Employee
{

public:

    Waiter(std::string name, int experience);

    void work() override;

private:

    int _tips = 0;

};

#endif //TRIALTRIALRESTAURANT_WAITER_H
