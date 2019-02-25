#include<stdio.h>

int main()
{
    // Greet 3 of your classmates with this program, in three separate lines
    // like:
    //
    // Hello, Esther!
    // Hello, Mary!
    // Hello, Joe!

    char * classmate1 = "Esther";
    char * classmate2 = "Mary";
    char * classmate3 = "Joe";

    printf("Hello, %s!\n", classmate1);
    printf("Hello, %s!\n", classmate2);
    printf("Hello, %s!\n", classmate3);

    return 0;
}