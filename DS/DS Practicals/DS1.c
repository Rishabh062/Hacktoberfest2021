#include<stdio.h> //Operations on Array
#include<conio.h>
int main()
{ 
	int i,pos,n,k,a[50];
    		printf("Enter how many data elements you want to enter :\n" );
    		scanf("%d",&n);
    		printf("Enter your desired elements :\n" );
    		for(i=0;i<=n-1;i++)
        	{
           		scanf("%d",&a[i]);
        	}
    		
	int ch;
   	printf("Enter 1 for Insertion\n");
   	printf("Enter 2 for Deletion\n");
   	printf("Enter 3 for Display\n");
   	printf("Enter your choice :\n");
   	scanf("%d",&ch);
   	switch(ch)
   {
   		case 1 :
     	{
    	printf("You entered : ");
    		for(i=0;i<=n-1;i++)
        	{
           		printf("%d ",a[i]);
        	}
    		printf("\nEnter the postion where you want to insert the new element :\n");
    		scanf("%d",&pos);
    		printf("Enter the data element you want to insert :\n");
    		scanf("%d",&k);
    		for(i=n-1;i>=pos-1;i--)
        	{
           		a[i+1]=a[i];
        	}
    		a[pos-1]=k;
    		printf("Your new sequensce of elements is :\n");
    		for(i=0;i<=n;i++)
        	{	
          		printf("%d ",a[i]);
        	}
			getch();
    		break;
		}		
		case 2:
		{
			printf("You entered : ");
    		for(i=0;i<=n-1;i++)
        	{
           		printf("%d ",a[i]);
        	}
    		printf("\nEnter the postion of element you want to delete :\n");
    		scanf("%d",&pos);
    		for(i=pos-1;i<=n-1;i++)
        	{
           		a[i]=a[i+1];
        	}	
    		printf("Your new sequence of elements is :\n");
    		for(i=0;i<=n-2;i++)
        	{
           		printf("%d ",a[i]);
        	}
    		getch();
    		break;
		}
		case 3:
     	{
    		printf("You entered : ");
    		for(i=0;i<=n-1;i++)
       		{
          		printf("%d ",a[i]);
       		}
    		getch();
    		break;
    	}
	}
}