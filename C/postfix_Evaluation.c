/*Postfix Evaluation*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define N 20
char stack[N];
int top=-1;

int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == N-1;
}

char peek()
{
    return stack[top];
}

void push(int item)
{
    if(isFull())
        printf("\nStack overflow");
   
    else
    {
        top++;
        stack[top] = item;
    }
}

char pop()
{  
    if(isEmpty())
        return -1;

    char ch=stack[top];
    top--;
    return(ch);
}

void EvalPostfix(char stack[])
{

    int i,value,data1,data2;
    char ch;
    
    for (i = 0; stack[i] != '\0'; i++) 
    {
        ch = stack[i];
        if (isdigit(ch)) 
            push(ch - '0');

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') 
        { 
            data1 = pop();data2 = pop();

            switch (ch) 
            {
				case '*':
				{
				    value = data2 * data1;
				    break;
				}

				case '/':
				{
				    value = data2 / data1;
			  		break;
			  	}

				case '+':
				 {
				    value = data2 + data1;
				    break;
				 }
				case '-':
				{
				    value = data2 - data1;
				    break;
				}
			 }
			 
            push(value);
       	 }
    }
    printf("   %d \n", pop());
}

void main()
{
while(1)
    {
		char stack[N];
		int ch;
		printf("\nMENU");
		printf("\n1.Enter Postfix Expression\t\t2. Evaluate\t\t3.Exit\t");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{	         
				printf("Enter Postfix expression : ");
				scanf("%s",stack);
				break;
			}
			case 2:
			{
				printf("EValuation of Postfix Expression: ");
				EvalPostfix(stack);                 		
				break;
			}
			
			case 3:
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

