#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int are_the_same(char * first_compare_string, char * second_compare_string);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char first_string[20];
    char second_string[20];

    printf("Please give me a string\n");
    scanf("%s", first_string);

    printf("Please give me another string\n");
    scanf("%s", second_string);

    printf("%d", are_the_same(first_string, second_string));

    return 0;
}

int are_the_same(char * first_compare_string, char * second_compare_string)
{
    int string_index = 0;

    if(strlen(first_compare_string) != strlen(second_compare_string)) {
        return 0;
    } else {
        while(first_compare_string[string_index] != 0) {
            if(tolower(first_compare_string[string_index]) != tolower(second_compare_string[string_index])){
                return 0;
            } else {
                string_index++;
            }
        }
    }
    return 1;
}
