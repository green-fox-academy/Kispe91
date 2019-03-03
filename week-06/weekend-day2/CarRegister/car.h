#ifndef CARREGISTER_CAR_H
#define CARREGISTER_CAR_H

typedef enum transmission_type {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH
} transmission_type_t;

char *get_name_transmission(transmission_type_t transmission)
{
    switch(transmission)
    {
        case MANUAL : return "manual";
        case AUTOMATIC : return "automatic";
        case CVT : return "cvt";
        case SEMI_AUTOMATIC : return "semi-automatic";
        case DUAL_CLUTCH : return "dual-clutch";
    }
}

typedef struct car {
    char name_of_manufacturer[30];
    float price_in_euro;
    int manufactured_year;
    enum transmission_type transmission;

} car_t;

int get_older_cars_than(struct car* array, int array_length, int age)
{
    int sum_of_older_than = 0;
    for (int i = 0; i < array_length; ++i) {
        if(array[i].manufactured_year < age) {
            sum_of_older_than++;
        }
    }

    return sum_of_older_than;
}

int get_transmission_count(struct car* array, int array_length, enum transmission_type transmission)
{
    int sum_of_transission = 0;
    for (int i = 0; i <array_length ; ++i) {
        if(array[i].transmission == transmission) {
            sum_of_transission++;
        }
    }

    return sum_of_transission;
}

#endif //CARREGISTER_CAR_H
