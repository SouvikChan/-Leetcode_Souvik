/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* fast=node;
        ListNode* slow= node;
        slow->val=slow->next->val;
        fast->next=fast->next->next;
    }
};