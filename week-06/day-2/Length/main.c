#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int name_length_with_string_h(char * name);

int name_length_without_string_h(char * name);

int main()
{
    // Create a program which asks for the name of the user and stores it
    // Create a function which takes a string as a parameter and returns the length of it
    // Solve this exercise with and without using string.h functions

    char user_name [100];

    printf("Please give me your full name\n");
    gets(user_name);

    printf("%d\n", name_length_with_string_h(user_name));
    printf("%d\n", name_length_without_string_h(user_name));

    return 0;
}

int name_length_with_string_h(char * name)
{
    return strlen(name);
}

int name_length_without_string_h(char * name)
{
    int index_of_string = 0;

    while(name[index_of_string] != '\0') {
        index_of_string++;
    }
    return index_of_string;
}