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
    ListNode* reverseList(ListNode* head) {
       ListNode* prev = NULL, *next = NULL, *curr = head;
        
    //     while(curr)
    //     {
    //        next = curr->next;
    //        curr->next=prev;
    //         prev=curr;
    //         curr=next;
    //     }
    //     return prev;
        ListNode* p =NULL,*temp =head,*c=NULL;
        while(temp!=NULL)
        {
           c = temp->next;
           temp->next=p;
           p=temp;
            temp=c;
        
        }
       return p; 
    }
};