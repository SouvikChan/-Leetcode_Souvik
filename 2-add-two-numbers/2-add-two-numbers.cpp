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
    void append(ListNode** head, int x){
        struct ListNode* new_node = new ListNode(x);
        if(*head == NULL){
           *head = new_node;
            return;
        }
        ListNode* last = *head;
        while(last->next){
            last = last->next;
        }
        last->next = new_node;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        struct ListNode* ans = NULL;
        while(l1 && l2){
            int c = l1->val + l2->val + carry;
            carry = c/10;
            append(&ans, c%10);
            l1 = l1->next; 
            l2 = l2->next;
        }
        
        while(l1){
            int c = l1->val + carry;
            carry = c/10;
            append(&ans, c%10);
            l1 = l1->next;
        }
        
        while(l2){
            int c = l2->val + carry;
            carry = c/10;
            append(&ans, c%10);
            l2 = l2->next;
        }
        
        if(carry)   append(&ans, carry);
        
        return ans;
    }
};