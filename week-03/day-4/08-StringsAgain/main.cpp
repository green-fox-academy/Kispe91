#include <iostream>
#include <string>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

std::string removeX(std::string text, int beginValue, int size);
int main() {

    std::string userString;
    std::cout << "Please give me a text" << std::endl;
    std::cin >> userString;

    int startingValue = 0;
    int stringLength = userString.length();
    std::string changedString = removeX(userString, startingValue, stringLength);
    std::cout << changedString << std::endl;

    return 0;
}

std::string removeX(std::string text, int beginValue, int size)
{
    if(size > beginValue && text[beginValue] == 'x') {
        return "" + removeX(text, beginValue + 1, size);
    } else if (size > beginValue && text[beginValue] != 'x') {
        return text[beginValue] + removeX(text, beginValue + 1, size);
    } else {
        return "";
    }
}