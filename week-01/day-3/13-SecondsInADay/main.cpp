#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    int remainingSeconds = 24 * 60 * 60 - (currentHours * 60 *60 + currentMinutes * 60 + currentSeconds);

    std::cout << "Remaning seconds: " << remainingSeconds << std::endl;

    return 0;
}