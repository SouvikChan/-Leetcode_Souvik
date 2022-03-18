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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* dummy=head;
        if(!head->next){
            head=NULL;
            return head;
        }
        while(fast && fast->next){
            if(fast!=head)
                slow=slow->next;
            fast=fast->next->next;
            dummy=dummy->next;
        }
        slow->next=dummy->next;
        delete(dummy);
        return head;
    }
};