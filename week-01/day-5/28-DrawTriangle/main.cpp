#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::string randomString;
    std::cout << "Please give me a number " << std::endl;
    std::cin >> randomNumber;
    for (int i = 0; i < randomNumber; ++i) {
        randomString += "*";
        std::cout << randomString << std::endl;
    }

    return 0;
}