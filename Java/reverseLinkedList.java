
class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 }
 
class Solution {
    ListNode reverse(ListNode cur,ListNode prev){
         if(cur==null){
             return prev;
         }
         ListNode next=cur.next;
         cur.next=prev;
         return reverse(next,cur);
     }
     public ListNode reverseList(ListNode head) {
         return reverse(head,null);
     }
 }