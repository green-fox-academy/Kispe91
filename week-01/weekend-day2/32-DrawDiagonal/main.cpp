#include <iostream>

#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Please give me a positive integer number" << std::endl;
    std::cin >> randomNumber;

    for (int i = 0; i < randomNumber ; ++i) {
        for (int j = 0; j < randomNumber; ++j) {
            if (i == 0 || i == randomNumber - 1 || j == 0 || j == randomNumber - 1 || i == j) {
                std::cout << "%";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}