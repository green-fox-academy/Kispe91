#include <iostream>

#include "animal.h"
#include "reptile.h"
#include "mammal.h"
#include "bird.h"

int main( int argc, char* args[] )
{
    Reptile reptile("Crocodile", 1);
    Mammal mammal("Koala", 1);
    Bird bird("Parrot" , 1);

    std::cout << "How do you breed?" << std::endl;
    std::cout << "A " << reptile.getName() << " is breeding by " << reptile.breed() << std::endl;
    std::cout << "A " << mammal.getName() << " is breeding by " << mammal.breed() << std::endl;
    std::cout << "A " << bird.getName() << " is breeding by " << bird.breed() << std::endl;
}