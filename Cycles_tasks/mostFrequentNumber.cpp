#include <iostream>
int mostFrequentNumber(int number)
{
    if(number == 0) return 0;

    int counter[10] = {0};

    while(number > 0)
    {
        counter[number % 10]++;
        number /= 10;
    }
    int best = 0;
    for(int i = 0; i < 10; i++)
    {
        if(counter[i] > counter[best])
        {
            best = i;
        }
    }
    return best;
}
int main()
{
    int number;
    std::cout << "Number: ";
    std::cin >> number;
    std::cout << mostFrequentNumber(number);
}