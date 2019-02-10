#ifndef DEVICES_COPIER_H
#define DEVICES_COPIER_H

#include "printer2d.h"
#include "scanner.h"

class Copier : public Printer2d, public Scanner
{

public:

    Copier(int sizeX, int sizeY, int speed);

    std::string copy();

};

#endif //DEVICES_COPIER_H
