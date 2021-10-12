#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution{
  public:
    Node* merge(Node* head1, Node* head2)
    {
        Node *temp=new Node(-1), *final=temp;
        while(head1 && head2)
        {
            if(head1->data <= head2->data)
            {
                if(temp==NULL)
                    temp=head1;
                else
                    temp->next=head1;
                head1=head1->next;
            }
            else
            {
                if(temp==NULL)
                    temp=head2;
                else
                    temp->next=head2;
                head2=head2->next;
            }
            temp=temp->next;
        }
        while(head1)
        {
            temp->next=head1;
            head1=head1->next;
            temp=temp->next;
        }
        while(head2)
        {
            temp->next=head2;
            head2=head2->next;
            temp=temp->next;
        }
        return final->next;
    }
    
    Node* findMid(Node* head)
    {
        Node *slow=head;
        Node *fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    Node* mergeSort(Node* head)
    {
        if(head->next==NULL)
        return head;
        Node *head1=head, *temp1, *temp2;
        Node *temp=findMid(head);
        Node *head2=temp->next;
        temp->next=NULL;
        
        temp1=mergeSort(head1);
        temp2=mergeSort(head2);
        return merge(temp1, temp2);
    }
};

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
} 
