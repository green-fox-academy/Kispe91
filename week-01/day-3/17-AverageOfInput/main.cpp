#include <iostream>

int main(int argc, char* args[]) {

    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int fourthNumber;
    int fifthNumber;
    int sum;
    double average;

    std::cout<< "Please give me the first integer number" << std::endl;
    std::cin >>  firstNumber;

    std::cout<< "Please give me the second integer number" << std::endl;
    std::cin >>  secondNumber;

    std::cout<< "Please give me the third integer number" << std::endl;
    std::cin >>  thirdNumber;

    std::cout<< "Please give me the first integer number" << std::endl;
    std::cin >>  fourthNumber;

    std::cout<< "Please give me the first integer number" << std::endl;
    std::cin >>  fifthNumber;

    sum = firstNumber + secondNumber + thirdNumber + fourthNumber + fifthNumber;
    std::cout<< "The sum of these numbers is: " << sum << std::endl;

    average =  (firstNumber + secondNumber + thirdNumber + fourthNumber + fifthNumber) / 5.;
    std::cout<< "The average of these numbers is: " << average << std::endl;

    return 0;
}