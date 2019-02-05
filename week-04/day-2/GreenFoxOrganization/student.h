#include "person.h"

#ifndef GREENFOXORGANIZATION_STUDENT_H
#define GREENFOXORGANIZATION_STUDENT_H

class Student : public Person
{

public:

    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    Student();

    void getGoal() override;
    void introduce() override;
    void skipDays(int numberOfDays);

private:

    std::string _previousOrganization;
    int _skippedDays;

};

#endif //GREENFOXORGANIZATION_STUDENT_H
