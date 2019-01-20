#include <iostream>

int main(int argc, char* args[]) {

    int sizeOfChessTable=8;

    for (int i = 0; i < sizeOfChessTable ; ++i) {
        for (int j = 0; j < sizeOfChessTable; ++j) {
            if ((i % 2 == 0) && (j == sizeOfChessTable - 1)) {
                std::cout << " " << std::endl;
            } else if ((i % 2 == 0) && (j % 2 == 0)) {
                std::cout << "%";
            } else if ((i % 2 == 0) && (j % 2 == 1)){
                std::cout << " ";
            }
            if ((i % 2 == 1) && (j == sizeOfChessTable - 1)) {
                std::cout << "%" << std::endl;
            } else if ((i % 2 == 1) && (j % 2 == 0)){
                std::cout << " ";
            } else if ((i % 2 == 1) && (j % 2 == 1)) {
                std::cout << "%";
            }
        }
    }

    return 0;
}