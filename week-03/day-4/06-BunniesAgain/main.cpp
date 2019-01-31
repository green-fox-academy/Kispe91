#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

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
    if (numberOfEars % 2 == 0 && numberOfBunnies > 0) {
        return numberOfEars + bunnyEarCounter(numberOfEars + 1, numberOfBunnies - 1);
    } else if (numberOfEars % 2 != 0 && numberOfBunnies > 0) {
        return numberOfEars + bunnyEarCounter(numberOfEars - 1, numberOfBunnies - 1);
    } else {
        return 0;
    }
}