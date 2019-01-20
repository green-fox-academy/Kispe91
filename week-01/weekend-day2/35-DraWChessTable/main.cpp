#include <iostream>

int main(int argc, char* args[]) {

    int sizeOfChessTable;
    std::cout << "Please give me the size of the chess table" << std::endl;
    std::cin >> sizeOfChessTable;

    for (int i = 0; i < sizeOfChessTable; ++i) {
        for (int j = 0; j < sizeOfChessTable; ++j) {
            if ((i + j) % 2 == 0) {
                std::cout << "%";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}