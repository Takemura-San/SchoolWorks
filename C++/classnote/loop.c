#include <stdio.h>

int main()
{
	//multiply

	// int prod = 1;
	//
	// for (int i = 1; i <= 10; i++)
	// {
	// prod *= i;
	// }
	//
	// printf("Product = %d\n", prod);
	//
	// return 0;

	//print the even numers less than 15 on the same line
	//0 2 4 6 8 10 12 14

	for (int i = 0; i < 15; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
}