#include <iostream>
#include "station.h"
#include <vector>

int main() {

    Station OMW(300);

    Car Tesla_ModelX(0, 0);
    Car Toyota_Prius(10, 30);
    Car Audi_TT_RS(20, 60);
    Car Nissan_GTR(30, 80);
    Car Porsche_911(25, 60);
    Car Dodge_Viper_SRT(10, 100);

    std::vector <Car> carsVector;

    carsVector.push_back(Tesla_ModelX);
    carsVector.push_back(Toyota_Prius);
    carsVector.push_back(Audi_TT_RS);
    carsVector.push_back(Nissan_GTR);
    carsVector.push_back(Porsche_911);
    carsVector.push_back(Dodge_Viper_SRT);

    for (int i = 0; i <carsVector.size() ; ++i) {
        OMW.fill(carsVector[i]);
    }



    return 0;
}