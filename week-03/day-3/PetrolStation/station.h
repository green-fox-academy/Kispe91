#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include "car.h"

class Station {

public:

    Station(int stationGasAmount);

    void fill(Car &car);

private:

    int _stationGasAmount;

};

#endif //PETROLSTATION_STATION_H
