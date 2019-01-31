
#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int bunnyEarCounter(int numberOfEars, int numberOfBunnies);

int main() {

    int userNumber;
    std::cout << "Please give me how many bunny do you have" << std::endl;
    std::cin >> userNumber;

    int numberOfBunnysEars = 2;
    int sum = bunnyEarCounter(numberOfBunnysEars, userNumber);

    std::cout << "Your bunnies have " << sum << " ears" << std::endl;

    return 0;
}

int bunnyEarCounter(int numberOfEars, int numberOfBunnies)
{
    if (numberOfBunnies > 0) {
        return numberOfEars + bunnyEarCounter(numberOfEars, numberOfBunnies - 1);
    } else {
        return 0;
    }
}