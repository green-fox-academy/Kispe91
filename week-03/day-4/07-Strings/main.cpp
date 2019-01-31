#include <iostream>
#include <string>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

std::string changer(std::string text, int beginValue, int size);
int main() {

    std::string userString;
    std::cout << "Please give me a text" << std::endl;
    std::cin >> userString;

    int startingValue = 0;
    int stringLength = userString.length();
    std::string changedString = changer(userString, startingValue, stringLength);
    std::cout << changedString << std::endl;

    return 0;
}

std::string changer(std::string text, int beginValue, int size)
{
    if(size > beginValue && text[beginValue] == 'x') {
        return "y" + changer(text, beginValue + 1, size);
    } else if (size > beginValue && text[beginValue] != 'x') {
        return text[beginValue] + changer(text, beginValue + 1, size);
    } else {
        return "";
    }
}