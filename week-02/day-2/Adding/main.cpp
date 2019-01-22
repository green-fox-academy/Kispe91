#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int *numPointer1 = &a;
    int *numPointer2 = &b;

    std::cout << *numPointer1 + *numPointer2 << std::endl;

    return 0;
}