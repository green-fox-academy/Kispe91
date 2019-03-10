#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char *concatenate_two_string(char *first_string, char *second_string);

int main()
{

    char *string_one = "What is going on guys? ";
    char *string_two = "We are going to fuck this moron C!";

    char *merged_string = concatenate_two_string(string_one, string_two);
    printf("%s\n", merged_string);

    free(merged_string);

    char *string_one_short = "Great ";
    char *string_two_short = "job";

    char *merged_string_short = concatenate_two_string(string_one_short, string_two_short);
    printf("%s\n", merged_string_short);

    free(merged_string_short);

    return 0;
}

char *concatenate_two_string(char *first_string, char *second_string)
{
    unsigned int first_string_size = (unsigned int) strlen(first_string);
    unsigned int second_string_size = (unsigned int) strlen(second_string);

    char *merge_string_pointer = NULL;
    unsigned int merge_string_size = first_string_size + second_string_size;
    merge_string_pointer = (char *)calloc(merge_string_size, sizeof(char));


    for (int i = 0; i < first_string_size; ++i) {
        merge_string_pointer[i] = first_string[i];
    }

    for (int j = first_string_size; j < merge_string_size; ++j) {
        merge_string_pointer[j] = second_string[j - first_string_size];
    }

    return merge_string_pointer;
}