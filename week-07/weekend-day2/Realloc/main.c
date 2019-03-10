#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int amount_of_numbers;
    printf("Please give me the amount of numbers which you would like to write\n");
    scanf("%d", &amount_of_numbers);

    int* user_array_pointer = NULL;
    user_array_pointer = (int *)calloc(amount_of_numbers, sizeof(int));

    for (int i = 0; i < amount_of_numbers; ++i) {
        printf("Please give me the %d number\n", (i + 1));
        scanf("%d", &user_array_pointer[i]);
    }

    unsigned int sum = 0;
    for (int j = 0; j < amount_of_numbers; ++j) {
        sum += user_array_pointer[j];
    }

    user_array_pointer = realloc(user_array_pointer, sum);

    for (int k = 1; k <= sum; ++k) {
        user_array_pointer[k] = k;
        printf("%d\n", user_array_pointer[k]);
    }

    free(user_array_pointer);

    return 0;
}