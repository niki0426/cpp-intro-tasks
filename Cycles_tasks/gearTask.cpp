#include <iostream>
int main()
{
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        //First square
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        //Handle
        for(int k = 0; k < n - 2; k++)
        {
            if(n % 2 == 0)
            {
                if(i == (n / 2) - 1 || i == n / 2)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
            else
            {
                if(i == n / 2)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
        }
        //Second square
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}