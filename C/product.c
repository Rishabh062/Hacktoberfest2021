// Write a C program that accepts two integers from the user and calculate the product of the two integers

#include <stdio.h>
 int main()
  {
     int x,y,product;

     printf("Input the first integer: ");
     scanf("%i",&x);

     printf("Input the second integer: ");
     scanf("%i",&y);

     product=x*y;

     printf("Product of the above two integers = %i \n",product);

     return(0);
  }
