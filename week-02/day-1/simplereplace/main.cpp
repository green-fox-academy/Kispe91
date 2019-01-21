#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string example("In a dishwasher far far away");
    std::string replaceWhat("dishwasher");
    std::string replaceWith("galaxy");

    int start_pos = example.find(replaceWhat);
    if (start_pos == std::string::npos){
        std::cout << "Cannot change" << std::endl;
    } else {
        example.replace(start_pos, replaceWhat.length(), replaceWith);
    }
       std::cout << example << std::endl;

    return 0;
}