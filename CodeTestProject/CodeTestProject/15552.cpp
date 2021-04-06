#include <iostream>
#include <stdio.h>
int main()
{
    //ºü¸¥ A+B
    
    //cin.tin(NULL);
    //sync_with_stido(false);

    int num1, num2, total;

    scanf_s("%d", &total);

    for (int i = 0;i < total; i++)
    {
       //std::cin >> num1 >> num2;
       //std::cout << num1 + num2 << "\n";
        scanf_s("%d %d", &num1,&num2);

        printf("%d \n", num1 + num2);
    }

}