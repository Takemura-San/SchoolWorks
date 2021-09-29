#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int Exercise01()
{
	//Exercise01

	//start infinite loop
	//tell user to "input grade: "
	//display the grade
	//add grade to sum
	//ask user whether to continue
	//if y --> count and continue the loop..
	//else if n --> compute and print the average and letter grade, break the loop...
	//else invalid input, let user input whether to continue again

	int grade;
	int sumGrade = 0;
	int count = 1; //start the count from 1 considering user might only input once (for else if calculation)
	float avrGrade;
	char decision;

	while (true)
	{

		printf("%s", "Input grade: ");
		scanf("%d", &grade);
		sumGrade += grade;

		printf("%s", "Input another grade? (y / n ): ");
		scanf(" %c", &decision);

		if (decision == 'y')
		{
			count++;
			continue;
		}
		else if (decision == 'n')
		{
			avrGrade = sumGrade / count;

			if (avrGrade >= 90)
			{
				printf("The average is %.0f (A)\n", avrGrade);
			}
			else if (avrGrade >= 80)
			{
				printf("The average is %.0f (B)\n", avrGrade);
			}
			else if (avrGrade >= 70)
			{
				printf("The average is %.0f (C)\n", avrGrade);
			}
			else if (avrGrade >= 60)
			{
				printf("The average is %.0f (D)\n", avrGrade);
			}
			else
			{
				printf("The average is %.0f (F)\n", avrGrade);
			}
			break;
		}
		else
		{
			printf("%s", "ERROR Invalid input: answer by y or n\n");
			break;
		}
	}
	return 0;
}

int Exercise02()
{
	//Exercise02

	int grade;
	int sumGrade = 0;
	int count = 1;
	float avrGrade;
	char repeat; //change the value name for decision making to repeat

	while (repeat != 'n')
	{

		printf("%s", "Input grade: ");
		scanf("%d", &grade);
		sumGrade += grade;

		printf("%s", "Input another grade? (y / n ): ");
		scanf(" %c", &repeat);

		if (repeat == 'y')
		{
			count++;
			continue;
		}
		else if (repeat == 'n')
		{
			avrGrade = sumGrade / count;

			if (avrGrade >= 90)
			{
				printf("The average is %.0f (A)\n", avrGrade);
			}
			else if (avrGrade >= 80)
			{
				printf("The average is %.0f (B)\n", avrGrade);
			}
			else if (avrGrade >= 70)
			{
				printf("The average is %.0f (C)\n", avrGrade);
			}
			else if (avrGrade >= 60)
			{
				printf("The average is %.0f (D)\n", avrGrade);
			}
			else
			{
				printf("The average is %.0f (F)\n", avrGrade);
			}
			// delete "break;" since the complier finishes the loop with the while loop condition
		}
		else
		{
			printf("%s", "ERROR Invalid input: answer by y or n\n");
			break;
		}
	}
	return 0;
}

int Exercise03()
{
	//Exercise03

	int number;
	int largest = 0;

	for (int i = 1; i < 11; i++) //start i from 1, not 0 to also use it for printf
	{
		printf("Input positive integer #%d: ", i);
		scanf("%d", &number);

		if (number < 0)
		{
			printf("ERROR\ninvalid input, input postitive number\n"); //displays error and finish the program if user input negative value
			break;
		}

		largest = (number > largest) ? number : largest;
	}

	printf("The largest number is %d\n", largest);

	return 0;
}

int Exercise04()
{
	//Exercise04

	int value;
	int sum = 0;
	int sumSqr = 0;
	int sumCube = 0;

	printf("%s", "Input a number: ");
	scanf("%d", &value);

	for (int i = 1; i <= value; i++)
	{
		sum += i;
		sumSqr += i * i;
		sumCube += i * i * i;
	}

	printf("The sum is %d,\nThe sum of the squares is %d\nThe sum of cubes is %d\n", sum, sumSqr, sumCube);

	return 0;
}

int main()
{
	Exercise01();
	printf("\n"); //just to make output look pretty
	Exercise02();
	printf("\n");
	Exercise03();
	printf("\n");
	Exercise04();
	printf("\n");
}