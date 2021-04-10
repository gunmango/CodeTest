#include <iostream>
#include <stdio.h>

//지능형 기차

int main()
{
	int in, out;
	int total = 0, max = 0;

	for (int i = 0;i < 4;i++)
	{
		scanf_s("%d %d", &out, &in);
		total -= out;
		total += in;

		if (total > max)
			max = total;
	}

	std::cout << max << std::endl;
}