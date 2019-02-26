
#include <stdio.h>
#include <stdlib.h>

int old_enough(int age);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int user_age;

    printf("Please give me your age\n");
    scanf("%d", &user_age);

    if(old_enough(user_age)) {
        printf("You can buy alcohol in Hungary\n");
    } else {
        printf("Poor child, you are not enough old to buy alcohol\n");
    }

    return 0;
}

int old_enough(int age)
{
    if(age >= 18) {
        return 1;
    } else {
        return 0;
    }
}