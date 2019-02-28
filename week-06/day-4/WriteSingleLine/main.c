#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{

    FILE *file_pointer;

    file_pointer = fopen("my-file.txt", "a");

    char user_name[50];

    printf("Please give me your name\n");
    gets(user_name);
    fputs(user_name, file_pointer);

    return 0;
}