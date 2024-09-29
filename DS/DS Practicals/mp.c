#include<stdio.h>
#include<stdlib.h>
struct node
{
int data,p;
struct node* next;
};
struct node* f = NULL;
struct node* r = NULL;
void enqueue(int d,int pr) //Insert the element and priority in Queue
{ struct node* temp;
struct node* new_n;
new_n = (struct node*)malloc(sizeof(struct node));
new_n->data = d;
new_n->p = pr;
if((f==NULL)||(pr))
{
new_n->next = f;
f = new_n;
}
else
{
temp = f;
while((temp->next != NULL)&&((temp->next->p) <=
pr)) temp = temp->next;
new_n->next = temp->next;
temp->next = new_n;
}
}
void print() //Print the data of Queue
{
struct node* temp = f;
while(temp != NULL)
{
printf("\nData = %d\tPriority = %d ",temp->data,temp->p);
temp = temp->next;
}
}
void dequeue() //Deletion of highest priority element from the Queue
{
struct node* temp;
if(f==NULL) //Check for Underflow condition
printf("\nQueue is Empty");
else
{
temp = f;
f = f->next;
printf("\nDeleted element:- %d\t and Its Priority:- %d",temp->data,temp->p);
free(temp);
}
}
int main()
{
int opt,n,i,data,pr;
printf("Enter Your Choice:-");
do{
printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue \n3 for Delete the data from the Queue\n0 for Exit");
scanf("%d",&opt);
switch(opt){
case 1:
printf("\nEnter the number of data");
scanf("%d",&n);
printf("\nEnter your data and its priorities");
i=0;
while(i<n){
scanf("%d %d",&data,&pr);
enqueue(data,pr);
i++;
}
break;
case 2:
print();
break;
case 3:
dequeue();
break;
case 4:
break;
default:
printf("\nIncorrect Choice");
}
}while(opt!=0);
return 0;
}