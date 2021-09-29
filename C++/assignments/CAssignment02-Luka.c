#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Exercise01

  //a)
  //  Program Start
  //  Initialize three integers, num1, num2, num3
  //  Print sentence "Input three numbers: "
  //  Allow user to input three integer variables(scanf), and assign each into the initialized variables, num1, num2, num3
  //  Print the three variables, num1, num2, num3

  //b)
  //  Program Start
  //  Initialize two integers, numA, numB
  // Print sentence "Input two numbers: "
  //  Allow user to input two integer variables(scanf), and assin each into the initialized variables, numA and numB
  //  if numA > numB, print "numB is smaller than numA"
  //  else if numB > numA, print 'numA is smaller than numB"
  //  else print "Both numbers are equal"

  //c)
  //  Program Start
  // Initialize five unsigned floats, posNum1, posNum2, posNum3, posNum4, posNum5
  //  Print sentence "Input 5 positive numbers"
  //  Allow user to input five float variables(scanf), and assign each into the initialized variables, posNum1, posNum2, posNum3, posNum4, posNum5
  //  sum up all five positive numbers
  //  Initialize unsigned float, averageNum
  //  divide the summed up variable and assign the result to averageNum

  //Exercise02

  int numA, numB;

  printf("\n%s", "Input first number: ");
  scanf("%d", &numA);
  printf("%s", "Input second number: ");
  scanf("%d", &numB);

  if (numA > numB)
  {
    printf("%d is the smaller number\n", numB);
  }
  else if (numB > numA)
  {
    printf("%d is the smaller number\n", numA);
  }
  else
  {
    printf("%s", "The numbers are equal\n");
  }

  //Exercise03

  int workHours;
  float hourlyWage, straightPay, overtimeFee, salary;

  printf("%s", "\nEnter # of hours worked: ");
  scanf("%d", &workHours);

  printf("%s", "Enter hourly rate of the worker ($00.00): ");
  scanf("%f", &hourlyWage);

  if (hourlyWage < 0 || workHours < 0)
  {
    printf("%s", "Invalid number. Please type positive number.\n");
    exit(-1);
  }
  else if (0 < workHours && workHours <= 40)
  {
    salary = workHours * hourlyWage;
  }
  else if (workHours > 40)
  {
    salary = hourlyWage * (40 + (workHours - 40) * 1.5);
  }
  printf("Salary is %.2f\n", salary);

  //Exercise04

  float grade;
  char letterGrade;

  printf("%s", "\nInput your grade: ");
  scanf("%f", &grade);

  if (grade >= 90)
  {
    letterGrade = 'A';
  }
  else if (grade >= 80)
  {
    letterGrade = 'B';
  }
  else if (grade >= 70)
  {
    letterGrade = 'C';
  }
  else if (grade >= 60)
  {
    letterGrade = 'D';
  }
  else
  {
    letterGrade = 'F';
  }

  printf("Your letter grade is: %c \n", letterGrade);

  //Exercise05
  int num, remain;

  printf("%s", "\nInput an integer: ");
  scanf("%d", &num);

  remain = num % 7;

  switch (remain)
  {
  case 0:
    printf("%s", "Nice\n");
    break;

  case 1:
  case 3:
    printf("%s", "Good\n");
    break;

  case 2:
    printf("%s", "Cool\n");
    break;

  case 4:
  case 5:
  case 6:
    printf("%s", "Well\n");
    break;
  }
}