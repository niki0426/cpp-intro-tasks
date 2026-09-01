#include <iostream>
const int SIZE = 4;
int sumRow(int matrix[SIZE][SIZE], int startRow)
{
	int sumRow=0;
	for(int i=0; i<SIZE; i++)
	{
		sumRow += matrix[startRow][i];
	}
	return sumRow;
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
		std::cout << sumRow(matrix, i) << " ";
	}
	return 0;
}