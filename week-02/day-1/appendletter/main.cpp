#include <iostream>
#include <string>
#include <vector>
std::vector <std::string> appendA (std::vector<std::string> name) {
    int nameSize;
    nameSize = name.size();
    for (int i = 0; i < nameSize ; ++i) {
        name[i] += "a";
    }
    return name;
}
    int main(int argc, char *args[])

{
    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    std::vector<std::string> newAnimals = appendA(animals);

    for(int i = 0; i < newAnimals.size(); ++i) {
        std::cout << newAnimals[i] << " ";
    }

    return 0;
}