#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Please give me a positive integer number" << std::endl;
    std::cin >> randomNumber;
    float givenNumbers[randomNumber];
    float sum = 0;
    float average =0 ;

    for (int i = 0; i < randomNumber; ++i) {
        std::cout << "Please give me the " << i + 1 << ". number" << std::endl;
        std::cin >> givenNumbers[i];
    }

    for (int j = 0; j < randomNumber; ++j) {
        sum += givenNumbers[j];
        average = sum / j;
    }
        std::cout << "Sum: " << sum << ", Average: " << average << std::endl;
    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4

    return 0;
}