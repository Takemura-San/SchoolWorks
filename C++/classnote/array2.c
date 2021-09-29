#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

int main()
{
	// int arr[SIZE] = {3, 7, 12, 15, 21};
	//
	// Print the array backwards
	//
	// for (int i = SIZE - 1; i >= 0; i--)
	// {
	// printf("%d ", arr[i]);
	// }
	//
	// puts("");
	//
	int arr[SIZE] = {3, 10, 1, 2, 4}; //sum is 20

	//Find the average of the array (sum, then divide by size)
	int total = 0;
	float average; //average is always float

	for (int i = 0; i < SIZE; i++)
	{
		total += arr[i];
	}

	average = total / SIZE;

	printf("The average is %.2f\n", average);

	return 0;
}