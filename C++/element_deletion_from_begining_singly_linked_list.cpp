/*
NAME: Deepankar Varma
TIME COMPLEXITY: O(1)
ALGORITHM:
Step 1: IF HEAD = NULL
Write UNDERFLOW
     Go to Step 5
    [END OF IF]
Step 2: SET PTR = HEAD
Step 3: SET HEAD = HEAD -> NEXT
Step 4: FREE PTR
Step 5: EXIT
*/
#include<stdio.h>  
#include<stdlib.h>  
void create(int);  
void begdelete();  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;  
void main ()  
{  
    int choice,item;  
    do   
    {  
        printf("\n1.Append List\n2.Delete node\n3.Exit\n4.Enter your choice?");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            printf("\nEnter the item\n");  
            scanf("%d",&item);  
            create(item);  
            break;   
            case 2:  
            begdelete();  
            break;   
            case 3:  
            exit(0);  
            break;    
            default:  
            printf("\nPlease enter valid choice\n");  
        }  
    }while(choice != 3);  
}  
void create(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted\n");  
        }  

    }  
void begdelete()  
    {  
        struct node *ptr;  
        if(head == NULL)  
        {  
            printf("\nList is empty");  
        }  
        else   
        {  
            ptr = head;  
            head = ptr->next;  
            free(ptr);  
            printf("\n Node deleted from the begining ...");  
        }  
    } 
