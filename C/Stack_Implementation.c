// Problem Statement: Implementaion of basic operations like push, pop, peek(top element) in Stack
// Time Complexity: 
// push(): O(1)
// pop(): O(1)
// peek(): O(1)
#include<stdio.h>
#include<conio.h>
struct Stack
{
    int capacity;
    int top;
    int *ptr;
};
struct Stack* createStack(int cap) // this function creates the stack according to the capacity received via cap 
{
    struct Stack* s=malloc(sizeof(struct Stack));
    s->capacity= cap;
    s->top= -1;
    s->ptr= malloc(sizeof(int)* cap);
    return s;
}
void push(struct Stack* s) // It is responsible to push an element at top of the stack
{
    if(s->capacity-1 == s->top)
        printf("Overflow");
    else
    {
        int data;
        printf("Enter data to push into stack = ");
        scanf("%d",&data);
        s->top+= 1;
        s->ptr[s->top]= data;
    }
}
int pop(struct Stack* s) // It is responsible to pop an element from the top of the stack
{
    if(s->top == -1)
          {
             printf("Underflow");
             return -1;
          }
    else
    {
        s->top-=1;
        return (s->ptr[s->top + 1]);
    }
}
void peek(struct Stack* s) // It prints the element present at top of the stack
{
    if(s->top == -1)
        printf("Stack is empty");
    else
        printf("Element present at top is %d ",s->ptr[s->top]);
}
void display(struct Stack* s) // This function displays all the elements present inside stack- from the top
{
    int i= s->top;
    printf("TOP-> ");
    while(i > -1)
    {
        printf("%d ",s->ptr[i]);
        --i;
    }
}
int menu() 
{
    int choice;
    printf("\nMENU");
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. PEEK");
    printf("\n4. EXIT");
    printf("\n\nEnter your choice = ");
    scanf("%d",&choice);
    return choice;
}
void main()
{
    int cap, data;
    printf("Enter capacity of stack = ");
    scanf("%d",&cap);
    struct Stack* s= createStack(cap);
    while(1)
    {
        system("cls");
        display(s);
        switch(menu()) // It jumps to the case number according to the returned value from the menu()
        {
        case 1:
            push(s);
            break;
        case 2:
            data= pop(s);
            if(data != -1)
                printf("Element to be popped out is %d ",data);
            break;
        case 3:
            peek(s);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice, try again!");
        }
        getch();
    }
}
