#include <iostream>

int main()
{
    int randomNumbers [5];

    for (int i = 0; i <sizeof(randomNumbers)/sizeof(randomNumbers[0]); ++i) {
        std::cout << "Please give me the " << i + 1 << ". number" << std::endl;
        std::cin >> randomNumbers[i];
     }
    int *arrayElementsPointer = randomNumbers;

    for (int j = 0; j < sizeof(randomNumbers)/sizeof(randomNumbers[0]); ++j) {
        std::cout << arrayElementsPointer + j << std::endl;
    }

    for (int k = 0; k < sizeof(randomNumbers)/sizeof(randomNumbers[0]); ++k) {
        std::cout << randomNumbers + k << std::endl;
    }

    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    return 0;
}