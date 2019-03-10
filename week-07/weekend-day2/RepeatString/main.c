#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char *give_back_a_string_nth(char *string, unsigned int nth);

int main()
{
    char *test_string = "CTrash";
    unsigned int repeat_time = 10;
    char *multiplied_string = give_back_a_string_nth(test_string, repeat_time);
    printf("%s\n", multiplied_string);

    free(multiplied_string);
    return 0;
}

char *give_back_a_string_nth(char *string, unsigned int nth)
{

    unsigned int string_size = (unsigned int) strlen(string);
    char *string_pointer = NULL;
    string_pointer = (char *)calloc(string_size * nth, sizeof(char));
    for (int i = 0; i < string_size * nth; ++i) {
            string_pointer[i] = string[i % string_size];
    }

    return string_pointer;
}