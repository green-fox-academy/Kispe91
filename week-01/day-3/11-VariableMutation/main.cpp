#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int a = 3;
    a=a+10;

    std::cout << a << std::endl;

    int b = 100;
    b=b - 7;

    std::cout << b << std::endl;

    int c = 44;
    c=c * 2;

    std::cout << c << std::endl;

    int d = 125;
    d=d / 5;

    std::cout << d << std::endl;

    int e = 8;
    e = e * e * e;

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    bool m = f1>f2;
    std::cout << m << std::endl;

    int g1 = 350;
    int g2 = 200;
    bool n = g2*g2>g1;
    std::cout << n << std::endl;

    int h = 135798745;
    bool o = h % 11;
    std::cout << o << std::endl;

    int i1 = 10;
    int i2 = 3;
    bool p = i1 > i2 && i1 < i2 * i2 * i2;
    std::cout << p << std::endl;

    int j = 1521;
    bool q = j % 3 == 0 || j % 5 == 0;
    std::cout << q << std::endl;

    std::string k = "Apple";
    k = k + k + k + k;
    std::cout << k << std::endl;

    return 0;
}