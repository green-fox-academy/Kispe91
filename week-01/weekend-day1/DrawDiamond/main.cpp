#include <iostream>

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Please give me an integer number" << std::endl;
    std::cin >> randomNumber;
    int cycleVariable=0;
    for (int i = 0; i < randomNumber+cycleVariable; i =+ 2) {
        if (cycleVariable == randomNumber){

        }else if ((i >= (randomNumber-cycleVariable)/2){
            std::cout << "*" ;
            if (i == (randomNumber+cycleVariable)/2-1){
                std::cout << std::endl;
                i=-1;
                cycleVariable =+ 2;}
        }else{
            std::cout << " ";
    }

    return 0;
}