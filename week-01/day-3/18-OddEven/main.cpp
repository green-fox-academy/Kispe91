#include <iostream>

int main(int argc, char* args[]) {

    int scannedNumber;
    std::cout << "Please give me an integer number" << std::endl;
    std::cin >> scannedNumber;
    if(scannedNumber % 2 ==0){
        std::cout << "The number which you gave is even" << std::endl;
    }
    else{
        std::cout << "The number which you gave is odd" << std::endl;
    }
    return 0;
}10