#ifndef DEVICES_PRINTER3D_H
#define DEVICES_PRINTER3D_H

#include "printer.h"

class Printer3d : public Printer
{

public:

    Printer3d(int sizeX, int sizeY, int sizeZ);

    std::string getSize() override;

private:

    int _sizeX;
    int _sizeY;
    int _sizeZ;
};


#endif //DEVICES_PRINTER3D_H
