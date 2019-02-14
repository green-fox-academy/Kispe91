#ifndef TRIALTRIALRESTAURANT_RESTAURANT_H
#define TRIALTRIALRESTAURANT_RESTAURANT_H

#include <string>
#include <vector>
#include "employee.h"

class Restaurant{

public:

    Restaurant(std::string nameOfRestaurant, int foundedYear, std::vector<Employee *> employees);

    void guestsArrived();
    void hire(Employee *employee);

protected:

    std::string _nameOfRestaurant;
    int _foundedYear;
    std::vector<Employee *> _employees;
};

#endif //TRIALTRIALRESTAURANT_RESTAURANT_H
