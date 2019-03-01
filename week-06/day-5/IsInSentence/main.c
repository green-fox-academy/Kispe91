#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_sub(char *sentence, char *word);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the shorter string is a substring of the longer one and
    // returns 0 otherwise
    // If the two strings has the same length than the function should return -1

    char user_sentence[100];

    puts("Please give me a sentence");
    gets(user_sentence);

    char user_word[100];

    puts("Please give me another string");
    gets(user_word);

    printf("%d", is_sub(user_sentence, user_word));

    return 0;
}

int is_sub(char *sentence, char *word) {

    int sum = 0;

    for (int i = 0; i < strlen(sentence); ++i) {
        if (tolower(word[0]) == tolower(sentence[i]) && (sentence[i - 1] == ' ' || i == 0) && sentence[i + strlen(word)] == ' ') {
            for (int j = 0; j < strlen(word); ++j) {
                if (tolower(word[j]) == tolower(sentence[i + j])) {
                    sum++;
                } else {
                    sum = 0;
                    break;
                }
            }
        }
    }

    if (sum == strlen(word)) {
        return 1;
    } else {
        return 0;
    }
}