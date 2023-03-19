#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
#include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

Node *midPoint(Node *head)
{
    // Write your code here
    if(head==NULL)//-1
    {
        return head;
    }
    Node *slow=head;
    Node *fast=head->next;
    Node *length=head;
    int flag=1;
    
    while (length != NULL && length->next != NULL)
    {
        length = length->next->next;
    }
    
    if(length==NULL)
    {
        while(fast->next!=NULL)//even
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    }
    else{
        while(fast!=NULL)//even
        {
            slow=slow->next;
            fast=fast->next->next;
        }
    }
    return slow;
 
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	}
	return 0;
}
