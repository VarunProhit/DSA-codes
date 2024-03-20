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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     
        int ca=1,cb=1;
        ListNode* h1;
        ListNode* h2=list1;
        ListNode* r1=list1;
        
        while(ca<a)
        {
            ca++;
            r1=r1->next;
        }  
        // h2=list1;
        while(cb<=b)
        {
            cb++;
            h2=h2->next;
        }
        r1->next=list2;
        while(list2->next!=NULL)list2=list2->next;
        list2->next=h2->next;
        return list1;
        
    }
};