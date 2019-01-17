#include <iostream>

int main(int argc, char* args[]) {

    int numberOfGirls;
    int numberOfBoys;
    int numberOfPartyPeople;

    std::cout << "Please tell how many girls will go to the party" << std::endl;
    std::cin >> numberOfGirls;

    std::cout << "Please tell how many girls will go to the party" << std::endl;
    std::cin >> numberOfBoys;

    numberOfPartyPeople = numberOfGirls + numberOfBoys;

    if(numberOfGirls == numberOfBoys && numberOfPartyPeople > 20){
        std::cout << "The party is excellent!" << std::endl;
    }
    else if ((numberOfGirls != numberOfBoys && numberOfPartyPeople > 20){
        std::cout << "Quite cool party!" << std::endl;
    }
    else if (numberOfPartyPeople < 20 && numberOfGirls == 0){
        std::cout << "Sausage party" << std::endl;
    }
    else {
        std::cout << "Average party..." << std::endl;
    }

    return 0;
}