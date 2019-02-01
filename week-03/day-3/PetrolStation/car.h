#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H

class Car {

public:

    Car(int carGasAmount, int capacity);

    bool isElectric();

    bool isFull ();

    void fill();


private:

int _carGasAmount;
int _capacity;

};

#endif //PETROLSTATION_CAR_H
