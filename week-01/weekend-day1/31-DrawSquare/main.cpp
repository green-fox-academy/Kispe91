#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Please give me a positive integer number" << std::endl;
    std::cin >> randomNumber;

    for (int i = 0; i < randomNumber ; ++i) {
        if (i == 0 || i == randomNumber - 1) {
            for (int j = 0; j < randomNumber; ++j) {
                std::cout << "%";
            }
            std::cout << std::endl;
        } else {
                for (int j = 0; j < randomNumber; ++j) {
                    if (j == 0) {
                        std::cout << "%";
                    } else if (j == randomNumber - 1){
                        std::cout << "%" << std::endl;
                    } else {
                        std::cout << " ";
                    }
                }
            }
        }

    return 0;
}