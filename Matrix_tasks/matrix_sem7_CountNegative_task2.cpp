#include <iostream>
const int SIZE = 4;
int countNegativeElementsInEveryRow(int matrix[SIZE][SIZE], int startRow)
{
    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(matrix[startRow][i] < 0 )
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int matrix[SIZE][SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < SIZE; i++)
    {
        std::cout << countNegativeElementsInEveryRow(matrix, i) << " ";
    }
    return 0;
}