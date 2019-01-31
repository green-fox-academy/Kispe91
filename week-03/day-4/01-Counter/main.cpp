#include <iostream>

void counter(int countFrom);

int main() {

    int userNumber;
    std::cout << "Please give me the number which from you would like to count down" << std::endl;
    std::cin >> userNumber;

    counter(userNumber);

    return 0;
}

void counter(int countFrom) {
    if (countFrom > 0) {
        std::cout << "Number: " << countFrom << std::endl;
        counter(countFrom - 1);
    }
}
