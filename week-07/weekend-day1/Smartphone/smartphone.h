#ifndef SMARTPHONE_SMARTPHONE_H
#define SMARTPHONE_SMARTPHONE_H

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

#define CURRENT_YEAR 2019;

typedef enum {
    SMALL,
    MEDIUM,
    BIG,
} screen_size_t;

typedef struct smartphone {
    char *name;
    unsigned int released_year;
    screen_size_t screen_size;
} smartphone_t;

unsigned int get_number_of_lines(char *path_name);
smartphone_t *get_smartphones(char *path_name, unsigned int number_of_lines);
char *get_oldest_smartphone(smartphone_t array[], int array_size);
int get_screen_size_count(smartphone_t array[], int array_size, screen_size_t screen_size);

#endif //SMARTPHONE_SMARTPHONE_H
