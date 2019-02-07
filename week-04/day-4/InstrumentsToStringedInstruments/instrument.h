#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H

#include <string>

class Instrument
{

public:

    virtual void play() = 0;

protected:

    std::string _name;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H
