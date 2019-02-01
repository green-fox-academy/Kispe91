#include "station.h"
#include <iostream>

Station::Station(int stationGasAmount)
{
    _stationGasAmount = stationGasAmount;
};

void Station::fill(Car &car){
    while (!car.isFull() && !car.isElectric()) {
        car.fill();
        std::cout << "Filling car!" << std::endl;
        _stationGasAmount--;
    }
};