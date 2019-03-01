#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *append_a(char *word);

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char user_word[20];

    printf("Please write here a word\n");
    scanf("%s", user_word);

    printf("%s", append_a(user_word));
    return 0;
}

char *append_a(char *word)
{
    strcat(word, "a");
    return word;
}