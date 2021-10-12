#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
int main(){
    node *head,*newnode;
    head=NULL;
    newnode=(node*) malloc (sizeof(newnode));
    printf("\n Enter data of node 1 : ");
    scanf("%d",newnode->data);
    printf("\n Entered data : ",);
}
