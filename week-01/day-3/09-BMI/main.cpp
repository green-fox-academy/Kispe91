#include <iostream>

int main(int argc, char* args[]) {

    double massInKg = 81.2;
    double heightInM = 1.78;
    double BMI = massInKg / heightInM / heightInM;
    std::cout << "BMI " << BMI << std::endl;

    return 0;
}