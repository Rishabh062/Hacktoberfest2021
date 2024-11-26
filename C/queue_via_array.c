/*Queue implementation using array*/
#include<stdio.h>
#include<stdlib.h>

#define size 3
int rear=-1;
int front=-1;
int queue[size];

int isfull()
{
	if(rear==size-1)
		return 1;
	else
		return 0;
}

int isempty()
{
	if(rear==-1)
		return 1;
	else
		return 0;
}

void enqueue(int value)
{
	if(isfull())
		printf("Queue is full\n");
	else
	{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=value;
		printf("Inserted element is %d",queue[rear]);
		printf("\n");
	}
}

void dequeue()
{
	if(isempty())
		printf("Queue is empty\n");
	else
	{
		printf("Deleted element is %d",queue[front]);
		printf("\n");
		front++;
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}

void display()
{
	if(isempty())
		printf("Queue is empty\n");
	else
	{
		int i;
		printf("\nQueue elements are:\n");
		for(i=front;i<=rear;i++)
		{
			printf("|___%d___",queue[i]);
		}
		printf("|");
	}
}

void main()
{
	while(1)
	{
		int queue,ch,entry,i;
		printf("\n1.Enqueue\t\t2. Dequeue\t\t3. Display\t\t4.Exit\t");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:
			{
				printf("Enter element: ");
				scanf("%d",&entry);
				enqueue(entry);
				break;
			}
					
			case 2:
			{
				dequeue();
				break;
			}
			
			case 3:
			{
				display();
				break;
			}
	
			case 4:
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
