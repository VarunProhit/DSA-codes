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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
      ListNode* main=new ListNode(0);   // Make a new dummy node to store head pointer
      ListNode* head=main;
        
      while(l1!=NULL && l2!=NULL)       // when any one reaches NULL then we get out of this loop
      {
          if(l1->val < l2->val)                  
            {
              head->next=l1;            // if l1 value is smaller than l2 then place it next to head.
              l1=l1->next;
            }
          else
            {
              head->next=l2;            // if l2 value is smaller than l1 then place it next to head.
              l2=l2->next;
            }
         head=head->next; 
      }
     
        if(l1!=NULL)                    // In few cases l1 will not have reached its NULL when l2 reached. So just add remaining to head.
          {
            head->next=l1;
            l1=l1->next;
          }
        
        if(l2!=NULL)                   // In few cases l2 will not have reached its NULL when l1 reached. So just add remaining to head.
          {
            head->next=l2;
            l2=l2->next;
          }
    return main->next;                // Actual node starts from next of dummy node
    }
};