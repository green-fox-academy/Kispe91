
#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int aj []= {3, 4, 5, 6, 7};
    int sizeOfaj = sizeof(aj)/sizeof(aj[0]);
    int temporary = 0;
    for (int i = 0; i < sizeOfaj/2; ++i) {
        temporary = aj[i];
        aj[i] = aj[sizeOfaj-i-1];
        aj[sizeOfaj-i-1] = temporary;
    }

    for (int j = 0; j < sizeOfaj; ++j) {
        std::cout << aj[j] << " ";
    }
    std::cout << std::endl;

    return 0;
}