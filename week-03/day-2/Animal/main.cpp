#include <iostream>
#include <string>
class Animal {

public:
    Animal(std::string animalKind, int hungerValue, int thirstValue){

        _animalKind = animalKind;
        _hungerValue = hungerValue;
        _thirstValue = thirstValue;
    }


    void eat() {
        _hungerValue -= 1;
    }

    void drink() {
        _thirstValue -= 1;
    }

    void play() {
        _hungerValue +=1;
        _thirstValue +=1;
    }

    int getHunger() {
        return _hungerValue;
    }

    int getThirst() {
        return _thirstValue;
    }

private:
    std::string _animalKind;
    int _hungerValue = 0;
    int _thirstValue = 0;


};
int main() {
    Animal animal1("Pork", 50, 50);
    animal1.play();
    std::cout << std::to_string(animal1.getHunger()) << std::endl;
    std::cout << std::to_string(animal1.getThirst()) << std::endl;
    return 0;
}