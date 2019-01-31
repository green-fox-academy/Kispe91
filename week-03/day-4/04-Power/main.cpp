#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
int powerN(int number, int power);

int main() {

    int userNumber;
    std::cout << "Please give me a number" << std::endl;
    std::cin >> userNumber;

    int userIndex;
    std::cout << "Please give me the index of this number" << std::endl;
    std::cin >> userIndex;

    int power = powerN(userNumber, userIndex);

    std::cout << power << std::endl;
    return 0;
}

int powerN(int number, int index)
{
    if(index > 1) {

        return number * powerN(number, index - 1);
    } else {
        return number;
    }
}