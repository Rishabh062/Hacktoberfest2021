#include <stdio.h>
int main(void) {
  int n;
  printf("Enter the number of rows\n");
  scanf("%d",&n);
  int spaces=n-1;
  int stars=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=spaces;j++)
    {
      printf(" ");
    }
    for(int k=1;k<=stars;k++)
    {
      printf("*");
    }
    if(spaces>i)
    {
      spaces=spaces-1;
      stars=stars+2;
    }
    if(spaces<i)
    {
      spaces=spaces+1;
      stars=stars-2;
    }
    printf("\n");
  }
  return 0;}
