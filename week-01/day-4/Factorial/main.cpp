#include <iostream>
#include <string>

void factorio(int x, int& y);

int main(int argc, char* args[]) {

    int randomNumber1;
    int randomNumber2;
    std::cout << "Please give me a random integer number: " << std::endl;
    std::cin >> randomNumber1;
    std::cout << "Please give me another random integer number: " << std::endl;
    std::cin >> randomNumber2;
    factorio(randomNumber1, randomNumber2);

}

void factorio(int x, int& y){
    int a = 1;
    for (int i = 1; i <= x; ++i) {
       a = a * i;
       y = a;
    }
}