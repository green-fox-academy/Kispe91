#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int ai [] = {3, 4, 5, 6, 7};
    int sum=0;
    for (int i = 0; i <sizeof(ai)/sizeof(ai[0]) ; ++i) {
        sum = sum + ai[i];
    }
    std::cout << "The sum of the array elemnts is: " << sum << std::endl;

    return 0;
}