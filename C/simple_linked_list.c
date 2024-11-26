#include <stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}Node;

int main(void)
{
  Node*temp;
  Node*start=NULL;
  Node* p=NULL;
  
  int n;
  scanf("%d",&n);

  while(n--)
  {
     temp=(Node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    if(start==NULL)
    {
      start=temp;
      p=temp;
    }
    else
    {  
      p->next=temp;
      p=temp;
    }
    
  }
  
  while(start!=NULL)
  {
    if(start->next!=NULL)
      printf("%d->",start->data);
    else
      printf("%d",start->data);

    start=start->next;
  }
  return 0;
}