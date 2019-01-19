#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Please give me an integer number" << std::endl;
    std::cin >> randomNumber;
    int cycleVariable=0;
        if (randomNumber % 2 == 1) {
        randomNumber += 1;
        for (int i = 0; i < (randomNumber + cycleVariable) / 2; i++) {
            if (cycleVariable >= randomNumber) {
                i = randomNumber + cycleVariable;
                cycleVariable -= 4;
            } else if (i >= (randomNumber - cycleVariable) / 2 - 1) {
                std::cout << "*";
                if (i >= (randomNumber + cycleVariable) / 2 - 1) {
                    std::cout << std::endl;
                    i = -1;
                    cycleVariable += 2;
                }
            } else {
                std::cout << " ";
            }
        }
        for (int i = 0; i < (randomNumber + cycleVariable) / 2; i++) {
            if (cycleVariable == -2) {
                i = randomNumber + cycleVariable;
            } else if (i >= (randomNumber - cycleVariable) / 2 - 1) {
                std::cout << "*";
                if (i >= (randomNumber + cycleVariable) / 2 - 1) {
                    std::cout << std::endl;
                    i = -1;
                    cycleVariable -= 2;
                }
            } else {
                std::cout << " ";
            }
        }
    } else {
        for (int i = 0; i < (randomNumber + cycleVariable) / 2; i++) {
            if (cycleVariable == randomNumber) {
                i = randomNumber + cycleVariable;
                cycleVariable -= 2;
            } else if (i >= (randomNumber - cycleVariable) / 2 - 1) {
                std::cout << "*";
                if (i >= (randomNumber + cycleVariable) / 2 - 1) {
                    std::cout << std::endl;
                    i = -1;
                    cycleVariable += 2;
                }
            } else {
                std::cout << " ";
            }
        }
        for (int i = 0; i < (randomNumber + cycleVariable) / 2; i++) {
            if (cycleVariable == -2) {
                i = randomNumber + cycleVariable;
            } else if (i >= (randomNumber - cycleVariable) / 2 - 1) {
                std::cout << "*";
                if (i >= (randomNumber + cycleVariable) / 2 - 1) {
                    std::cout << std::endl;
                    i = -1;
                    cycleVariable -= 2;
                }
            } else {
                std::cout << " ";
            }
        }
    }
    return 0;
}