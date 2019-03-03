#include <string.h>
#include <stdio.h>
#include "car.h"

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */

int main()
{
    car_t car1;
    strcpy(car1.name_of_manufacturer, "BMW");
    car1.manufactured_year = 1997;
    car1.price_in_euro = 3000;
    car1.transmission = MANUAL;

    car_t car2;
    strcpy(car2.name_of_manufacturer, "Nissan");
    car2.manufactured_year = 2016;
    car2.price_in_euro = 70000;
    car2.transmission = CVT;

    car_t car3;
    strcpy(car3.name_of_manufacturer, "Ferrari");
    car3.manufactured_year = 2000;
    car3.price_in_euro = 200000;
    car3.transmission = DUAL_CLUTCH;

    car_t car4;
    strcpy(car4.name_of_manufacturer, "Toyota");
    car4.manufactured_year = 2005;
    car4.price_in_euro = 10000;
    car4.transmission = SEMI_AUTOMATIC;

    car_t car5;
    strcpy(car5.name_of_manufacturer, "Dodge");
    car5.manufactured_year = 1980;
    car5.price_in_euro = 20000;
    car5.transmission = MANUAL;

    car_t car6;
    strcpy(car6.name_of_manufacturer, "Mercedes");
    car6.manufactured_year = 2015;
    car6.price_in_euro = 60000;
    car6.transmission = AUTOMATIC;

    car_t list_of_cars[6];
    list_of_cars[0] = car1;
    list_of_cars[1] = car2;
    list_of_cars[2] = car3;
    list_of_cars[3] = car4;
    list_of_cars[4] = car5;
    list_of_cars[5] = car6;

    printf("%d\n", get_older_cars_than(list_of_cars, 6, 2000));
    printf("%d\n", get_transmission_count(list_of_cars, 6, CVT));

    return 0;
}
