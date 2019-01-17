#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int sizeOfMatrix;
    std::cout << "Please give me the size of the identity matrix" << std::endl;
    std::cin >> sizeOfMatrix;
    int identityMatrix[sizeOfMatrix][sizeOfMatrix];

    for (int i = 0; i < sizeOfMatrix; ++i) {
        for (int j = 0; j < sizeOfMatrix; ++j) {
            if (i == j) {
                identityMatrix[i][j] = 1;
            }else{
                identityMatrix[i][j] = 0;
            }
        }
    }
    for (int k = 0; k < sizeOfMatrix; ++k) {
        for (int l = 0; l < sizeOfMatrix; ++l) {
            std::cout << identityMatrix[k][l] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}