#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int strings_distance(char *sentence);

int main ()
{
    char str[] = "This is a sample string";

    printf("%d", strings_distance(str));

    return 0;
}

int strings_distance(char *sentence)
{

    int first = 0;
    int last = 0;
    int distance = 0;

    for (int i = 0; i < strlen(sentence); ++i) {
        if(sentence[i] == 's' && first == 0) {
            first = i;
        } else if(sentence[i] == 's') {
            last = i;
        }

    }

    distance = last - first;

    return distance;

}