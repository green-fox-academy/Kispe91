#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int p1[]={1,2,3};
    int p2[]={4,5};
    if (sizeof(p1)/sizeof(p1[0]) > sizeof(p2)/sizeof(p2[0])){
        std::cout << "p1 has more elements" << std::endl;
    }else if (sizeof(p1)/sizeof(p1[0]) < sizeof(p2)/sizeof(p2[0])){
        std::cout << "p1 has more elements" << std::endl;
    }else{
        std::cout << "p1 nad p2 has equal elements" << std::endl;
    }

    return 0;
}