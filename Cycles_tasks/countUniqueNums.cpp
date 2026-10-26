#include <iostream>
bool uniqueNum(int number)
{
    int counterFreq[10] = {0};
    bool unique = true;
    while(number > 0)
        {
            counterFreq[number % 10]++;
            number /= 10;
        }
        for(int i = 0; i < 10; i++)
        {
            if(counterFreq[i] > 1)
            {
                unique = false;
            }
        }
    return unique;
}
int countNumsBetweenMAndN(int m, int n)
{
    int count = 0; 

    if(m > n) return -1;
    
    while(m <= n)
    {
        if(uniqueNum(m))
        {
            count++;
        }
        m++;
    }
    return count;
}
int main()
{
    int m, n;
    std::cin >> m >> n;
    std::cout << countNumsBetweenMAndN(m, n);
}