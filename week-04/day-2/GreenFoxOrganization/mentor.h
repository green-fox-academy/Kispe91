#include "person.h"

#ifndef GREENFOXORGANIZATION_MENTOR_H
#define GREENFOXORGANIZATION_MENTOR_H

enum Level{
    JUNIOR,
    INTTERMEDIATE,
    SENIOR
};

class Mentor : public Person
{

public:

    Mentor(std::string name, int age, Gender gender, Level);
    Mentor();

    void getGoal() override;
    void introduce() override;

private:

    Level _level;

};

#endif //GREENFOXORGANIZATION_MENTOR_H
