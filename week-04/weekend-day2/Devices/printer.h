#ifndef DEVICES_PRINTER_H
#define DEVICES_PRINTER_H

#include <iostream>

class Printer {

public:

    virtual std::string getSize() = 0;
    std::string print();

};

#endif //DEVICES_PRINTER_H
