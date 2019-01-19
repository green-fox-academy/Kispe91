#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Please give me a positive integer number " << std::endl;
    std::cin >> randomNumber;

    for (int i = 0; i < randomNumber + 1 ; ++i) {
        if (i == 0 || i == randomNumber){
            for (int j = 0; j < randomNumber +1; ++j) {
                std::cout << "%";
            }
            std::cout << std::endl;
        } else {
            for (int k = 0; k < randomNumber + 1 ; ++k) {
                if (k == 0 || i == k) {
                    std::cout << "%";
                } else if (k == randomNumber){
                    std::cout << "%" << std::endl;
                } else {
                    std::cout << " ";
                }
            }
        }
    }

    return 0;
}
