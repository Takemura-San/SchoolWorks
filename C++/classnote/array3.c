#include <stdio.h>
#include <stdbool.h>
#define SIZE 6

int main()
{
	// int arr[SIZE] = {5, 7, 2, 24, 2, 13};
	//
	// does numberr 2 exist in the array?
	//
	// for (int i = 0; i < SIZE; i++)
	// {
	// if (arr[i] == 2)
	// {
	// puts("2 exists in the array");
	// break; //to output only once even if there are two
	// }
	// }

	// int arr[SIZE] = {5, 7, 2, 24, 2, 13};
	//
	//what is the index of 24 if it exists in the array?
	//
	// for (int i = 0; i < SIZE; i++)
	// {
	// if (arr[i] == 24)
	// {
	// printf("The index of 24 is %d\n", i);
	// }
	// }

	// int arr[SIZE] = {5, 7, 2, 24, 8, 13};
	//
	//does 8 exists in the array?
	//if yes, inform the user
	//if no, inform the user as well
	//
	// bool isFound = false;
	// for (int i = 0; i < SIZE; i++)
	// {
	// if (arr[i] == 8)
	// {
	// isFound = true;
	// break;
	// }
	// }
	//
	// if (isFound == true)
	// {
	// puts("8 exists");
	// }
	// else
	// {
	// puts("8 does not exists");
	// }

	int arr[SIZE] = {5, 7, 2, 24, 8, 83};
	//
	//Find the max of the array and print it
	//
	int max = arr[0]; //Always initialize to fiirst element of the array... if set to 0, code won't work if the elements are negative numbers

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	printf("Max = %d\n", max);
}