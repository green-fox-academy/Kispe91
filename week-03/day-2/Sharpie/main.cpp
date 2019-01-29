#include <iostream>
#include <string>

class Sharpie{

public:
    Sharpie(std::string color, float width){
        _color = color;
        _width = width;
        _inkAmount = 100;
    }


    void set(int time){
        _inkAmount -= _decreaseValue*time;
    }

    float getSet(){
        return _inkAmount;
    }

private:
    std::string _color;
    float _width;
    float _inkAmount;
    float _decreaseValue = 0.001;

};
int main() {

    Sharpie sharpie1("Green", 1.5);
    sharpie1.set(50);
    std::cout << sharpie1.getSet() << std::endl;


    return 0;
}