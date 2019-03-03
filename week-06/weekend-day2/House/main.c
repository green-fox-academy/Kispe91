#include <stdio.h>
#include <mem.h>
#include "house.h"

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

int main()
{

    house_t house1;
    strcpy(house1.address, "Szaz holdas pagony, Micimacko utca 7");
    house1.number_of_rooms = 5;
    house1.area_in_square_meters = 80;
    house1.price_in_euro = 30000;

    house_t house2;
    strcpy(house2.address, "Mordor, Remenytelenseg korut 13");
    house2.number_of_rooms = 8;
    house2.area_in_square_meters = 140;
    house2.price_in_euro = 80000;

    house_t house3;
    strcpy(house3.address, "Olympos, Zeusz setany 5");
    house3.number_of_rooms = 10;
    house3.area_in_square_meters = 300;
    house3.price_in_euro = 120000;

    house_t houses[3];
    houses[0] = house1;
    houses[1] = house2;
    houses[2] = house3;

    printf("%d", count_of_worth_to_buy(houses, 3));

    return 0;
}

