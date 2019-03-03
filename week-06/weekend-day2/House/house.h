#ifndef HOUSE_HOUSE_H
#define HOUSE_HOUSE_H

typedef struct {
  char address[100];
  float price_in_euro;
  int number_of_rooms;
  float area_in_square_meters;
} house_t;

int is_it_worth_to_buy(house_t *house)
{
    float price_per_square_meters = house->price_in_euro / house->area_in_square_meters;
    if(price_per_square_meters <= 400) {
        return 1;
    } else {
        return 0;
    }
}

int count_of_worth_to_buy(house_t list_of_houses[], int length)
{
    int sum = 0;

    for (int i = 0; i < length; ++i) {
        if(is_it_worth_to_buy(&list_of_houses[i]) == 1) {
            sum++;
        }
    }

    return sum;
}

#endif //HOUSE_HOUSE_H
