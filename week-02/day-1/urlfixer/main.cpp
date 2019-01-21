#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string replaceWhat = "bots";
    std::string replaceWith = "odds";

    int start_pos = url.find(replaceWhat);
    if (start_pos == std::string::npos) {
        std::cout << "Cannot replace" << std::endl;
    } else {
        url.replace(start_pos, replaceWhat.length(), replaceWith);
    }
    url.insert(url.length(), "/");
    std::cout << url << std::endl;


    return 0;
}