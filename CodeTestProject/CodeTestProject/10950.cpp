#include <iostream>

int main()
{
    //A+B-3

    int count;
    std::cin >> count;

    for (int i=0;i < count;i++)
    {
        int num1,num2;
        std::cin >> num1 >> num2;

        std::cout << num1+num2 << std::endl;
    }

}