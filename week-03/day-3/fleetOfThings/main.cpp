#include <iostream>

#include "fleet.h"
#include "thing.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    Thing thing1("Get milk");
    Thing thing2("Remove the obstacles");
    Thing thing3("Stand up");
    Thing thing4("Eat lunch");

    fleet.add(thing1);

    fleet.add(thing2);

    thing3.complete();
    fleet.add(thing3);

    thing4.complete();
    fleet.add(thing4);
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch


    std::cout << fleet.toString() << std::endl;
    return 0;
}