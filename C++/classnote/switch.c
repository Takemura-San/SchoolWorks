#include <stdio.h>

int main()
{
  // int number = 1;
//
  // switch(number)
  // {
    // case 1:
      // puts("A");
      // break;
//
    // case 2:
    //  puts("B");
    //  break;
//
    // case 3:
    //  puts("C");
    //  break;
//
    // default: //everything else
      // puts("Please choose a value between 1 and 3");
      // break;
//
  // }
//


//check if a day is a weekday or a weekend
//0 is Sunday
//1 is Monday
//6 is Saturday

int day = 4;

switch (day)
{
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    puts("weekday");
    break;

  case 0: case 6:
    puts("Weekend");
    break;

  default:
   puts("please enter number between 0 and 6");
   break;

}

  return 0;
}