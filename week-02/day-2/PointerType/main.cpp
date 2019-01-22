#include <iostream>

int main ()
{


    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *intNumPointer = &a;
    double *doubleNumPointer = &b;
    std::string *stringPointer = &name;

    std::cout << intNumPointer << std::endl;
    std::cout << doubleNumPointer << std::endl;
    std::cout << stringPointer << std::endl;
    return 0;
}