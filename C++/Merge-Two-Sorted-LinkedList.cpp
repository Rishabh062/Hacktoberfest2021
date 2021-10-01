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
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    if(head1==NULL && head2==NULL)
    {
        return head1;
    }
    else if(head1!=NULL && head2==NULL)
    {
        return head1;
    }
    else if(head1==NULL && head2!=NULL)
    {
        return head2;
    }
    else
    {
        Node *FH=NULL;
        Node *FT=NULL;
        Node *temp=NULL;
        
        //FOR FINAL HEAD
        if(head1->data > head2->data){
            FH=head2;
            FT=head2;
            head2=head2->next;
        }
        else
        {
            FH=head1;
            FT=head1;
            head1=head1->next;
        }
        
        //REMAIN LINKED LIST
        while(head1 != NULL && head2 != NULL)
        {
            if(head1->data < head2->data)
            {
                FT->next=head1;
                FT=head1;
                head1=head1->next;
            }
            else
            {
                FT->next=head2;
                FT=head2;
                head2=head2->next;
            }
            
            if(head1 != NULL) 
            { 
		        FT -> next = head1; 
	        } 
	        if(head2 != NULL)
            { 
		        FT -> next = head2; 
	        } 
        }
        
        return FH;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}
