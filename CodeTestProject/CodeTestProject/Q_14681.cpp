#include <iostream>

int main()
{
    //��и� ����
    int x,y;
    std::cin >> x;
    std::cin >> y;
   
    
    if (x > 0)
    {
        if (y > 0)
        {
            std::cout << 1;
        }
        else
        {
            std::cout << 4;
        }
    }
    else
    {
        if (y > 0)
        {
            std::cout << 2;
        }
        else
        {
            std::cout << 3;
        }
    }
}
