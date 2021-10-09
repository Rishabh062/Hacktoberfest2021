 Time Complexity: O(N).
 Auxiliary Space: O(1).
 
Example:
Input:
LinkedList: 4->5->6
Output: 457
  
class Solution
{
    public:
    Node* rev(Node *head){
        Node *prev=NULL;
        Node *curr=head;
        Node *next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node *add1(Node *head){
        Node *p=head;
        Node *temp=NULL;
        int carry=1,sum=0;
        while(p!=NULL){
            sum=carry+p->data;
            carry=(sum>=10)? 1: 0;
            sum=sum%10;
            p->data=sum;
            temp=p;
            p=p->next;
        }
        if(carry>0)
        temp->next=new Node(carry);
        return head;
    }
   
    Node* addOne(Node *head) 
    {
        if(head==NULL)
        return NULL;
        
        head=rev(head);
        head=add1(head);
        
        return rev(head);
        
    }
};


