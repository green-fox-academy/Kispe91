#include "stringedinstrument.h"

#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H


class BassGuitar : public StringedInstrument
{

public:

    BassGuitar();
    BassGuitar(int numberOfStrings);

    std::string sound();

};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
