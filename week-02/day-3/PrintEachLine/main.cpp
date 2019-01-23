#include <iostream>
#include <fstream>
#include <string>

void stringOfLinesOfAFile(const std::string readFile);

int main () {

    std::string createdFileName;
    std::cout << "Pleas give me the name of file with extension (something.txt) which you would like to create" << std::endl;
    std::cin >> createdFileName;

    int numberOfLines;
    std::cout << "Pleas give me how many lines would you like to write" << std::endl;
    std::cin >> numberOfLines;
    std::string text;

    std::ofstream createdFile;
    createdFile.open(createdFileName);
    for (int i = 0; i <  numberOfLines; ++i) {
        std::cout << "The text of the " << i + 1 << ".line" << std::endl;
        std::cin >> text;
        createdFile << text << std::endl;
    }
    createdFile.close();

    std::string readableFile;
    std::cout << "Pleas give me the name file with extension (something.txt) which you would like to read" << std::endl;
    std::cin >> readableFile;

    stringOfLinesOfAFile(readableFile);
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory

    return 0;
}

void stringOfLinesOfAFile(const std::string readFile) {

        std::ifstream userFile;
        userFile.open(readFile);
        std::string line;
        if (userFile.is_open() == 0) {
        } else {
            while (getline(userFile, line)) {
                std::cout << line << std::endl;
            }
            userFile.close();
        }
}