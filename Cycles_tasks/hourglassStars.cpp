#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for(int i = 0; i <= n / 2; i++)
    {
        for(int k = 0; k < i; k++)
        {
            std::cout << " ";
        }
        for(int j = i; j < n - i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int i = (n / 2) + 1; i < n; i++)
    {
        for(int k = n - i - 1; k > 0; k--)
        {
            std::cout << " ";
        }
        for(int j = n - i - 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}