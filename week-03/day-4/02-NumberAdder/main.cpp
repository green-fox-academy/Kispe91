#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int numberAdder(int addFrom, int addTo);

int main() {

    int userNumberFrom;
    std::cout << "Please give me the number from which  you would like to sum" << std::endl;
    std::cin >> userNumberFrom;

    int userNumberTo;
    std::cout << "Please give me the number to which  you would like to sum" << std::endl;
    std::cin >> userNumberTo;

    int sum;

    sum = numberAdder(userNumberFrom, userNumberTo);

    std::cout << sum << std::endl;

    return 0;
}

int numberAdder(int addFrom, int addTo)
{
    if (addFrom < addTo) {
        return numberAdder(addFrom + 1, addTo) + addFrom;
    } else {
        return 0;
    }
}