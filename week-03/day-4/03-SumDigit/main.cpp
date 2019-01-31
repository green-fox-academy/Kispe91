
#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumDigit(int number);

int main() {

    int userNumber;
    std::cout << "Please give me a number to sum its digits" << std::endl;
    std::cin >> userNumber;

    int sum = sumDigit(userNumber);;

    std::cout << sum << std::endl;

    return 0;
}

int sumDigit(int number)
{
    if(number > 0) {
        return sumDigit(number / 10) + number % 10;
    } else {
        return 0;
    }

}