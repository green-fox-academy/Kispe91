#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_sub(char *sentence, char *word);

int main()
{
    // Create a function which takes two strings as parameters
    // One string is actually a sentence and the other one is a word
    // It should return the index of the word in the sentence and 0 otherwise
    // Try to erase small and uppercase sensitivity.

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
    int index_word = 1;

    for (int i = 0; i < strlen(sentence); ++i) {
        if (sentence[i] == ' ' && sum < strlen(word)) {
            index_word++;
        }

        if (tolower(word[0]) == tolower(sentence[i]) && (sentence[i - 1] == ' ' || i == 0) &&
        (sentence[i + strlen(word)] == ' ' || sentence[i + strlen(word)] == '\0')) {
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
        return index_word;
    } else {
        return 0;
    }
}
