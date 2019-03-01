#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_sub(char *string1, char *string2);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the shorter string is a substring of the longer one and
    // returns 0 otherwise
    // If the two strings has the same length than the function should return -1

    char user_string1[100];

    printf("Please give me a string\n");
    scanf("%s", user_string1);

    char user_string2[100];

    printf("Please give me another string\n");
    scanf("%s", user_string2);

    printf("%d", is_sub(user_string1, user_string2));

    return 0;
}

int is_sub(char *string1, char *string2) {
    int sum = 0;

    char *longer_string;
    char *shorter_string;

    if(strlen(string1) > strlen(string2)) {
        longer_string = string1;
        shorter_string = string2;
    } else if (strlen(string1) < strlen(string2)){
        longer_string = string2;
        shorter_string = string1;
    } else {
        return -1;
    }

    for (int i = 0; i < strlen(longer_string); ++i) {
        if (tolower(shorter_string[0]) == tolower(longer_string[i])) {
            for (int j = 0; j < strlen(shorter_string); ++j) {
                if (tolower(shorter_string[j]) == tolower(longer_string[i + j])) {
                    sum++;
                } else {
                    sum = 0;
                    break;
                }
            }
        }
    }

    if (sum == strlen(shorter_string)) {
        return 1;
    } else {
        return 0;
    }
}