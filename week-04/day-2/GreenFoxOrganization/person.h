#ifndef GREENFOXORGANIZATION_PERSON_H
#define GREENFOXORGANIZATION_PERSON_H

#include <string>
#include <iostream>

enum Gender{
    MALE,
    FEMALE
};

class Person
{

public:

    Person(std::string name, int age, Gender);
    Person();

    virtual void introduce();
    virtual void getGoal();

protected:

    std::string _name;
    int _age;
    Gender _gender;

};

#endif //GREENFOXORGANIZATION_PERSON_H
