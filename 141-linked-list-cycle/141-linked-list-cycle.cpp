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
    bool hasCycle(ListNode *head) {
        ListNode *left = head, *right = head;
        while (right && right->next) {
            left = left->next;
            right = right->next->next;
            if (left == right) return true;
        }
        
        return false;
    }
};