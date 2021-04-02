#include <iostream>

int main()
{
    //두 수 비교하기
    int a, b;
    std::cin >> a >> b;

    if (a < b)
    {
        std::cout << "<";
    }
    else if (a>b)
    {
        std::cout << ">";
    }
    else
    {
        std::cout << "==";
    }

}
