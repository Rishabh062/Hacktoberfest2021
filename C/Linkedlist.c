//Problem: Create a singly linked list and traverse in it.
#include<stdio.h>
#include<stdlib.h>

//Create node of linked list
struct Node {
    int data;
    struct Node* next;
};
//linked list traversal
//Complexity: O(n) where n = number of nodes
void LLTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the first node's value: ");
    scanf("%d",&head->data);
    //head->data = 7;
    head->next = second;

    printf("Enter the second node's value: ");
    scanf("%d",&second->data);
    //second->data = 11;
    second->next = third;

    printf("Enter the third node's value: ");
    scanf("%d",&third->data);
    //third->data = 66;
    third->next = fourth;

    printf("Enter the fourth node's value: ");
    scanf("%d",&fourth->data);
    //fourth->data = 2;
    fourth->next = NULL;

    LLTraversal(head);
    return 0;
}
