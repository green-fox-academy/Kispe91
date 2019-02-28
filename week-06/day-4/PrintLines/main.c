#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main ()
{
    FILE *file_pointer;

    file_pointer = fopen("my-file.txt", "w");

    char number_of_lines[5];
    int number_of_lines_in_integer;

    printf("Please give me how many lines would you like to write to the file\n");
    gets(number_of_lines);
    number_of_lines_in_integer = strtol(number_of_lines, NULL, 10);

    char user_lines[100];

    for (int i = 0; i < number_of_lines_in_integer; ++i) {
        printf("Please write the %d line to file\n", i+1);
        gets(user_lines);
        fprintf(file_pointer, "%s\n", user_lines);
    }

    fclose(file_pointer);

    file_pointer = fopen("my-file.txt", "r");

    for (int i = 0; i < number_of_lines_in_integer; ++i) {
        fgets(user_lines, 100, file_pointer);
        printf("%s",user_lines);
    }

    fclose(file_pointer);

    return 0;
}