#include <stdio.h>
#include <mem.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct {
    char name[20];
    float price;
    float weight;
} Sandwich;

float order_price(Sandwich sandwich, int number_of_sandwich);

int main()
{
    Sandwich sandwich1;

    strcpy(sandwich1.name, "spicy_chicken_of_mexicans");
    sandwich1.price = 2.54;
    sandwich1.weight = 0.3;

    printf("Your order price is: %.2f $", order_price(sandwich1, 4));

    return 0;
}

float order_price(Sandwich sandwich, int number_of_sandwich)
{
    float price;

    price = sandwich.price * number_of_sandwich;
    return price;
}