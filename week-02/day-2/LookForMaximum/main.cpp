#include <iostream>

int main()
{
    int sizeOfArray;
    std::cout << "Please give me how many integer numbers would you like to give me" << std::endl;
    std::cin >> sizeOfArray;
    int array[sizeOfArray];
    for (int i = 0; i < sizeOfArray; ++i) {
        std::cout << "Please give me the " << i + 1 << ". number" << std::endl;
        std::cin >> array[i];
    }

    int currentMaximumValue = array[0];
    int arrayIndex = 0;
    for (int j = 0; j < sizeOfArray; ++j) {
        if (array[j] > currentMaximumValue) {
            currentMaximumValue = array[j];
            arrayIndex = j;
        }
    }

    std::cout << "The biggest element of the array is: " << currentMaximumValue << " and its address is: " << array + arrayIndex << std::endl;
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    return 0;
}