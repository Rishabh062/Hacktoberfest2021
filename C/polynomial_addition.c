/*Polynomial Addition using Linked List*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int coefficient;
	int power;
	struct node* next;
}; struct node *input1=NULL,*input2=NULL,*sum=NULL;

void create(struct node *input)
{	
	int size,i;
	printf("\nEnter Number of Terms in Polynomial Expression: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Kindly Enter Term %d Coefficient: ",i+1);
		scanf("%d",&input->coefficient);
		printf("Kindly Enter Term %d Power: ",i+1);
		scanf("%d",&input->power);
		input->next=(struct node*)malloc(sizeof(struct node));
		input=input->next;
		input->next=NULL;
	}
}

void display(struct node *input)
{	
		while(input->next!=NULL)
		{
			printf(" %dx^%d ",input->coefficient,input->power);
			input=input->next;
			if (input->next!=NULL)
				printf("+");
		}
}


void addition(struct node *input1,struct node *input2,struct node *sum)
{
	while(input1->next &&  input2->next)
	{
		if(input1->power > input2->power)
		{
			sum->power=input1->power;
			sum->coefficient=input1->coefficient;
			input1=input1->next;
		}
		
		else if(input1->power < input2->power)
		{		
			sum->power=input2->power;
			sum->coefficient=input2->coefficient;
			input2=input2->next;
		}
		
		else
		{
			sum->power=input1->power;
			sum->coefficient=input1->coefficient + input2->coefficient;
			input1=input1->next;
			input2=input2->next;
		}
		sum->next=(struct node *)malloc(sizeof(struct node));
		sum=sum->next;
		sum->next=NULL;
	}

	while(input1->next || input2->next)
	{
		if(input1->next)
		{
			sum->power=input1->power;
			sum->coefficient=input1->coefficient;
			input1=input1->next;
		}

		if(input2->next)
		{
			sum->power=input2->power;
			sum->coefficient=input2->coefficient;
			input2=input2->next;
		}
		sum->next=(struct node *)malloc(sizeof(struct node));
		sum=sum->next;
		sum->next=NULL;
	}
}

void sort(struct node *input)
{
	struct node *i,*j;
	int temp;
	for(i=input;i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
    		if(i->power <= j->power)
    		{
				temp=i->power;
				i->power=j->power;
				j->power=temp;
				temp=i->coefficient;
				i->coefficient=j->coefficient;
				j->coefficient=temp;
    		}
		}
	}
}

void main()
{
	input1=(struct node*)malloc(sizeof(struct node));
	input2=(struct node*)malloc(sizeof(struct node));
	sum=(struct node*)malloc(sizeof(struct node));
	while(1)
    {
		int ch;
		printf("\nMENU");
		printf("\n1.Insert Polynomial Expression 1\t\t2.Insert Polynomial Expression 2\t\t3. Add\t\t4.Exit\t");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{	         
				create(input1);
				sort(input1);
				printf("Polynomial expression 1: \t");
				display(input1);
				printf("\n");
				break;
			}
			
			case 2:
			{
				create(input2);
				sort(input2);
				printf("Polynomial expression 2: \t");
				display(input2);
				printf("\n");                 		
				break;
			}
			
			case 3:
			{
				addition(input1,input2,sum); 
				printf("Sum is: \t");
				display(sum); 
				printf("\n");               		
				break;
			}
		
			case 4:
			{
				printf("Succesfully exiting program \n");
				exit(0);
			}
			
			default:
			{
				printf("Error,wrong choice input\n");
				break;
			}             
		}
	}
}

