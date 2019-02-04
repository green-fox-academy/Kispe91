#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool isSymmetric(std::vector< std::vector<int>> &matrix);

int main()
{

    int sizeOfMatrix;
    std::cout << "Please give me the size of the identity matrix" << std::endl;
    std::cin >> sizeOfMatrix;
    std::vector< std::vector<int>> identityMatrix(sizeOfMatrix, std::vector<int>(sizeOfMatrix));


    for (int i = 0; i < sizeOfMatrix; ++i) {
        for (int j = 0; j < sizeOfMatrix; ++j) {
            if (i == j) {
                identityMatrix[i][j] = 1;
            }else{
                identityMatrix[i][j] = 0;
            }
        }
    }

    std::cout << isSymmetric(identityMatrix) << std::endl;

    std::vector< std::vector<int>> randomMatrix(sizeOfMatrix, std::vector<int>(sizeOfMatrix));

    srand(time(0));

    for (int i = 0; i < sizeOfMatrix; ++i) {
        for (int j = 0; j < sizeOfMatrix; ++j) {
            if (i == j) {
                randomMatrix[i][j] = 0;
            }else{
                randomMatrix[i][j] = rand() % 100 + 1;
            }
        }
    }

    std::cout << isSymmetric(randomMatrix) << std::endl;

    return 0;
}

bool isSymmetric(std::vector< std::vector<int>> &matrix)
{

    int sum = 0;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] == matrix[j][i] && i != j){
                sum++;
            }
        }
    }

    if (sum == matrix.size() * 2) {
        return true;
    } else {
        return false;
    }
}