#include <iostream>
#include <fstream>
#include <map>

std::pair<char, int> getMostCommonCharacterWithMap(std::string fileName);

int main() {

try {
    std::pair<char, int> mostCommonCharacter = getMostCommonCharacterWithMap("../../countchar.txt");
    std::cout << "The most common character of the file is '" << mostCommonCharacter.first <<
    "' (with std::map) and it is consisted " <<mostCommonCharacter.second << " times." << std::endl;
    } catch(std::string exception) {
    std::cout << exception << std::endl;
}

    return 0;
}

std::pair<char, int> getMostCommonCharacterWithMap(std::string fileName)
{
    std::ifstream inputFile;
    inputFile.open(fileName);

    if(!inputFile.is_open()){
        throw "Ghe file does not exist";
    }

    std::map<char, int> charactersToNumbers;
    std::string line;
    while(getline(inputFile, line)) {
        for (int i = 0; i < line.size(); ++i) {
            char c = line[i];
            if(charactersToNumbers.find(c) == charactersToNumbers.end()) {
                charactersToNumbers[c] = 1;
            } else {
                charactersToNumbers[c]++;
            }
        }
    }

    std::pair<char, int> mostCommonCharacter = *charactersToNumbers.begin();
    for (std::map<char, int>::iterator it = charactersToNumbers.begin(); it != charactersToNumbers.end(); ++it) {
        if(it->second > mostCommonCharacter.second) {
            mostCommonCharacter = *it;
        }
    }

    return mostCommonCharacter;
}

