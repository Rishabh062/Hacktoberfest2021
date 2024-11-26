#include<stdio.h> //Bubble Sort
#include<conio.h>
int main()
{
	int a[10],N,i,j,k,temp;
	
	printf("\nEnter Size of Array:");
	scanf("%d",&N);
	printf("\nEnter Array Elements:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nYour Sorted Array Elements are:");
	for(i=0;i<N;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}