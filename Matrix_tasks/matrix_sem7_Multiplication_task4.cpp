#include <iostream>
const int MAX = 10;
void readMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}
void multiplication(int multiplicationMatrix[MAX][MAX], int resultRows, int resultCols, int equalElement, int matrixFirst[MAX][MAX], int matrixSecond[MAX][MAX])
{
   for(int i = 0; i < resultRows; i++)
    {
        for(int j = 0; j < resultCols; j++)
        {
            multiplicationMatrix[i][j] = 0;
            for(int k = 0; k < equalElement; k++)
            {
                multiplicationMatrix[i][j] += matrixFirst[i][k] * matrixSecond[k][j];
            }
        }
    }
}
void printMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    int matrixFirst[MAX][MAX];
    int firstRows, firstCols;
    std::cout << "first rows: ";
    std::cin >> firstRows;
    std::cout << "first cols: ";
    std::cin >> firstCols;
    readMatrix(matrixFirst, firstRows, firstCols);

    int matrixSecond[MAX][MAX];
    int secondRows, secondCols;
    std::cout << "second rows: ";
    std::cin >> secondRows;
    std::cout << "second cols: ";
    std::cin >> secondCols;
    readMatrix(matrixSecond, secondRows, secondCols);

    int matrix[MAX][MAX];
    if(firstCols == secondRows)
    {
        multiplication(matrix, firstRows, secondCols, firstCols, matrixFirst, matrixSecond);
        printMatrix(matrix, firstRows, secondCols);
    }
    else
    {
        std::cout << "Multiplication is not possible";
    }
}
