#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;

    std::cout << "Please give me an integer number" << std::endl;
    std::cin >>randomNumber;

    if(randomNumber <= 0) {
        std::cout << "Not enough" << std::endl;
    }
    else if (randomNumber == 1) {
            std::cout << "One" << std::endl;
    }
    else if (randomNumber == 2) {
            std::cout << "Two" << std::endl;
    }
    else{
            std::cout << "A lot" << std::endl;
    }


    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot

    return 0;
}