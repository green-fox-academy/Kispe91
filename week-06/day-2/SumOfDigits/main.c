
#include <stdio.h>
#include <stdlib.h>

int compare_sum_of_digits(int first_number, int second_number);

int main()
{
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int first_user_number;
    int second_user_number;

    printf("Please give me a number\n");
    scanf("%d", &first_user_number);

    printf("Please give me another number\n");
    scanf("%d", &second_user_number);

    printf("%d", compare_sum_of_digits(first_user_number, second_user_number));

    return 0;
}

int compare_sum_of_digits(int first_number, int second_number)
{
    int sum_of_digits_of_first_number = 0;
    int sum_of_digits_of_second_number = 0;

    int first_temporary = first_number;
    int first_remainder = 0;

    while(first_temporary != 0) {
        first_remainder = first_temporary % 10;
        sum_of_digits_of_first_number += first_remainder;
        first_temporary /= 10;
    }

    int second_temporary = second_number;
    int second_remainder = 0;

    while(second_temporary != 0) {
        second_remainder = second_temporary % 10;
        sum_of_digits_of_second_number += second_remainder;
        second_temporary /= 10;
    }

    if(sum_of_digits_of_first_number == sum_of_digits_of_second_number) {
        return 1;
    } else {
        return 0;
    }
}
