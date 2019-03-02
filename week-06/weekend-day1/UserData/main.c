#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main ()
{
    char *user_data;
    puts("Please give me you full name and age");
    gets(user_data);
    int sum = 0;
    char first_name[20];
    char last_name[20];
    int age = 0;

    for (char *p = strtok(user_data, " "); p !=NULL; p = strtok(NULL, " ")) {
        if(sum == 0) {
            strcpy(first_name,p);
            sum++;
        } else if (sum == 1) {
            strcpy(last_name, p);
            sum++;
        } else if (sum == 2) {
            age = atoi(p);
        }
    }

    printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);
    return 0;
}