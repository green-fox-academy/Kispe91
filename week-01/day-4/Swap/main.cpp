#include <iostream>
#include <string>

void swap (int& input1, int& input2);

int main(int argc, char* args[]) {

    int a = 15;
    int b = 23;
    std::cout << a << " and " << b << std::endl;
    swap(a, b);
    std::cout << a << " and " << b << std::endl;
    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.

    return 0;
}

void swap (int& input1, int& input2){

    int temporary;
    temporary = input1;
    input1 = input2;
    input2 =temporary;

}