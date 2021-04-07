#include <iostream>

//피보나치 수 5

int main()
{
	int count = 0,num1,num2;
	int total = 0;
	num1 = 0;
	num2 = 1;
	int num3 = 0;

	std::cin >> count;
	
	if (count == 0)
	{
		std::cout <<0 << std::endl;
	}
	else if (count == 1)
	{
		std::cout << 1 << std::endl;
	}
	else
	{
		while (true)
		{
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
			count--;
			if (count ==1)
			{
				break;
			}
		}
		std::cout << num3 << std::endl;
	}

}