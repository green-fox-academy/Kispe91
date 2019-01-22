#include <iostream>

int main()
{
    int arrayOfNumbers [5];
    int *valueOfArrayPointer = nullptr;
    for (int i = 0; i <sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]) ; ++i) {
        std::cout << "Please give me the " << i + 1 << ". number" << std::endl;
        std::cin >> arrayOfNumbers[i];
    }

    valueOfArrayPointer = arrayOfNumbers;

    for (int j = 0; j < sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]); ++j) {
        std::cout << arrayOfNumbers[j] << std::endl;
    }

    std::cout << std::endl;

    for (int k = 0; k < sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]); ++k) {
        std::cout << valueOfArrayPointer[k] << std::endl;
    }

    std::cout << std::endl;

    for (int l = 0; l < sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]); ++l) {
        std::cout << *(arrayOfNumbers + l) << std::endl;
    }

    std::cout << std::endl;

    for (int m = 0; m < sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]); ++m) {
        std::cout << *(valueOfArrayPointer + m) << std::endl;
    }
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    return 0;
}