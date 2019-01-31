#include <iostream>
#include <string>

// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a '*'.

std::string pusher(std::string text, int size, int max);
int main() {

    std::string userString;
    std::cout << "Please give me a text" << std::endl;
    std::cin >> userString;

    int stringLength = userString.length() - 1;
    std::string changedString = pusher(userString, stringLength, stringLength);
    std::cout << changedString << std::endl;

    return 0;
}

std::string pusher(std::string text, int size, int max)
{
    if(size == max) {
        return pusher(text, size - 1, max) + text[size];
    } else if (size > 0) {
        return pusher(text, size - 1, max) + text[size] + "=";
    } else {
        return "";
    }
}