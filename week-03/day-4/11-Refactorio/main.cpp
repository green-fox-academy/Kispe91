#include <iostream>

// Create a recursive function called `refactorio`
// that returns it's input's factorial

int factorial (int target);

int main() {

    int userNumber;
    std::cout << "Please give me a number" << std::endl;
    std::cin >> userNumber;

    std::cout << factorial(userNumber) << std::endl;
    return 0;
}

int factorial (int target)
{
    if (target > 0) {
        return target * factorial(target - 1);
    } else {
        return 1;
    }
}