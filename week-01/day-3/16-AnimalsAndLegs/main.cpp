#include <iostream>

int main(int argc, char* args[]) {

    int numberOfChickens;
    int numberOfPigs;
    int numberOfLegs;
    std::cout << "How many chickens do you have? " << std::endl;
    std::cin >> numberOfChickens;

    std::cout << "How many pigs do you have? " << std::endl;
    std::cin >> numberOfPigs;

    numberOfLegs = numberOfChickens* 2 + numberOfPigs * 4;
    std::cout << "Your animals have " << numberOfLegs << " legs" << std::endl;


    return 0;
}