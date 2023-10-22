/*Stack implementation using array*/
#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top=-1;

int main()
{
	int ch,entry,i,x,size=0;
	while(1)
	{
		printf("\n1.Create\t\t2. Push\t\t\t3. Pop\t\t\t4.Find top\n5. Empty check\t\t6. Full check\t\t7. Display\t\t8.Exit\t");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("Enter size of stack: ");
				scanf("%d",&size);
				int stack[size];
				break;
			}
			
			case 2:
			{
				if(top>=size-1)
				{
					printf("\nStack overflow");
				}
				else
				{
					printf("Enter element: ");
					scanf("%d",&entry);
					top++;
					stack[top]=entry;
					printf("%d succesfully stored\n",entry);
				}
				break;
			}
			
			case 3:
			{
				if(top<=-1)
				{
					printf("\nStack underflow");
				}
				else
				{
					x=stack[top];
					printf("The popped element is: %d",x);
					top--;
				}
				printf("\n");
				break;
			}
			
			
			
			case 4:
			{
				printf("Top position is %d",top);
				printf("\nTop value is %d",stack[top]);
				printf("\n");
				break;
			}
			
			case 5:
			{
				if(top==-1)
					printf("Stack empty");
				else
					printf("Stack not empty");
				printf("\n");
				break;
			}
			
			case 6:
			{
				if(top==size-1)
					printf("Stack full");
				else
					printf("Stack not full");	
				printf("\n");					
				break;
			}
			
			case 7:
			{
				if(top==-1)
				{
					printf("\nStack underflow");
				}
				else
				{
					for(i=top;i>=0;i--)
					{
						
						printf("\n |\t%d\t|",stack[i]);
						
					}
					printf("\n ________________");
				}
				printf("\n");
				break;
			}
			
			case 8:
			{
				printf("Succesfully exiting program \n");
				exit(0);
			}
			
			default:
			{
				printf("\nError,wrong choice input");
				printf("\n");
				break;
			}
		}
	}
}
				
