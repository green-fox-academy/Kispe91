#include "stringedinstrument.h"

#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H


class Violin : public StringedInstrument
{

public:

    Violin();
    Violin(int numberOfStrings);

    std::string sound();



};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H
