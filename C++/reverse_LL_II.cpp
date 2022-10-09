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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        /*
        Dividing the problem into phases :- 
        1) Take the prev and current pointer, the current pointer should
           reach to left, and prev would always be behind the current pointer
        */
        ListNode *newnode = new ListNode(0);
        newnode->next = head;
        
        ListNode *leftPrev = newnode;
        ListNode *current = head;
        
        for(int i = 0; i < left-1; i++){
            leftPrev = current;
            current = current->next;
        }
        
         /* 
        2) Reversing the links between left and right, so what we can 
           basically do is to perform the reversing in the range right-left+1
           now, current = left, leftPrev = node before left
           reverse left to right
        */
        
        ListNode *prev = NULL;
        for(int i = 0; i < right-left+1; i++){
            ListNode *temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        /*
         3) Just connecting the links
            
            dummy(0) -> 1 -> 2 <- 3 <- 4 -> 5   left = 2, right = 4
                        |              |    |
                    leftPrev          prev  current
            leftprev next next = current    (as current is node after right)
            leftprev next = prev (prev is right)
        */
        
        leftPrev->next->next = current;
        leftPrev->next = prev;
        return newnode->next;
    }
};