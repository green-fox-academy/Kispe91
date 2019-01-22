#include <iostream>

int index (const int array[], int arraySize, int number){

    for (int j = 0; j < arraySize; ++j) {
        if (array[j] == number){
            return j;
        }
    }
    return 0;
}

int main()
{
    int sizeOfArray;
    std::cout << "Please give me how many integer numbers would you like to give me" << std::endl;
    std::cin >> sizeOfArray;
    int arrayOfNumbers[sizeOfArray];
    for (int i = 0; i < sizeOfArray; ++i) {
        std::cout << "Please give me the " << i + 1 << ". number" << std::endl;
        std::cin  >> arrayOfNumbers[i];
    }
    int randomNumber;
    std::cout << "Please give me an integer number" << std::endl;
    std::cin >> randomNumber;

    std::cout << index(arrayOfNumbers, sizeOfArray, randomNumber) << std::endl;

    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    return 0;
}