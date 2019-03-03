#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

void write_into_file(char *path, char *word, int number);

int main()
{

    char user_path[127];

    printf("Please give me the path with file name where you would like to create the file (../sample.txt)\n");
    scanf("%s", user_path);

    char user_word[20];

    printf("Please write a word which you would like to write a file\n");
    scanf("%s", user_word);

    int user_number_of_lines;

    printf("Please give me how many times would you like to write this word to the file (integer)\n");
    scanf("%d", &user_number_of_lines);

    write_into_file(user_path, user_word, user_number_of_lines);

    return 0;
}

void write_into_file(char *path, char *word, int number_of_lines)
{

    FILE *file_pointer;
    file_pointer = fopen(path, "w");

    for (int i = 0; i < number_of_lines; ++i) {
        fprintf(file_pointer, "%s\n", word);
    }

    fclose(file_pointer);

}