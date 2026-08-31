/*#include <iostream>
const unsigned int N = 4;
void elementsInMatrix(int matrix[][N])
{
	int top = 0;
	int bottom = N - 1;
	int left = 0;
	int right = N - 1;
	
	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; i++)
		{
			std::cout << matrix[top][i] << " ";
		}
		top++;
		for (int i = bottom; i >= top; i--)
		{
			std::cout << matrix[right][i] << " ";
		}
		right--;
		for (int i= bottom; i>=top; i--)
		{
			std::cout << matrix[left][i] << " ";
		}
		left--;
		for (int i = top; i <= bottom; i++)
		{
			std::cout << matrix[right][i] << " ";
		}
		right--;
	}
}
int main()
{
	int matrix[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	elementsInMatrix(matrix);
}*/