#include "mentor.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person(name, age, gender)
{
    _level = level;
}

Mentor::Mentor()
{
    _level = INTTERMEDIATE;
}
void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << " " << _level <<
    " mentor." << std::endl;
}

