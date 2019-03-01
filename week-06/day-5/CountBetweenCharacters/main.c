#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_between_characters(char *word, char *character);

int main()
{
    // Create a function which takes a string as a parameter and
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter

    char user_word[20];

    printf("Please write here a word\n");
    scanf("%s", user_word);

    char user_character[2];

    printf("Please write here a character\n");
    scanf("%s", user_character);

    printf("%d", count_between_characters(user_word, user_character));

    return 0;
}

int count_between_characters(char *word, char *character)
{
    int number_of_character_between_same_characters = 0;
    int first = 0;
    int second = 0;
    int sum = 0;

    for (int i = 0; i < strlen(word); ++i) {
        if(tolower(word[i]) == tolower(character[0])) {
            if(sum == 0) {
                first = i;
                sum++;
            } else if (sum == 1) {
                second = i;
                sum++;
            } else if (sum >= 2) {
                sum++;
            }
        }
    }

    if(sum == 0) {
        printf("The character you wrote is not consisted in the world\n");
        return 0;
    } else if (sum == 1) {
        printf("The character you wrote is consisted only once\n");
        return 0;
    } else if (sum == 2) {
        number_of_character_between_same_characters = second - first;
        return number_of_character_between_same_characters;
    } else {
        number_of_character_between_same_characters = second - first;
        printf("The character you wrote is consisted more than twice, the distance between the first and second character is: %d\n", number_of_character_between_same_characters);
        return number_of_character_between_same_characters;
    }
}