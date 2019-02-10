#include <iostream>
#include <vector>

#include "copier.h"
#include "printer.h"
#include "printer2d.h"
#include "printer3d.h"
#include "scanner.h"


int main() {
    std::vector<Printer*> printers;

    Printer2d  printer2d1(5, 6);
    Printer2d  printer2d2(10, 20);
    Printer2d  printer2d3(45, 80);
    printers.push_back(&printer2d1);
    printers.push_back(&printer2d2);
    printers.push_back(&printer2d3);

    Printer3d  printer3d1(5, 6, 7);
    Printer3d  printer3d2(10, 20, 30);
    printers.push_back(&printer3d1);
    printers.push_back(&printer3d2);

    Copier copier1(30, 60, 10);
    printers.push_back(&copier1);

    for (int i = 0; i <printers.size() ; ++i) {
        std::cout << printers[i]->print() << std::endl;
    }

    std::vector<Scanner*> scanners;

    Scanner scanner1(70);
    Scanner scanner2(80);
    scanners.push_back(&scanner1);
    scanners.push_back(&scanner2);

    Copier copier2(20, 30, 40);
    scanners.push_back(&copier1);
    scanners.push_back(&copier2);

    for(int i=0; i<scanners.size(); i++){
        std::cout << scanners[i]->scan() << std::endl;
    }

    std::cout << copier1.copy() << std::endl;
    return 0;
}