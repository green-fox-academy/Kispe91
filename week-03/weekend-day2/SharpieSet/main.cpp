#include "sharpie_set.h"
#include <iostream>
#include <vector>

int main()
{

    std::vector<Sharpie> SharpieSet1;

    Sharpie sharpie1("Green", 1, 100);
    Sharpie sharpie2("Blue", 1, 80);
    Sharpie sharpie3("Red", 1, 100);
    Sharpie sharpie4("Orange", 1, 100);
    Sharpie sharpie5("Brown", 1, 100);

    sharpie1.useInk(100);
    sharpie2.useInk(80);

    SharpieSet1.push_back(sharpie1);
    SharpieSet1.push_back(sharpie2);
    SharpieSet1.push_back(sharpie3);
    SharpieSet1.push_back(sharpie4);
    SharpieSet1.push_back(sharpie5);

    SharpieSet mySet(SharpieSet1);

    mySet.countUsable();
    mySet.removeEmptyInk();
    mySet.usableInk();

   return 0;

}