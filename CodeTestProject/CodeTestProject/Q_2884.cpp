#include <iostream>

int main()
{
    //�˶� �ð�
    int hour, min, newHour, newMin;
    std::cin >> hour >> min;

    newHour = hour;
    newMin = min;
    
    if (min < 45)
    {
        newMin = 60 - (45 - min);  
        newHour--;
        if (newHour < 0)
        {
            newHour = 23;
        }
    }
    else
    {
        newMin -= 45;

    }
    
    std::cout << newHour << " " << newMin;
}
