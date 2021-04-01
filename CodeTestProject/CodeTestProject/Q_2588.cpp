#include <iostream>

int main()
{
    //°ö¼À

    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    int b1 = b / 100;
    int b2 = b%100 / 10;
    int b3 = b % 10;

    std::cout << a * b3 << std::endl << a * b2 << std::endl << a * b1 << std::endl << a * b;
}
