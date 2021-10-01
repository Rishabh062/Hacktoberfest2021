//Write a C program that accepts an integer from the user and divide all numbers between 1 and 100. Print those numbers where remainder value is 3.

#include <stdio.h>

int main ()
{

    int i,x;

    printf("Input a number (integer):\n");
    scanf("%d", &x);

    for(i=1;i<100;i++)
    {
        if(i%x==3)
        {
            printf("Remainder value is 3 after divide all numbers between 1 and 100: %d\n" , i);
        }
    }
    return 0;
}
