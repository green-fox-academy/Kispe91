#include <iostream>
#include <string>

int unique(int listOfNumbers[]);

int main(int argc, char* args[]) {

    int sizeOfNumbers;
    std::cout << "Please give me how many numbers would you like to write" << std::endl;
    std::cin >>  sizeOfNumbers;
    int numbers[sizeOfNumbers];

    for (int i = 0; i < sizeOfNumbers ; ++i) {
        std::cout << "Please give me the " << i+1 << " .number" << std::endl;
        std::cin >> numbers[i];
    }

    std::cout << unique(numbers) << std::endl;

    return 0;
}

int unique(int listOfNumbers[]){

    int sizeOfNumbers = sizeof(listOfNumbers)/sizeof(listOfNumbers[0]);
    int sum = 0;
    int index =0;
    int storing [2][sizeOfNumbers];
    int unique[sizeOfNumbers];
    for (int i = 0; i < sizeOfNumbers; ++i) {
        for (int j = 0; j < sizeOfNumbers; ++j) {
            if (listOfNumbers[i] == listOfNumbers[j]) {
                storing[1][j] = storing[1][j] + sum;
                storing[2][j] = listOfNumbers[j];
                sum++;
            }else {
                    storing [2][j] = listOfNumbers [j];
                }
            }
        sum = 0;
        }
    for (int k = 0; k <sizeOfNumbers; ++k) {
        if (storing [2][k] < 1){
            unique [index] = storing[2][k];
            index = index+1;
        }
    }
    return unique[sizeOfNumbers];

    }


