/*

Problem Statement: Write a C++ code to reverse a double linked list and demonstrate its working by giving an example

Time complexity achieved: O(N) where N is the number of nodes in the initial doubly linked list which is to be reversed.

Explanation for time complexity: We visit each node and swap their next and previous pointers. So, it is accomplished in linar time.

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node node;

struct node{
    node* prev;
    int data;
    node* next;
};

node* insert_doubly(node* head, int val){
    node* new = malloc(sizeof(node));
    new->data=val;
    new->next=NULL;

    if (head==NULL){
        new->prev=NULL;
        return new;
    }

    else {
        while(head->next!=NULL){
            head = head->next;
        }

        head->next = new;
        new->prev=head;
    }
}

node* reverse_doubly(node* head){
    node* curr = head;
    node* temp;

    while(curr->next!=NULL){
        temp = curr->next;
        curr->next = curr->prev;
        curr->prev=temp;
        curr = temp;
    }

    curr->next = curr->prev;
    curr->prev=NULL;
    return curr;
}

node* delete_doubly(node* head, int val){

    node* curr = head;

    while(curr->data!=val){
        curr = curr->next;
    }

    node* temp = curr->prev;

    temp->next = curr->next;

    free(curr);

    return head;
}

void print_doubly(node* head){
    while(head!=NULL){
        printf("%d\t", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(void){

    node* head = NULL;

    head = insert_doubly(head, 8);
    insert_doubly(head, 13);
    insert_doubly(head, 34);
    insert_doubly(head, 76);
    insert_doubly(head, 1);
    insert_doubly(head, 98);

    print_doubly(head);

    head = reverse_doubly(head);

    print_doubly(head);

    return 0;
}
