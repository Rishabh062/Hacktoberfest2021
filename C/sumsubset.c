/*Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//using a user defined function called power to find the power
int power(int n,int p)
{
  int result=1;
  for(int i=0;i<p;i++)
  result=result*n;
  return result;
}

void main()
  {
    int s[20],x[20],n,sum,i,tot,soln=0;
    long int a;
    
    //taking input of the number of values
    printf("\nEnter the value of n ");
    scanf("%d",&n);
    printf("\nEnter the values ");
    for(i=0;i<n;i++)
     {
       scanf("%d",&s[i]);
      }

    //taking input of the sum
    printf("\nEnter the total sum ");
    scanf("%d",&tot);
    
    //printing the solution
    printf("\nSolution to the problem is ");
    for(a=0;a<power(2,n);a=a+1)
     {
      sum=0;
      for(i=0;i<n;i++)
       {
        if((a&(int)power(2,i))!=0)
         {
          x[i]=1;
          sum=sum+s[i];
         }
  
        else
         {
          x[i]=0;
         }
       }

     if(sum==tot)
     {
      soln=soln+1;
      printf("\n");
     
      for(i=0;i<n;i++)
      {
       if(x[i]==1)
       {
        printf("%d ",s[i]);\
       }
      }
      printf("\n");
     }
    }

   if(soln==0)
    {
     printf("is not possible!!");
    }
    
    //The time complexity of the program is exponential.This is a NP complete program
}
