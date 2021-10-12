//CLL
#include <stdio.h>
#include <stdlib.h>
/*Structure of node with data and a pointer */
struct node {
int data;
struct node * next;
}*head;

void createList(int n);
void displayList();
void insert_beginning(int data);
void search_element(int data);
void updating_element(int data);
void insert_given_position(int data, int position);
void delete_beginning();
void delete_given_position();
void reverse_list();

int main()
{
int n, data, choice=1;
head = NULL;
do
{
printf("\n\n\t\tCIRCULAR LINKED LIST BASIC OPERATIONS\n\n");
printf("1. Create List\n");
printf("2. Insert at beginning\n");
printf("3. Insert at any position\n");
printf("4. Delete at beginning\n");
printf("5. Delete at any position\n");
printf("6. Search Element\n");
printf("7. Update Element\n");
printf("8. Reverse List\n");
printf("0. Exit\n");
printf("\n\n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Enter the total number of nodes in list: ");
scanf("%d", &n);
createList(n);
displayList();
break;
case 2:
printf("Enter data to be inserted at beginning: ");
scanf("%d", &data);
insert_beginning(data);
displayList();
break;
case 3:
printf("Enter node position: ");
scanf("%d", &n);
printf("Enter data you want to insert at %d position: ", n);
scanf("%d", &data);
insert_given_position(data, n);
displayList();
break;
case 4:
if(head == NULL)
{
printf("\nThe list is empty\n");
}
else
{
delete_beginning();
displayList();
}
break;
case 5:
if(head == NULL)
{
printf("\nThe list is empty\n");
}
else
{
delete_given_position();
displayList();
}
break;
case 6:
printf("\nEnter the element to be searched : ");
scanf("%d",&data);
search_element(data);
break;
case 7:
printf("\nEnter the element to be updated : ");
scanf("%d",&data);
updating_element(data);
printf("\nThe Updated List is\n\n");
displayList();
break;
case 8:
reverse_list();
break;
case 0:
break;
default:
printf("Error! Invalid choice.");
}
printf("\n");
}while (choice != 0);
return 0;
}

void createList(int n)
{
int i, data;
struct node *prevNode, *newNode;
if(n >= 1)
{
//Creates and links the head node
head = (struct node *)malloc(sizeof(struct node));
printf("Data of node 1 : ");
scanf("%d", &data);
head->data = data;
head->next = NULL;
prevNode = head;

//Creates and links rest of the n-1 nodes
for(i=2; i<=n; i++)
{
newNode = (struct node *)malloc(sizeof(struct node));
printf("Data of node %d : ", i);
scanf("%d", &data);
newNode->data = data;
newNode->next = NULL;

prevNode->next = newNode; //Links the previous node with newly created node
prevNode = newNode; //Moves the previous node ahead
}

prevNode->next = head; //Links the last node with first node
}
}

void displayList()
{
struct node *current;
int n = 1;
if(head == NULL)
{
printf("List is empty.\n");
}
else
{
current = head;
printf("The SINGLY CIRCULAR LINKED LIST IS : \n");
do {
printf("%d\t",current->data);
current = current->next;
n++;
}while(current != head);
}
}

void insert_beginning(int data)
{
struct node *newNode, *current;
if(head == NULL)
{
printf("List is empty.\n");
}
else
{
//Creates new node, assign data and links it to head
newNode = (struct node *)malloc(sizeof(struct node));
newNode->data = data;
newNode->next = head;
printf("\nThe element %d is inserted at the beginning",data);
printf("\n");

//Traverses to last node and links last node with first node which is new node
current = head;
while(current->next != head)
{
current = current->next;
}
current->next = newNode;

head = newNode; //Makes new node as head node
}
}

void insert_given_position(int data, int position)
{
struct node *newNode, *current;
int i;
if(head == NULL)
{
printf("List is empty.\n");
}
else if(position == 0)
{
insert_beginning(data);
}
else
{
//Creates new node and assign data to it
newNode = (struct node *)malloc(sizeof(struct node));
newNode->data = data;
printf("\nThe element %d is inserted at index %d",data,position);
printf("\n");

//Traverse to n-1 node
current = head;
for(i=2; i<=position; i++)
{
current = current->next;
}
//Links new node with node ahead of it and previous to it
newNode->next = current->next;
current->next = newNode;
}
}

void delete_beginning()
{
struct node * temp,*s;
// When start and end of the list are same
if (head == head->next)
{
head = NULL;
printf("\nThe List is empty\n");
}
else
{
temp = head;
s = head;
while (temp->next != head) // Traverse until start node is reached again
{
temp = temp -> next;
}
printf("\nThe element %d is deleted at the beginning",s -> data);
printf("\n");
head = s->next; // shift head node
temp->next = head;
printf("\n");
free(s);
}
}

void delete_given_position()
{
struct node * temp, *s;
if (head == NULL)
printf("\nThe List is empty");
else
{
int count = 0, pos;
printf("\nEnter the position to be deleted : ");
scanf("%d", &pos);
temp = head;
while (count < pos)
{
s = temp;
temp = temp -> next;
count++;
}
printf("\nThe element %d at index %d is deleted",temp -> data,pos);
printf("\n");
s -> next = temp -> next; 
printf("\n");
free(temp);
}
}

void search_element(int data)
{
struct node * temp = head;
int index = 0;
while(temp)
{
if(temp -> data == data)
{
printf("\nElement found at index %d in the list",index); //Print if the element is found
break;
}
else
{
temp = temp -> next;
index++;
}
}
}

void updating_element(int data)
{
int new_data;
printf("\nEnter the new data to replace with : ");
scanf("%d",&new_data);
struct node * temp = head;
while(temp)
{
if(temp -> data == data)
{
temp -> data = new_data; //Update the element if found and exit the loop
break;
}
else
{
temp = temp -> next;
}
}
}

void reverse_list()
{
struct node *prev, *cur, *next, *last;
printf("\nThe reversed List is\n\n");
// Cannot reverse empty list
if (head == NULL)
{
printf("Cannot reverse empty list.\n");
return;
}

// Head is going to be our last node after reversing list
last = head;
prev = head;
cur = (head)->next;
head = (head)->next;
// Iterate till you reach the initial node in circular list
while (head != last)
{
head = head -> next;
cur->next = prev;
prev = cur;
cur = head;
}
cur->next = prev;
head = prev;
displayList();
}