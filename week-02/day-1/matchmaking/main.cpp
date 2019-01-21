#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys)
{
std::vector<std::string> pairingGirlsBoys;
int maximumSizeOfGirls;
maximumSizeOfGirls = girls.size();
int maximumSizeOfBoys;
maximumSizeOfBoys = boys.size();

if (maximumSizeOfBoys > maximumSizeOfGirls)
    for (int i = 0; i < maximumSizeOfBoys; ++i) {
        if (i > maximumSizeOfGirls - 1) {
            pairingGirlsBoys.push_back(boys[i]);
        } else {
            pairingGirlsBoys.push_back(boys[i]);
            pairingGirlsBoys.push_back(girls[i]);
        }
    }
else {
    for (int i = 0; i < maximumSizeOfGirls; ++i) {
        if (i > maximumSizeOfBoys - 1) {
            pairingGirlsBoys.push_back(girls[i]);
        } else {
            pairingGirlsBoys.push_back(boys[i]);
            pairingGirlsBoys.push_back(girls[i]);
        }
    }
}

return pairingGirlsBoys;
}

int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};

    std::vector<std::string> matches =  makingMatches(girls, boys);

    for(int i = 0; i < matches.size(); ++i) {
        std::cout << matches[i] << " ";
    }

    return 0;
}