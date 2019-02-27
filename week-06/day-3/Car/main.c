#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

typedef enum car_type {
    VOLVO,
    TOYOTA,
    LAND_ROVER,
    TESLA
} car_type_t;

typedef struct car {
    enum car_type type;
    double km;
    double gas;
} car_t;

const char* get_car_type(car_t car);

void car_stat(car_t car);

int main()
{
    car_t car1;
    car1.type = VOLVO;
    car1.km = 50000;
    car1.gas = 40;

    car_t car2;
    car2.type = TESLA;
    car2.km = 10000;
    car2.gas = 0;

    car_stat(car1);
    car_stat(car2);

    return 0;
}

const char* get_car_type(car_t car)
{
    switch (car.type)
    {
        case VOLVO: return "Volvo";
        case TOYOTA: return "Toyota";
        case LAND_ROVER: return "Land Rover";
        case TESLA: return "Tesla";
    }
}

void car_stat(car_t car)
{
    if(car.type != TESLA) {
        printf("Your %s performed %d km, and its tank volume is %d litre.\n", get_car_type(car), (int) car.km,
               (int) car.gas);
    } else {
        printf("Your %s performed %d km, and it has no gas tank.\n", get_car_type(car), (int) car.km);
    }
}