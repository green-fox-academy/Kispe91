#ifndef DEVICES_SCANNER_H
#define DEVICES_SCANNER_H

#include <iostream>

class Scanner
{

public:

    Scanner(int speed);

    std::string scan();

protected:

    int _speed;

};


#endif //DEVICES_SCANNER_H
