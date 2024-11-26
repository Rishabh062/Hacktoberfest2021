/*Infix to Postfix Conversion using array*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char stack[100];
int top=-1;

int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == 100-1;
}

char peek()
{
    return stack[top];
}

char pop()
{  
    if(isEmpty())
        return -1;

    char ch=stack[top];
    top--;
    return(ch);
}

void push(char operator)
{
    if(isFull())
        printf("\nStack overflow");
   
    else
    {
        top++;
        stack[top] = operator;
    }
}

int is_operator(char symbol)
{
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
		return 1;

	else
		return 0;
}

int precedence(char symbol)
{                 
	if(symbol == '^')
		return(3);
		
	else if(symbol == '*' || symbol == '/')
		return(2);
		
	else if(symbol == '+' || symbol == '-')          
		return(1);
		
	else
		return(0);
}

void InfixToPostfix(char infix_exp[], char postfix_exp[])
{ 
	int i,j;
	char x,item;

	push('(');                              
	strcat(infix_exp,")");                  

	i=0;j=0;
	item=infix_exp[i];         

	while(item != '\0')        
	{
		if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))
		{
			postfix_exp[j] = item;              
			j++;
		}
		else if(is_operator(item) == 1)        
		{
			x=pop();
			while(is_operator(x) == 1 && precedence(x)>= precedence(item))
			{
				postfix_exp[j] = x;                  
				j++;
				x = pop();                       
			}
			push(x);
			push(item);                 
		}
		else if(item == ')')         
		{
			x = pop();                   
			while(x != '(')                
			{
				postfix_exp[j] = x;
				j++;
				x = pop();
			}
		}
		
		else
		{ 	printf("\nInvalid infix Expression.\n");
			getchar();
			exit(1);
		}
		i++;

		item = infix_exp[i]; 
	} 
	
	if(top>100)
	{
		printf("\nInvalid infix Expression.\n");        
		getchar();
		exit(1);
	}

	postfix_exp[j] = '\0';
}

void main()
{
	
	
	while(1)
    {
		char infix[100], postfix[100];
		int ch;
		printf("\nMENU");
		printf("\n1.Enter Infix Expression\t\t2. Convert Infix to Postfix\t\t3.Exit\t");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{	         
				printf("Enter Infix expression : ");
				scanf("%s",infix);
				break;
			}
			case 2:
			{
				InfixToPostfix(infix,postfix);                   
				printf("Postfix Expression: ");
				printf("%s \n",postfix);
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
