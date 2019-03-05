#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int *even_number_array;
    int array_size = 10;

    even_number_array = (int *)malloc(array_size * sizeof(int));

    int counter = 0;

    for (int i = 0; i < 20; i += 2) {
        even_number_array[counter] = i;
        counter++;
    }

    counter = 0;

    int *odd_number_array;

    odd_number_array = (int *)malloc(array_size * sizeof(int));

    for (int i = 1; i < 20; i += 2) {
        odd_number_array[counter] = i;
        counter++;
    }

    int reallocated_array_size = 20;

    realloc(odd_number_array, reallocated_array_size * sizeof(int));

    for (int j = 0; j < array_size; ++j) {
        odd_number_array[array_size + j] = even_number_array[j];
    }

    for (int k = 0; k < reallocated_array_size; ++k) {
        printf("%d\n", odd_number_array[k]);
    }

    free(even_number_array);
    free(odd_number_array);

    return 0;
}