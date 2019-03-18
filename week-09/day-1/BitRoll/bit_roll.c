#include "bit_roll.h"

void give_back_the_text(char *file_path)
{
    FILE *file_pointer;
    file_pointer = fopen(file_path, "r");

    unsigned int character_counter = 0;
    while(!feof(file_pointer)) {
        if(getc(file_pointer) == ' ') {
            character_counter++;
        }
    }

    int character_array[character_counter];

    for (int i = 0; i < character_counter; ++i) {
        if(i == 0) {
            char *buffer = strtok(file_pointer->_ptr, " ");
            char *nothing;
            character_array[i] = strtol(buffer, &nothing, 2);
        } else {
            char *buffer = strtok(NULL, " ");
            char *nothing;
            character_array[i] = strtol(buffer, &nothing, 2);
        }
    }
    fclose(file_pointer);
    
    for (int j = 0; j < character_counter; ++j) {
        printf("%c" , character_array[j]);
    }

}

