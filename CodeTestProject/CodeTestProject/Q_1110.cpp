#include <iostream>

int main()
{
    //더하기 사이클

    int originalNum;
    std::cin >> originalNum;
    int newNum;
    int cycle = 0;
    int num = originalNum
    do 
    {
        
        if (num < 10)
        {
            num *= 10;
        }

        int addition = (num / 10) + (num % 10);
        
        



        cycle++;
    } while (newNum != originalNum);



}
