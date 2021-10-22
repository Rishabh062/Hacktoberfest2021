//Program to find the difference of the diagonals of a matrix
//Time complexity : O(n)

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[10][10];
  int n,i,j;
  scanf("%d ",&n);
  //Getting input
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
   }
  int sum1=0,sum2=0;
  //Difference in the diagonals
 for(i=0;i<n;i++)
  {
    sum1=a[i][i]+sum1;
     sum2=sum2+a[i][n-i-1];
}
int sum=abs(sum1-sum2);
printf("%d", sum);
}
  
