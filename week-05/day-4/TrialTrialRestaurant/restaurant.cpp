#include "restaurant.h"

Restaurant::Restaurant(std::string nameOfRestaurant, int foundedYear, std::vector<Employee *> employees)
{
    _nameOfRestaurant = nameOfRestaurant;
    _foundedYear = foundedYear;
    _employees = employees;
}

void Restaurant::guestsArrived() {
    for (int i = 0; i < _employees.size(); ++i) {
        _employees[i]->work();
    }

}

void Restaurant::hire(Employee *employee)
{
    _employees.push_back(employee);
}
