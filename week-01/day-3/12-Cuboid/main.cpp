#include <iostream>

int main(int argc, char* args[]) {

    double aSide=4;
    double bSide=5;
    double cSide=6;
    double sArea = 2 * ( aSide* bSide + bSide * cSide + aSide * cSide );
    double Volume = aSide * bSide * cSide;
    std::cout << "Surface Area " << sArea << std::endl;
    std::cout << "Volume " << Volume << std::endl;

    return 0;
}