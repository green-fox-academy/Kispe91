#include <iostream>
#include <string>

class postIt
{
public:
    std::string backgroundColor;
    std::string text;
    std::string textColor;


    postIt(std::string backColor, std::string txt, std::string txtColor){
        backgroundColor = backColor;
        text = txt;
        textColor = txtColor;
    }

};

int main() {

    postIt example1("Orange", "Idea1", "Blue");
    postIt example2("Pink", "Awesome", "Black");
    postIt example3("Yellow", "Superb!", "Green");

    std::cout << example1.backgroundColor << " " << example1.text << " " << example1.textColor << std::endl;
    std::cout << example2.backgroundColor << " " << example2.text << " " << example2.textColor << std::endl;
    std::cout << example3.backgroundColor << " " << example3.text << " " << example3.textColor << std::endl;
}
