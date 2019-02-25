#include <stdio.h>

int main() {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stored number is lower
    //

    int storedNumber = 8;

    int guessedNumber;

    printf("Please guess the number!\n");
    scanf("%d", &guessedNumber);

    if(storedNumber > guessedNumber) {
        printf("The stored number is higher\n");
    } else if (storedNumber < guessedNumber) {
        printf("The stored number is lower\n");
    } else {
        printf("You found the number: %d\n", guessedNumber);
    }

    return 0;
}