#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Please give me an integer number" << std::endl;
    std::cin >> randomNumber;
    int cycleVariable=0;
    for (int i = 0; i < (randomNumber+cycleVariable); ++i) {
        if (cycleVariable == randomNumber){

        }else if (i>=randomNumber-(1+cycleVariable)){
            std::cout << "*" ;
            if (i == randomNumber+cycleVariable-1){
                std::cout << std::endl;
                i=-1;
                cycleVariable++;}
        }else
            std::cout << " ";

    }

    return 0;
}