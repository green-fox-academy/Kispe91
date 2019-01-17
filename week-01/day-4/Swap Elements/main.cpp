#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    std::string abc []= {"first", "second", "third"};
    std::string temporary;
    abc [0] = temporary;
    abc [0] = abc [1];
    abc [1] = temporary;

    return 0;
}