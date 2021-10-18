#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} * head, *tail;

void newnode()
{
    struct Node *newNode;
    head = NULL;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    if (head == NULL)
    {
        head = tail = newNode;
        head->next = head;
        tail->prev = head;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail = newNode;
    }
}

int getLength(struct Node *head, struct Node *tail)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;
    int len = 0;
    do
    {
        len++;
        temp = temp->next;
    } while (temp->prev != tail);
    return len;
}

void display()
{
    struct Node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp->prev != tail);
        printf("\n");
    }
}

void insertAtBeg()
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data to be inserted at beginning: ");
    scanf("%d", &newNode->data);
    if (head == NULL)
    {
        head = tail = newNode;
        newNode->next = head;
        newNode->prev = tail;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = tail;
        tail->next = newNode;
        head = newNode;
    }
}

void insertAtEnd()
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data to be inserted at end: ");
    scanf("%d", &newNode->data);
    if (head == NULL)
    {
        head = tail = newNode;
        newNode->next = head;
        newNode->prev = tail;
    }
    else
    {
        newNode->next = head;
        newNode->prev = tail;
        tail->next = newNode;
        head->prev = newNode;
        tail = newNode;
    }
}

void insertAtPos()
{
    struct Node *newNode, *temp;
    int pos, i = 1, l;
    temp = head;
    l = getLength(head, tail);
    printf("Enter the position at which data is to be entered: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > l)
    {
        printf("Invalid position\n");
    }
    else if (pos == 1)
    {
        insertAtBeg();
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data to be inserted: ");
        scanf("%d", &newNode->data);
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void delFromBeg()
{
    struct Node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("The list is empty\n");
    }
    else if (head->next == head)
    {
        printf("Deleted element: %d\n", head->data);
        head = tail = 0;
        free(temp);
    }
    else
    {
        printf("Deleted element: %d\n", head->data);
        head = head->next;
        head->prev = tail;
        tail->next = head;
        free(temp);
    }
}

void delFromEnd()
{
    struct Node *temp;
    temp = tail;
    if (head == NULL)
    {
        printf("The list is empty\n");
    }
    else if (head->next == head)
    {
        printf("Deleted element: %d\n", tail->data);
        head = tail = 0;
        free(temp);
    }
    else
    {
        printf("Deleted element: %d\n", tail->data);
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        free(temp);
    }
}

void delFromPos()
{
    struct Node *temp;
    int pos, i = 1, l;
    temp = head;
    l = getLength(head, tail);
    printf("Enter the position from which element is to be deleted: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > l)
    {
        printf("Posistion is invalid\n");
    }
    else if (pos == 1)
    {
        printf("Deleted element: %d\n", head->data);
        delFromBeg();
    }
    else if (pos == l)
    {
        printf("Deleted element: %d\n", tail->data);
        delFromEnd();
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        printf("Deleted element: %d\n", temp->data);
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

int main()
{
    int a = 1, l;

    while (a)
    {
        printf("\n\n1.Insert at beginning\n2.Insert at the end\n3.Insert an at a position\n4.Delete from beginning\n5.Delete from end\n6.Delete from a position\n7.Display the list\n8.Length of list\n9.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            insertAtBeg();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtPos();
            break;
        case 4:
            delFromBeg();
            break;
        case 5:
            delFromEnd();
            break;
        case 6:
            delFromPos();
            break;
        case 7:
            display();
            break;
        case 8:
            l = getLength(head, tail);
            printf("Length of list is: %d\n", l);
            break;
        case 9:
            exit(0);
        default:
            printf("Wrong choice, please choose a valid operation\n");
        }
    }
}