#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

void buildUsage(std::string inputFileName, std::string outputFileName);

int main() {
    std::string inputFile("../usage.txt");
    std::string outputFile("../usageResult.txt");

    buildUsage(inputFile, outputFile);

    return 0;
}

void buildUsage(std::string inputFileName, std::string outputFileName)
{

    std::ifstream inputFile;
    inputFile.open(inputFileName);

    if(!inputFile.is_open()) {
        throw "We have not opened the input file";
    }

    std::string name;
    std::string type;
    std::string date;
    std::map<std::string, int> doorUserType;

    while(inputFile >> name >> type >> date) {
        doorUserType[type]++;
    }

    inputFile.close();

    std::ofstream outputFile;
    outputFile.open(outputFileName);

    std::string result;
    result = "Building Usage\n\n";

    for (std::map<std::string, int>::iterator it = doorUserType.begin(); it != doorUserType.end(); ++it) {
        result += it->first + ": " + std::to_string(it->second) + "\n";

    }

    if(!outputFile.is_open()) {
        throw "We have not opened the input file";
    }

    outputFile << result;

    outputFile.close();

}