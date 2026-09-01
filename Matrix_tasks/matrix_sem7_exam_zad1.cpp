#include <iostream>
const int SIZE = 6;
void findSaddlePoint(int matrix[SIZE][SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		int maxCol = 0;
		for (int j = 1; j < cols; j++)
		{
			if (matrix[i][maxCol] < matrix[i][j])
			{
				maxCol = j;
			}
		}
		int currentElement = matrix[i][maxCol];
		bool isMinInCol = true;
		for (int k = 1; k < rows; k++)
		{
			if (matrix[k][maxCol] < currentElement)
			{
				isMinInCol = false;
				break;
			}
		}
		if (isMinInCol)
		{
			std::cout << "Saddle point at: " << i << ", " << maxCol;
			return;
		}
	}
	std::cout << "The matrix does't have saddle point";
}
int main1()
{
	int matrix[SIZE][SIZE];
	int rows, cols;
	std::cout << "Rows: ";
	std::cin >> rows;
	std::cout << "Columns: ";
	std::cin >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	findSaddlePoint(matrix, rows, cols);
	return 0;
}