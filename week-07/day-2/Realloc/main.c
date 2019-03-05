#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int user_size_of_array;

    printf("Please give how many number would you like to write\n");
    scanf("%d", &user_size_of_array);

    int* user_numbers_array;

    user_numbers_array = (int *)malloc(user_size_of_array * sizeof(int));

    for (int i = 0; i < user_size_of_array; ++i) {
        printf("Please give me the %d number\n", i + 1);
        scanf("%d", &user_numbers_array[i]);
    }

    int sum_of_user_number = 0;

    for (int j = 0; j < user_size_of_array; ++j) {
        sum_of_user_number += user_numbers_array[j];
    }

    realloc(user_numbers_array, sum_of_user_number * sizeof(int));

    for (int k = 1; k < sum_of_user_number + 1; ++k) {
        user_numbers_array[k] = k;
        printf("%d\n", user_numbers_array[k]);
    }

    free(user_numbers_array);

    return 0;
}