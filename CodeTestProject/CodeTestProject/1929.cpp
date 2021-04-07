#include <iostream>
#include <stdio.h>
//소수 구하기

int main()
{
	int min, max;


	scanf_s("%d %d", &min, &max);
	//std::cin >> min >> max;


	for (int i = min; i < +max; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			if (j == i - 1)
				//std::cout << i << std::endl;
				printf("%d\n", i);
		}
	}

}