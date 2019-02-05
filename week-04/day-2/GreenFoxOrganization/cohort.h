#include "person.h"
#include "mentor.h"
#include "student.h"
#include <string>
#include <vector>

#ifndef GREENFOXORGANIZATION_COHORT_H
#define GREENFOXORGANIZATION_COHORT_H

class Cohort {

public:

    Cohort(std::string name);

    void addStudent(Student *);
    void addMentor(Mentor *);
    void info();

private:

    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;

};

#endif //GREENFOXORGANIZATION_COHORT_H
