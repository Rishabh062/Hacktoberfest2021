/* Searching an element in the linked list */

#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};

/* Push element in the linked list */
void push(struct Node** head,int x)
{
    struct Node* newnode = new Node;
    newnode->data = x;
    newnode->next = *head;
    *head = newnode;
}

/* Searching an element in the linked list */
bool search(struct Node* head,int x)
{
    if(head == NULL)
        return false;
    if(head->data==x)
        return true;
    return search(head->next,x);
}

int main()
{
    struct Node* head = NULL;
    int n,x,y;
    cout<<"How many numbers?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number:"<<endl;;
        cin>>x;
        push(&head,x);
    }
    cout<<"Enter the element to be searched: "<<endl;
    cin>>y;
    search(head,y)?cout<<"yes":cout<<"No";
    return 0;
}
