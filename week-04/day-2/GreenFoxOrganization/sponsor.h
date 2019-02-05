#include "person.h"
#ifndef GREENFOXORGANIZATION_SPONSOR_H
#define GREENFOXORGANIZATION_SPONSOR_H


class Sponsor : public Person
{

public:

    Sponsor(std::string name, int age, Gender gender, std::string company);
    Sponsor();

    void hire();
    void getGoal() override;
    void introduce() override;

private:

    std::string _company;
    int _hiredStudents;
};


#endif //GREENFOXORGANIZATION_SPONSOR_H
