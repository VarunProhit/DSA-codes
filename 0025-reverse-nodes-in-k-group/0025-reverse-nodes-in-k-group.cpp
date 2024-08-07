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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *next =NULL, *prev=NULL, *curr =head;
        
        if(head==NULL)
            return NULL;
        
        int cnt=0;
        while(cnt<k && curr!=NULL)
        {
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        if(cnt<k)
        {
            curr=prev;
            next=NULL;
            prev=NULL;
             while(curr!=NULL)
        {
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        }   
        if(curr)
            head->next = reverseKGroup(next,k);
        
        return prev;
    }
};