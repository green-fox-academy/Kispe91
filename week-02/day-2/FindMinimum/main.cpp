#include <iostream>

int *minimumValue(int array[], int arraySize) {


    int *minimumNumberPointer = nullptr;
    int currentMinimumValue = array[0];
    for (int j = 0; j < arraySize; ++j) {
        if (array[j] < currentMinimumValue) {
            minimumNumberPointer = &array[j];
            currentMinimumValue = array[j];
        }
    }
    return minimumNumberPointer;
}

int main() {
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 1, 2, 87, 3, 15};
    int sizeOfArray = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << minimumValue(numbers, sizeOfArray) << std::endl;
    std::cout << numbers + 2 << std::endl;
    return 0;
}