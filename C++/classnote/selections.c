#include<stdio.h>

int main()
{

  //block example

  // int x = 5; //created in main block, so usable throughout this block
  //int x = 7 //redefinition error... cannot assignt again

  // printf("the value of x before the block is %d\n", x);

    { //new block here
      // int y = 4; //y is usable throughout this block only
      // printf("y = %d\n", y);

      // x = 8;
      // printf("The value of x inside the block is %d\n", x);

    }   //y is destroyed at the end of this block

    // printf("The value o f x after the block is %d\n", x);



    //if statement
  int x = 5;

  if (x > 0)
  {
    printf("positive\n");
    printf("Definetely positive\n");
  }

    return 0;
}