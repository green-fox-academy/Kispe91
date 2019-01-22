#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float *floatPointer = &temperature;
    *floatPointer = 5.2;

    std::cout << *floatPointer << std::endl;

    return 0;
}