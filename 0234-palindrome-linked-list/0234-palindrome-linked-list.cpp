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

bool isPalindrome(ListNode* head){
     ListNode* temp1 = head;
    ListNode* temp2 = head;
    stack<int> s;
    
    while(temp1 != NULL){
        s.push(temp1->val);
        temp1 = temp1->next;
    }
    
    while(temp2 != NULL){
        if(temp2->val == s.top()){
            temp2 = temp2->next;
            s.pop();
        }else{
            return false;
        }
    }
    return true;
    
}
};