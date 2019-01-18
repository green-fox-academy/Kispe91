#include <iostream>

int main(int argc, char* args[]) {

    int firstRandomNumber;
    int secondRandomNumber;

    std::cout << "Please give me the first number " << std::endl;
    std::cin >> firstRandomNumber;
    std::cout << "Please give me the first number " << std::endl;
    std::cin >> secondRandomNumber;
    if (firstRandomNumber >= secondRandomNumber){
        std::cout << "The second number should be bigger than the first " << std::endl;
    }
    for (int i = firstRandomNumber+1; i < secondRandomNumber; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}