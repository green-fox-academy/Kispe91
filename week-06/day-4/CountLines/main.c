#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int file_line_counter(char *file_name);

int main ()
{

    char user_file[30];

    printf("Please give me the file name with extension which you would like to count the number of lines\n");
    scanf("%s", user_file);

    printf("%d", file_line_counter(user_file));

    return 0;
}

int file_line_counter(char *file_name)
{
    FILE *file_pointer;

    file_pointer = fopen(file_name, "r");

    if(file_pointer == NULL) {
        return 0;
    } else {
        int sum = 0;
        char temporary[100];

        while(!feof(file_pointer)){
            sum++;
            fgets(temporary, 100, file_pointer);
        }
        return sum;
    }
}