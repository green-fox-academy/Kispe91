#include <stdio.h>
#include <stdlib.h>

int odd_or_even(int number);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int user_number;

    printf("Please give me a number\n");
    scanf("%d", &user_number);

    if(odd_or_even(user_number)) {
        printf("%d is an odd number\n", user_number);
    } else {
        printf("%d is an even number\n", user_number);
    }

    return 0;
}

int odd_or_even(int number)
{
    if(number % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}