#include <stdio.h>
#include <stdbool.h>

int main()
{
	// int counter = 0;
//
	// while(counter < 10)
	// {
		// if(counter == 5)
		// {
			// break;
		// }
//
		// printf("%d\n", counter);
		// counter++;
	// }
//
	// return 0;


	int input = 0;

	while(true)
	{
		printf("Input a number (500 to stop): ");
		scanf("%d", &input);

		if(input == 500)
		{
			break;
		}
	}

	return 0;
}