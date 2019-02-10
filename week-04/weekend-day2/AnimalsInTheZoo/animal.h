#ifndef ANIMALSINTHEZOO_ANIMAL_H
#define ANIMALSINTHEZOO_ANIMAL_H

#include <string>

class Animal {

public:

    virtual std::string  getName() = 0;
    virtual std::string breed() = 0;

protected:

    std::string _name;
    int _age;

};


#endif //ANIMALSINTHEZOO_ANIMAL_H
