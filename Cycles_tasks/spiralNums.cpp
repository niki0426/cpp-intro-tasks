#include <iostream>
void spiral(int n)
{ 
   
   int num = 1;
   int currentNum = 0;
   for(int i = 0; i < n; i++)
   {
        for(int j = 0; j < n; j++)
        {
            if(i % 2 == 0)
            {
                std::cout << num ++ << " ";
                currentNum = num - 1;
            }
            else
            {
                num = (currentNum + n) - j;
                std::cout << num << " ";
            }
        }
        if(i % 2 != 0)
        {
            num += n;
        }
        std::cout << std::endl;
   }
}
int main()
{
    int n;
    std::cin >> n;
    spiral(n);
}