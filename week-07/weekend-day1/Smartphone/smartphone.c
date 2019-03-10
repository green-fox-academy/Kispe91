#include "smartphone.h"

int get_number_of_lines(char *path_name)
{

    FILE *file_pointer;
    file_pointer = fopen(path_name, "r");

    int line_counter = 0;

    while(!feof(file_pointer)) {
        if(fgetc(file_pointer) == '\n') {
            line_counter++;
        }
    }
    char character = file_pointer->_ptr[(int) strlen(file_pointer->_ptr) - 1];
    if(character != '\n') {
        line_counter++;
    }
    fclose(file_pointer);

    return line_counter;
}

smartphone_t *get_smartphones(char *path_name, int number_of_lines)
{
    FILE *file_pointer;
    file_pointer = fopen(path_name, "r");

    int size_of_lines[number_of_lines];
    int line_index = 0;
    int line_size_counter = 0;

    while(!feof(file_pointer)) {
        fgetc(file_pointer);
    }

    for (int i = 0; i < (int) strlen(file_pointer->_ptr); ++i) {
        if(file_pointer->_ptr[i] != '\n') {
            line_size_counter++;
        } else {
            line_size_counter++; //+1 for '\n'
            size_of_lines[line_index] = line_size_counter + 1; //+1 for '\0'
            line_index++;
            line_size_counter = 0;
        }
    }
    fclose(file_pointer);

    file_pointer = fopen(path_name, "r");

    smartphone_t *smartphones = (smartphone_t *)calloc(number_of_lines,sizeof(smartphone_t));

    line_index = 0;
    while(!feof(file_pointer)) {
        char buffer[size_of_lines[line_index]];
        fgets(buffer, size_of_lines[line_index], file_pointer);

        char *name = strtok(buffer, " ");
        int name_size = (int) strlen(name) + 1; //+1 for '\0'

        smartphones[line_index].name = (char *)realloc(smartphones[line_index].name, name_size * sizeof(char));
        strcpy(smartphones[line_index].name, name);

        char *releasedyear = strtok(NULL, " ");
        smartphones[line_index].released_year = atoi(releasedyear);

        char *screen_size_in_character = strtok(NULL, " ");
        unsigned int screen_size_in_unsigned_integer = atoi(screen_size_in_character);

        if(screen_size_in_unsigned_integer >= 15) {
            smartphones[line_index].screen_size = BIG;
        } else if(screen_size_in_unsigned_integer < 15 && screen_size_in_unsigned_integer >= 12) {
            smartphones[line_index].screen_size = MEDIUM;
        } else {
            smartphones[line_index].screen_size = SMALL;
        }
            line_index++;
        }

    fclose(file_pointer);

    return smartphones;
}

char *get_oldest_smartphone(smartphone_t array[], int array_size)
{
    int index = 0;
    int oldest_year = CURRENT_YEAR;

    for (int i = 0; i < array_size; ++i) {
        if(array[i].released_year < oldest_year) {
            index = i;
            oldest_year = array[i].released_year;
        }
    }

    return  array[index].name;
}

int get_screen_size_count(smartphone_t array[], int array_size, screen_size_t screen_size)
{
    int screen_size_counter = 0;

    for (int i = 0; i < array_size; ++i) {
        if(array[i].screen_size == screen_size) {
            screen_size_counter++;
        }
    }

    return screen_size_counter;
}
