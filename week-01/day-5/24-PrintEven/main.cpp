#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    for (int i = 1; i <500 ; ++i) {
        if (i % 2 == 0){
            std::cout << i << std::endl;
        }
    }

    return 0;
}