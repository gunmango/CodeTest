#include <iostream>

int main()
{
    //��

    int num,total =0;
    std::cin >> num;

    for (int i = 1;i <= num;i++)
    {
        total += i;
    }
    std::cout << total << std::endl;

}