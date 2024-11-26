/*Stack implementation using linked list*/
#include<stdio.h>
#include<stdlib.h>

struct node {
		int data;
		struct node *next;
	    }; 
	    struct node *top=NULL;

int main()
{
	int ch,entry,tempdata,count=0;
	while(1)
	{
		printf("\n1. Push\t\t\t2. Pop\t\t\t3.Find top\t\t4. Display\t\t5.Exit\t");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("Enter element: ");
				scanf("%d",&entry);
				struct node *input;
				input=(struct node*)malloc(sizeof(struct node));
				input->data=entry;
				if(top==NULL)
				{
					input->next=NULL;
				}
				else
				{
					input->next=top;
				}
				top=input;
				printf("%d is inserted\n",input->data);
				break;
			}
			
			case 2:
			{
				if(top==NULL)
				{
					printf("Stack Underflow\n");
				}
				else
				{
					struct node *temp=top;
					int tempdata =top->data;
					top=top->next;
					free(temp);
					printf("Popped element is %d\n",tempdata);
				}
				
				break;
			}
			case 3:
			{
				count=0;
				struct node *temp=top;
				while(temp->next!=NULL)
				{
					temp=temp->next;
					count++;
				}
				if(top==NULL)
				{
					printf("Stack Underflow\n");
				}
				else
				{
					struct node *temp=top;
					printf("Top position is %d\n",count);
					printf("Top value is %d\n",temp->data);
				}
				break;
			}
			case 4:
			{
				if(top==NULL)
				{
					printf("Stack Underflow\n");
				}
				else
				{
					struct node *temp=top;
					while(temp->next!=NULL)
					{	
						printf("\n |\t%d\t|",temp->data);
						temp=temp->next;
					}
					printf("\n |\t%d\t|\n",temp->data);
					printf(" ________________");
					
				}
				break;
			}
			
			case 5:
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
									
				
