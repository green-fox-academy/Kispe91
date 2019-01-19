#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
int main(int argc, char* args[]) {

    int firstNumber;
    std::cout << "Please give me the first number of the range" << std::endl;
    std::cin >> firstNumber;
    int secondNumber;
    std::cout << "Please give me the first number of the range" << std::endl;
    std::cin >> secondNumber;
    int range = secondNumber - firstNumber;
    int storedNumber = firstNumber + (rand() % range);
    int guessNumber;
    std::cout << "Please guess the number which is stored (" << firstNumber <<"-" << secondNumber << ")" << std::endl;
    std::cin >> guessNumber;
    for (int i = 0; i < range; ++i) {
        if (guessNumber == storedNumber) {
            std::cout << "You found the number" << std::endl;
            std::cout << "You tried  it " << i + 1 << " times" << std::endl;
            break;
        } else if (guessNumber > storedNumber) {
            std::cout << "The stored number is lower" << std::endl;
            std::cin >> guessNumber;
        } else {
            std::cout << "The stored number is higher" << std::endl;
            std::cin >> guessNumber;
        }
    }

    return 0;
}