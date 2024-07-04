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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* h = head;
        int ans=0;
        while(h!=NULL)
        {
            if(h->next && h->next->val==0)
            {
                h->val = ans+h->val;;
                ans=0;
                h = h->next;
            }
            else {
                
                ans+=h->val;
                h->val=0;
            }
            h=h->next;
        }
        int cnt=0;
        h  = head;
        ListNode* prev;
        while(h!=NULL)
        {
           if(h->val!=0){
              if(cnt==0)
              {
                    head=h;
                    // curr = head;
                    prev = h;
                  cnt=1;
              }
               else{
                   prev->next = h;
                   prev = h;
               }
           }
            
            h = h->next;
        }
        prev->next=NULL;
        return head;
    }
};