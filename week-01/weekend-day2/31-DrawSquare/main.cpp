#include <iostream>

int main(int argc, char* args[]) {

    int sideLengthOfSquare;
    std::cout << "Please give me the side length of the square which would you like" << std::endl;
    std::cin >> sideLengthOfSquare;

    for (int i = 0; i < sideLengthOfSquare; ++i) {
        for (int j = 0; j < sideLengthOfSquare; ++j) {
            if (i == 0 || i == (sideLengthOfSquare -1) || j == 0 || j == sideLengthOfSquare -1){
                std::cout << "%";
            }else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}