#include <iostream>

    int main(int argc, char* args[]) {

    int cycleVariable=0;
    int randomNumber;
    std::string starString ="*";
    std::cout << "Please give me a number " << std::endl;
    std::cin >> randomNumber;
    for (int i = 0; i < randomNumber; ++i) {
        cycleVariable++;
        for (int j = cycleVariable; j < randomNumber ; ++j) {
            std::cout << " ";
        }
        std::cout << starString << std::endl;
        starString = starString + "*" + "*";
    }

    return 0;
}