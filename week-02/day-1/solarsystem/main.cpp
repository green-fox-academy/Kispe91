#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> putSaturn(const std::vector<std::string>& planets)
{
    std::vector<std::string> realPlanets = planets;
    realPlanets.insert(realPlanets.begin() + 5, "Saturn");

    return realPlanets;
}

int main(int argc, char* args[])
{
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};

    std::vector<std::string> correctPlanets = putSaturn(planets);

    for(int i = 0; i < correctPlanets.size(); ++i) {
        std::cout << correctPlanets[i] << " ";
    }

    return 0;
}

