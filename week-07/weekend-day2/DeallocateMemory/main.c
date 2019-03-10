#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{   
    int* pointer = NULL;
    int array_size = 10;

    pointer = (int *)calloc(array_size, sizeof(int));

    int counter = 0;
    for (int i = 0; i < 20; ++i) {
        if(i % 2 == 0) {
            pointer[counter] = i;
            counter ++;
        }
    }
    counter = 0;

    for (int j = 0; j < array_size; ++j) {
        printf("%d\n", pointer[j]);
    }

    pointer = realloc(pointer, 0);

    return 0;
}