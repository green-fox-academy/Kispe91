#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    //double a = 24;
    //int out = 0;

    // if a is even increment out by one
    //if (a % 2 == 0) {
        //out++;
    //}
    // % can use only in integer case!!!

    //std::cout << out << std::endl;

    int b = 13;
    std::string out2 = "";

    if ((10 < b) && (b < 20)){
        out2 = "Sweet!";
    } else if (b < 10) {
        out2 = "Less!";
    } else {
    out2 = "More!";
    }

    std::cout << out2 << std::endl;


    int c = 123;
    int credits = 100;
    bool isBonus = false;

    if ((credits >= 50) && (isBonus == false)){
        c = c-2;
    }
    else if ((credits < 50) && (isBonus == false)){
        c = c--;
    }
    else if (isBonus == true){
    }

    std::cout << c << std::endl;


    int d = 8;
    int time = 120;
    std::string out3 = "";

    if ((d % 4 == 0) && (time <= 200)){
        out3 = "check";
    } else if (time > 200){
        out3="Time out";
        } else {
        out3="Run Forest Run!";
    }

    std::cout << out3 << std::endl;

    return 0;
}