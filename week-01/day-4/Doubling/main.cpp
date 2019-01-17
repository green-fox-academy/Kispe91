#include <iostream>
#include <string>

int doubling(int x);

int main(int argc, char* args[]) {

    int baseNum = 123;
    std::cout << doubling(baseNum) << std::endl;

    return 0;
}

int doubling(int x){
    int a = x * 2;
    return a;
}