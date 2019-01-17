#include <iostream>

int main(int argc, char* args[]) {

    int valueKM;
    double valueMile;
    std::cout << "Pleas write here an integer number (km)" << std::endl;
    std::cin >> valueKM;
    valueMile = valueKM / 1.609344;
    std::cout << valueKM << "km is " << valueMile << " mile" << std::endl;

    return 0;
}