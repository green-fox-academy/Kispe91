
#include <stdio.h>
#include <stdlib.h>

int is_equal(int first_number, int second_number);

int main()
{
    // Create a program which asks for two integers and stores them separately
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    int first_user_number;
    int second_user_number;

    printf("Please give me a number\n");
    scanf("%d", &first_user_number);

    printf("Please give me another number\n");
    scanf("%d", &second_user_number);

    printf("%d", is_equal(first_user_number, second_user_number));
    return 0;
}

int is_equal(int first_number, int second_number)
{
    if(first_number == second_number) {
        return 1;
    } else {
        return 0;
    }
}