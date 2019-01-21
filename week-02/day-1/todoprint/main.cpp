#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";
    todoText.insert(0 , "My todo:\n");
    todoText.insert(todoText.length(), " - Download games\n");
    todoText.insert(todoText.length(), "\t - Diablo");

    std::cout << todoText << std::endl;

    return 0;
}