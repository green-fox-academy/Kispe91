#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void string_splitter(char * sentence);

int main()
{
    char string[256];
    
    printf("Type in a sentence:\n\n");
    gets(string);

    string_splitter(string);
    
    return(0);
}

void string_splitter(char * sentence)
{
    for (char *p = strtok(sentence, " "); p != NULL; p = strtok(NULL, " ")) {
        puts(p);
    }
}