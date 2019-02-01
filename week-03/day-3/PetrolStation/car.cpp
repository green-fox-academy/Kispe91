#include "car.h"
#include <iostream>

Car::Car(int carGasAmount, int capacity)
{
    _carGasAmount = carGasAmount;
    _capacity = capacity;
}

bool Car::isElectric()
{
    return (_capacity == 0);
};

bool Car::isFull()
{
    return (_carGasAmount == _capacity);
};

void Car::fill()
{
    _carGasAmount++;
    std::cout << _carGasAmount << " " << _capacity << std::endl;

};
