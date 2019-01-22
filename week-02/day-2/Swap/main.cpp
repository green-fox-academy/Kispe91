#include <iostream>
void swapValues (int *number1, int *number2){
   int temporaryValue = *number1;
   *number1 = *number2;
   *number2 = temporaryValue;

}

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;

    swapValues(&a, &b);
    std::cout << a << " " << b << std::endl;
    return 0;
}