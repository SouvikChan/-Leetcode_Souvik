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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *a = head, *b = head, *kthNode = NULL;
        while(--k){
            a = a->next;
        }
        kthNode = a;
        a = a->next;
        while(a){
            a = a->next;
            b = b->next;
        }
        swap(kthNode->val, b->val);
        return head;
    }
};