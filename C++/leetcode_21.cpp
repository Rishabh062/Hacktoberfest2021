/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* result=new  ListNode(-1);
        ListNode* p=list1;
        ListNode* q=list2;
        
        
        ListNode* head;
        if(p==NULL)
            return q;
        if(q==NULL)
            return p;
        if(p->val < q->val)
            head=p;
        else
            head=q;

        while(p!=NULL and q!=NULL)
        {
            if(p->val < q->val)
            {
                result->next=p;
                p=p->next;
                result=result->next;
            }
             
            
            else
            {
                result->next=q;
                q=q->next;
                result=result->next;
            }
                
        }
       while(p!=NULL)
       {
           result->next=p;
           p=p->next;
           result=result->next;
       }
        
         while(q!=NULL)
       {
           result->next=q;
           q=q->next;
           result=result->next;
       }
        return head;
    }
      
};
