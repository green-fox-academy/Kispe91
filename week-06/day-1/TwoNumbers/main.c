#include<stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result

    int firstNumber = 13;
    int secondNumber = 22;

    int adding = firstNumber + secondNumber;
    int substraction = secondNumber - firstNumber;
    int multiplication = firstNumber * secondNumber;
    float division = (float)secondNumber / (float)firstNumber;
    int reminder = secondNumber % firstNumber;

    printf("The result of 13 added to 22: %d\n", adding);
    printf("The result of 13 substracted from 22: %d\n", substraction);
    printf("The result of 22 multiplied by 13: %d\n", multiplication);
    printf("The result of 22 divided by 13 (as a decimal fraction): %f\n", division);
    printf("The reminder of 22 divided by 13: %d\n", reminder);





    return 0;
}