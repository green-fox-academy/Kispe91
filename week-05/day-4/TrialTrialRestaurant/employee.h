#ifndef TRIALTRIALRESTAURANT_EMPLOYEE_H
#define TRIALTRIALRESTAURANT_EMPLOYEE_H

#include <string>

class Employee
{
public:

    Employee(std::string nameOfEmployee, int experience = 0);

    virtual void work() = 0;

protected:

    std::string _nameOfEmployee;
    int _experience;

};


#endif //TRIALTRIALRESTAURANT_EMPLOYEE_H
