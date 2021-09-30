// N-Queen Problem
// Program
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int x[20],count=0;
bool place(int k,int i)
{
    int j;
    for(j=1;j<=k-1;j++)
        if((x[j]==i)||(abs(x[j]-i)== abs(j-k)))
            return false;
    return true;
}
void NQueen(int k,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(place(k,i)==true)
        {
            x[k]=i;
            if(k==n)
            {
                for(i=1;i<=n;i++)
                    printf("%d\t",x[i]);
                    printf("\n");
                    count++;
            }
            else NQueen(k+1,n);
        }
    }
}
int main()
{
    int n;
    printf("\nEnter the size of the ChessBoard: ");
    scanf("%d",&n);
    NQueen(1,n);
    printf("\nThe total possible arrangements of %d Queens is: %d",n,count);
}
/*
Output: 
Enter the size of the ChessBoard: 4
2       4       1       3
3       1       4       2

The total possible arrangements of 4 Queens is: 2
*/
