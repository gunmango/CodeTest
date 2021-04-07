#include <iostream>

//Æò±Õ Á¡¼ö

int main()
{
	int grade;
	int total = 0;

	for (int i = 0; i < 5;i++)
	{
		std::cin >> grade;
		if (grade < 40)
			grade = 40;
		total += grade;
	}

	std::cout << total / 5 << std::endl;
}