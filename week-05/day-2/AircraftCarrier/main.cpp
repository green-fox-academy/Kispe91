#include <iostream>
#include <vector>
#include "carrier.h"
#include "aircraft.h"
#include "f16.h"
#include "f35.h"

int main() {

    std::vector <Aircraft *> blackEagles;

    F16 f16_01;
    F16 f16_02;
    F16 f16_03;
    F16 f16_04;

    F35 f35_01;
    F35 f35_02;
    F35 f35_03;

    blackEagles.push_back(&f16_01);
    blackEagles.push_back(&f16_02);
    blackEagles.push_back(&f16_03);
    blackEagles.push_back(&f16_04);
    blackEagles.push_back(&f35_01);
    blackEagles.push_back(&f35_02);
    blackEagles.push_back(&f35_02);

    Carrier blackPearl(blackEagles, 1000, 8000);

    std::vector <Aircraft *> whiteRaven;

    F16 f16_05;
    F16 f16_06;

    F35 f35_04;
    F35 f35_05;
    F35 f35_06;
    F35 f35_07;
    F35 f35_08;
    F35 f35_09;

    whiteRaven.push_back(&f16_05);
    whiteRaven.push_back(&f16_06);
    whiteRaven.push_back(&f35_04);
    whiteRaven.push_back(&f35_05);
    whiteRaven.push_back(&f35_06);
    whiteRaven.push_back(&f35_07);
    whiteRaven.push_back(&f35_08);
    whiteRaven.push_back(&f35_09);

    Carrier whitePearl(whiteRaven, 1000, 8000);

    blackPearl.fill();
    whitePearl.fill();

    std::cout << blackPearl.getStatusCarrier() << std::endl;
    std::cout << whitePearl.getStatusCarrier() << std::endl;

    blackPearl.fight(whitePearl);

    std::cout << blackPearl.getStatusCarrier() << std::endl;
    std::cout << whitePearl.getStatusCarrier() << std::endl;

    blackPearl.fill();
    whitePearl.fill();

    blackPearl.fight(whitePearl);

    std::cout << blackPearl.getStatusCarrier() << std::endl;
    std::cout << whitePearl.getStatusCarrier() << std::endl;

    return 0;
}