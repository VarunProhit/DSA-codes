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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp)
        {
            ListNode* t1 = temp->next;
            if(t1==NULL)break;
            while(t1 && t1->val == temp->val)
             t1=t1->next;
            temp->next=t1;
            temp=t1;
        }
        return head;
    }
};