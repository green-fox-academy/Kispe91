#include "sponsor.h"

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) :
Person(name, age, gender)
{
    _company = company;
    _hiredStudents = 0;
}

Sponsor::Sponsor() : Person()
{
    _company = "Google";
    _hiredStudents = 0;
}

void Sponsor::hire()
{
    _hiredStudents++;
}

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << " who represents " << _company <<
    " and hired " << _hiredStudents << " students so far." << std::endl;
}