#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int is_prime(int test_number);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int user_number;
    printf("Please give me an integer number\n");
    scanf("%d", &user_number);

    printf("%d", is_prime(user_number));

    return 0;
}

int is_prime(int test_number)
{
    int square_root_of_test_number = (int) sqrt(test_number);

    for (int i = 2; i <= square_root_of_test_number; ++i) {
        if(test_number % i == 0) {
            return 0;
        }
    }
    return 1;
}