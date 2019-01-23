#include <iostream>
#include <fstream>

void divide(double number1, double number2);

int main() {

    double a = 10;
    double dividerNumber;
    std::cout << "Please give me an integer number" << std::endl;
    std::cin >> dividerNumber;
    divide(a, dividerNumber);
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    return 0;
}

void divide(double number1, double number2){
    try{
        if(number2 == 0) {
            throw std::string("Fall");
        } else {
            std::cout << number1 / number2 << std::endl;
        }
    } catch(std::string& zeroDivider) {
        std::cout << zeroDivider << std::endl;
    }
}
