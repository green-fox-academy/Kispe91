#include <string>

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H


class Sharpie
{
public:
    Sharpie(std::string color, float width, float inkAmount);

    void useInk(int decreaseAmount);
    int getInkAmount();
    std::string getColor();

private:
    std::string _color;
    float _width, _inkAmount, _decreaseAmount = 0;
};

#endif //SHARPIE_SHARPIE_H