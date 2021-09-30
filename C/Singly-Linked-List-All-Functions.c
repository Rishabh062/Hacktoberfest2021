// Singly Linked List All Functions in C - Nishant Giri

#include<stdio.h> 
#include<stdlib.h> 
struct node
{
	int data;
	struct node *next;
};
void createList(struct node **start, int n)
{
	int i; 
	for(i = 0; i < n; i++)
	{
		struct node *new = (struct node *)malloc(sizeof(struct node)); 
		struct node *temp;
		printf("Enter the Data: "); 
		scanf("%d", &new->data); 
		new->next = NULL; 
		if(*start == NULL)
			temp = *start = new; 
		else
		{
			temp->next = new; 
			temp = new;		
		}
	}
}
void traverseList(struct node **start)
{
	struct node *temp = *start; 
	printf("\nList: "); 
	while(temp != NULL)
	{
		printf("%d ", temp->data); 
		temp = temp->next;
	}
	printf("\n");
}
void checkList(struct node **start)
{
	if(*start == NULL)
		printf("\nThe List Is Empty\n"); 
	else
		printf("\nThe List Isn't Empty\n");
} 
void insertBeginning(struct node **start, int element)
{	
	struct node *new = malloc(sizeof(struct node)); 
	new->data = element;
	new->next = *start;
	*start = new;
}
void insertEnd(struct node **start, int element)
{
	struct node *new = malloc(sizeof(struct node)); 
	struct node *temp;
	temp =* start;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	new->data = element; 
	temp->next = new; 
	new->next = NULL;
}
void insertPosition(struct node **start, int element, int position)
{
	struct node *new = malloc(sizeof(struct node)); 
	struct node *temp;
	temp = *start; 
	int i; 
	if(position == 1)
	{
		new->data = element; 
		new->next = *start;
		*start = new;
	}
	for(i = 1; i < position - 1; i++)
		temp = temp->next;
	new->data = element;
	new->next = temp->next; 
	temp->next = new;
}
void deleteBeginning(struct node **start)
{
	struct node *temp = *start;
	*start = (*start)->next; 
	free(temp);
}
void deleteEnd(struct node **start)
{
	struct node *temp, *new; 
	temp = *start;
	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}
	new = temp->next; 
	free(new);
	temp->next = NULL;
}
void deletePosition(struct node **start, int position)
{
	struct node *temp, *new; 
	int i;
	temp = *start; 
	if(position == 1)
	{
		*start = (*start)->next; 
		free(temp);
	}
	for(i = 1; i < position - 1; i++)
		temp = temp->next;
	new = temp->next;
	temp->next = new->next; 
	free(new);
	temp = temp->next;
}
void deleteKey(struct node **start, int element)
{
	int tempElement;
	struct node *temp, *new; 
	if((*start)->data == element)
	{
		temp = *start;
		*start = (*start)->next; 
		tempElement = temp->data; 
		free(temp);
		printf("\nElement Deleted: %d\n", tempElement);
 	}
	else
	{
		temp = (*start)->next; 
		new = *start; 
		while(temp != NULL)
		{
			if(temp->data == element)
			{
				new->next = temp->next; 
				tempElement = temp->data;
				printf("\nDeleted Element: %d\n", tempElement); 
				free(temp);
				return;
			}
			if((temp->next == NULL) && (temp->data == element))
			{
				tempElement = temp->data; 
				new->next = NULL;
				printf("\nDeleted Element: %d\n", tempElement); 
				free(temp);
				return;
			}
			new = temp; 
			temp = temp->next;
		}	
		if(temp == NULL)
		{
			printf("\nElement Isn't Present\n"); 
			return;
		}
	}
}
void countNodes(struct node **start)
{
	int count = 0;
	struct node *temp = *start; 
	while(temp != NULL)
	{
		count++; 
		temp = temp->next;
	}
	printf("\nTotal Number of Nodes: %d\n", count);
}
void searchElement(struct node **start, int element)
{
	int count = 0;
	struct node *temp = *start; 
	while(temp != NULL)
	{
		count++;
		if(temp->data == element)
		{
			printf("\nElement %d Is Present At Node %d\n", element, count);
			break;
		}
	}
	temp = temp->next;
}
int main()
{
	struct node *start = NULL;
	int n, element, position, choice;
	while(1)
	{
		printf("1. Create List\n");
		printf("2. Traverse List\n");
		printf("3. Check List\n");
		printf("4. Insert Node At Beginning\n");
		printf("5. Insert Node At End\n");
		printf("6. Insert Node At Given Position\n");
		printf("7. Delete Node From Beginning\n");
		printf("8. Delete Node From End\n");
		printf("9. Delete Node From Given Position\n");
		printf("10. Delete Node For Given Key\n");
		printf("11. Count Total Number of Nodes\n");
		printf("12. Search Element\n");
		printf("13. Exit\n\n");
		printf("Enter Your Choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter Number of Terms: ");
				scanf("%d", &n);
				printf("\n");
				createList(&start, n);
				break;
			case 2:
				traverseList(&start);
				break;
			case 3:
				checkList(&start);
				break;
			case 4:
				printf("\nEnter Element To Add: ");
				scanf("%d", &element);
				insertBeginning(&start, element);
				traverseList(&start);
				break;
			case 5:
				printf("\nEnter Element To Add: ");
				scanf("%d", &element);
				insertEnd(&start, element);
				traverseList(&start);
				break;
			case 6:
				printf("\nEnter Element To Add: ");
				scanf("%d", &element);
				printf("Enter the Position: ");
				scanf("%d", &position);
				insertPosition(&start, element, position);
				traverseList(&start);
				break;
			case 7:
				deleteBeginning(&start);
				traverseList(&start);
				break;
			case 8:
				deleteEnd(&start);
				traverseList(&start);
				break;
			case 9:
				printf("\nEnter the Position: ");
				scanf("%d", &position);
				deletePosition(&start, position);
				traverseList(&start);
				break;
			case 10:
				printf("\nEnter Element To Delete: ");
				scanf("%d", &element);
				deleteKey(&start, element);
				traverseList(&start);
				break;
			case 11:
				countNodes(&start);
				break;
			case 12:
				printf("\nEnter Element For Searching: ");
				scanf("%d", &element);
				searchElement(&start, element);
				break;
			case 13:
				exit(0);
		}
		printf("\n");
	}
	traverseList(&start);
	return 0;
}