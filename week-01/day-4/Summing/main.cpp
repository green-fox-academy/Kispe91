#include <iostream>
#include <string>

int sum(int x);

int main(int argc, char* args[]) {

    int randomNumber;
    std::cout << "Please give me an integer number? " << std::endl;
    std::cin  >> randomNumber;
    std::cout << "The sum of these numbers from 0 to " << randomNumber << " is: " << sum(randomNumber) << std::endl;

    return 0;
}

int sum (int x){
    int a = 0;
    for (int i = 0; i <= x; i++) {
        a = a + i;
    }
    return a;


}