#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "instrument.h"
#include <iostream>


class StringedInstrument : public Instrument
{

public:

    virtual std::string sound() = 0;
    void play();

protected:

    int _numberOfStrings;

};

#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H