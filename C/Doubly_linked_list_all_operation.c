#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *emplist(struct Node *start, int data);
struct Node *beg(struct Node *start, int data);
struct Node *end(struct Node *start, int data);
struct Node *nposition(struct Node *start, int data, int position);
void disp(struct Node *start);

int main()
{
    struct Node *start = NULL;
    int ch, data, Position;
    while (1)
    {
        printf("1. Insert in an Empty List\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert at End\n");
        printf("4. Insert at nth Position\n");
        printf("5. Display\n");
        printf("6.End Program\n");
        printf("Enter Choice::");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (start != NULL)
            {
                printf("LIst is not empty\n");
                break;
            }
            printf("Enter the element :");
            scanf("%d", &data);
            start = emplist(start, data);
            break;

        case 2:
            printf("Enter the element :");
            scanf("%d", &data);
            start = beg(start, data);
            break;

        case 3:
            printf("Enter the element :");
            scanf("%d", &data);
            start = end(start, data);
            break;

        case 4:
            printf("Enter the element :");
            scanf("%d", &data);
            printf("Enter Position :");
            scanf("%d", &Position);
            start = nposition(start, data, Position);
            break;

        case 5:
            disp(start);
            break;

        case 6:
            exit(0);

        default:
            printf("Wrong Choice!");
        }
    }
}
struct Node *emplist(struct Node *start, int data)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    start = temp;
    return start;
}
struct Node *beg(struct Node *start, int data)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = start;
    start->prev = temp;
    start = temp;
    return start;
}
struct Node *end(struct Node *start, int data)
{
    struct Node *temp, *p;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    temp->prev = p;
    temp->next = NULL;

    p->next = temp;
    return start;
}
struct Node *nposition(struct Node *start, int data, int position)
{
    struct Node *temp, *p;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    if (position == 1)
    {
        temp->next = start;
        start->prev = temp;
        start = temp;
        return start;
    }
    p = start;
    for (int i = 1; i < position - 1 && p != NULL; i++)
    {
        p = p->next;
    }

    if (p == NULL)
    {
        printf("There are less than %d elements\n", position);
    }
    else
    {
        temp->prev = p;
        temp->next = p->next;
        if (p->next != NULL)
            p->next->prev = temp;
        p->next = temp;
    }
    return start;
}
void disp(struct Node *start)
{
    struct Node *p;
    if (start == NULL)
    {
        printf("List is Empty\n");
    }
    p = start;
    printf("List: \n");
    while (p != NULL)
    {
        printf("%d \t", p->data);
        p = p->next;
    }
    printf("\n");
}
