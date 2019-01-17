#include <iostream>

int main(int argc, char* args[]) {

    double firstRandomNumber;
    double secondRandomNumber;

    std::cout << "Please give me the first number" << std::endl;
    std::cin >> firstRandomNumber;

    std::cout << "Please give me the second number" << std::endl;
    std::cin >> secondRandomNumber;

    if (firstRandomNumber > secondRandomNumber){
        std::cout << "The bigger number is: " << firstRandomNumber << std::endl;
    }
    else if(firstRandomNumber < secondRandomNumber){
        std::cout << "The bigger number is: " << secondRandomNumber << std::endl;
    }
    else{
        std::cout << "These numbers are equal" << std::endl;
    }

    // Write a program that asks for two numbers and prints the bigger one

    return 0;
}