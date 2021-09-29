#include <stdio.h>
#include <stdbool.h>

int main()
{
	int array[3];

	array[0] = 15;
	array[1] = 21;
	array[2] = 1;

	printf("%d\n", array[0]);
	printf("%d\n", array[1]);
	printf("%d\n", array[2]);

	for (int i = 0; i < 3; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
