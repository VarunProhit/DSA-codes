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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp =head,*prev=head;
        int cnt=0;
        while(temp)
        {
            cnt++;
            temp=temp->next;
}
        n = cnt-n+1;
        if(n==1)
            return head->next;
        temp=head;
        cnt=0;
        while(temp)
        {
             cnt++;
            if(cnt==n)
            {
                prev->next=temp->next;
                return head;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};