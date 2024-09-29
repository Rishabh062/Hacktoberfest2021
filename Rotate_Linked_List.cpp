/*
Input: head = [1,2,3,4,5], k = 3
Output: [3,4,5,1,2]  =>  rotated the list to the right by k places.
*/


#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* rotateRight(Node* head, int k) {
            
        Node *curr = head;
        Node *tail = head;
        
        if(head == NULL or head->next == NULL)
            return head;
       
        int count = 1;
        while(tail->next != NULL)
        {
            count++;
            tail = tail->next;
        }
        
        if(k == 0 or k%count == 0)
            return head;
        
        k = k%count;
        
        
        for(int i=0; i<count-k-1; i++)
            curr = curr->next;            
        
        Node *newhead = curr->next;
        curr->next = NULL;
        tail->next = head;
        
        return newhead;
 }


void print(Node *n)
{
    while( n!= NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    head->next = second;
    Node *third  = new Node(3);
    second->next = third;
    Node *fourth = new Node(4);
    third->next = fourth;
    Node *fifth = new Node(5);
    fourth->next = fifth;
  
  int k = 3;
  
  Node * res = rotateRight(head, k);
  print(res);
  return 0;
}
