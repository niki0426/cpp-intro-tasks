#include <iostream>
const int SIZE = 4;
void readMatrix(int matrix[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}
void powerTwoMatrix(int matrix[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            matrix[i][j] = matrix[i][j] * matrix[i][j];
        }
    }
}
void printMatrix(int matrix[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    int matrix[SIZE][SIZE];
    readMatrix(matrix);
    powerTwoMatrix(matrix);
    printMatrix(matrix);
    return 0;
}