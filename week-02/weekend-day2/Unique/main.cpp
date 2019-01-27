
#include <iostream>
#include <string>
#include <vector>

void unique (int arrayOfNumbers[], int size);

int main(int argc, char* args[]) {

    int sizeOfList;
    std::cout << "Please give me how many numbers would you like to give me " << std::endl;
    std::cin >> sizeOfList;

    int userNumbers[sizeOfList];

    for (int i = 0; i < sizeOfList; ++i) {
        std::cout << "Please give me the " << i+1 << ". number" << std::endl;
        std::cin >> userNumbers[i];
    }

    unique(userNumbers, sizeOfList);
    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    return 0;
}

void unique (int arrayOfNumbers[], int size){

    int sum[size];
    int add = 0;

    for (int i = 0; i < size; ++i) {
        sum[i] = 0;
    }
    for (int j = 0; j < size; ++j) {
        for (int k = 0; k < size; ++k) {
            if (arrayOfNumbers[j] == arrayOfNumbers[k]) {
                sum[k] += add;
                add++;
            }
        }
        add = 0;
    }

    std::vector <int> uniqueList;

    for (int l = 0; l < size; ++l) {
        if (sum[l] == 0) {
            uniqueList.push_back(arrayOfNumbers[l]);
        }
    }

    std::cout << "[";
    for (int m = 0; m < uniqueList.size(); ++m) {
        if (m == uniqueList.size() - 1) {
            std::cout << uniqueList[m];
        } else {
            std::cout << uniqueList[m] << ", ";
        }
    }
    std::cout << "]" << std::endl;
}