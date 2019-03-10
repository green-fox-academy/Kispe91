#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{

    int *even_numbers_array = NULL;
    int *odd_numbers_array = NULL;
    int array_size = 10;

    even_numbers_array = (int *)calloc(array_size, sizeof(int));
    odd_numbers_array = (int *)calloc(array_size, sizeof(int));

    int index_counter = 0;
    for (int i = 0; i < array_size * 2; ++i) {
        if(i % 2 == 0) {
            even_numbers_array[index_counter] = i;
        } else {
            odd_numbers_array[index_counter] = i;
            index_counter++;
        }
    }
    index_counter = 0;

    int *merge_array = NULL;
    merge_array = (int *)calloc(array_size * 2, sizeof(int));

    for (int j = 0; j < array_size * 2; ++j) {
        if(j % 2 == 0) {
            merge_array[j] = even_numbers_array[index_counter];
        } else {
            merge_array[j] = odd_numbers_array[index_counter];
            index_counter++;
        }

    }
    free(even_numbers_array);
    free(odd_numbers_array);
    index_counter = 0;

    for (int k = array_size * 2 - 1; k >= 0; --k) {
        printf("%d\n", merge_array[k]);
    }
    free(merge_array);

    return 0;
}